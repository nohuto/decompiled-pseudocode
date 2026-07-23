/*
 * XREFs of sub_14069B200 @ 0x14069B200
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14069B030 @ 0x14069B030 (sub_14069B030.c)
 *     sub_14069B430 @ 0x14069B430 (sub_14069B430.c)
 *     sub_14069B48C @ 0x14069B48C (sub_14069B48C.c)
 *     sub_14069B63C @ 0x14069B63C (sub_14069B63C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140966F60 @ 0x140966F60 (sub_140966F60.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14069B200(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4, unsigned __int64 a5)
{
  void *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rcx
  PVOID v16; // rdi
  NTSTATUS v17; // esi
  NTSTATUS v18; // eax
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  int v22; // r15d
  int v23; // r15d
  int v24; // r15d
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v6 = (void *)a3;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( !a3 )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v10 )
  {
    if ( ((a2 - 3) & 0xFFFFFFF7) != 0 && a4 )
    {
      v11 = a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = a3 + a4 - 1LL;
      if ( a3 > v12 || (a3 = 0x7FFFFFFF0000LL, v12 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
    else
    {
      a3 = 0x7FFFFFFF0000LL;
    }
    v14 = (_DWORD *)a5;
    if ( a5 )
    {
      v15 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
  }
  else
  {
    v14 = (_DWORD *)a5;
  }
  v16 = 0LL;
  if ( !Handle
    || (Object = 0LL,
        v17 = ObReferenceObjectByHandle(Handle, 0x20000u, qword_140D069D8, v10, &Object, 0LL),
        v16 = Object,
        v17 >= 0) )
  {
    if ( a2 )
    {
      v22 = a2 - 3;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 7;
          if ( v24 )
          {
            if ( v24 != 1 )
            {
              v17 = -1073741811;
LABEL_22:
              if ( v16 )
                ObfDereferenceObject(v16);
              goto LABEL_24;
            }
            v18 = sub_14069B48C(v16, v6, a4, v14);
          }
          else
          {
            v18 = sub_14069B63C((_DWORD)v16, (_DWORD)v6, a4, (_DWORD)v14, v10);
          }
        }
        else
        {
          v18 = sub_140966F60((int)v16, (int)v6, a4, (int)v14, v10);
        }
      }
      else
      {
        v18 = sub_14069B030((__int64)v16, v6, a3, v14, v10);
      }
    }
    else
    {
      v18 = sub_14069B430(v16, v6, a4, v14);
    }
    v17 = v18;
    goto LABEL_22;
  }
LABEL_24:
  v19 = KeGetCurrentThread();
  v20 = (*((_WORD *)v19 + 242))++ == 0xFFFF;
  if ( v20 && *((struct _KTHREAD **)v19 + 19) != (struct _KTHREAD *)((char *)v19 + 152) && !*((_WORD *)v19 + 243) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v17;
}
