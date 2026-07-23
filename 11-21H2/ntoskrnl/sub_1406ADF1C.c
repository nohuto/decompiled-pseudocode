/*
 * XREFs of sub_1406ADF1C @ 0x1406ADF1C
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 *     sub_1406AF34C @ 0x1406AF34C (sub_1406AF34C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406ADF1C(__int64 a1, KPROCESSOR_MODE a2)
{
  __int64 Pool2; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  void *v8; // rcx
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  _DWORD *v11; // r15
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  _DWORD *v14; // r14
  int v16; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h]

  Pool2 = 0LL;
  v16 = 0;
  if ( *(_DWORD *)(a1 + 8) == 5 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 < 0x80 )
    {
      v9 = -1073741306;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, v5, 1364354640LL);
      P = (PVOID)Pool2;
      if ( Pool2 )
      {
        if ( a2 )
        {
          v6 = *(unsigned int *)(a1 + 24);
          if ( (_DWORD)v6 )
          {
            v7 = *(_QWORD *)(a1 + 16);
            if ( (v7 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        memmove((void *)Pool2, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        if ( (unsigned int)sub_1406AF34C(Pool2, *(unsigned int *)(a1 + 24)) )
        {
          v9 = -1073741701;
        }
        else
        {
          v8 = *(void **)(Pool2 + 72);
          if ( v8 )
          {
            Object = 0LL;
            v9 = ObReferenceObjectByHandle(v8, 1u, (POBJECT_TYPE)ExEventObjectType, a2, &Object, 0LL);
            *(_QWORD *)(Pool2 + 72) = Object;
            if ( v9 < 0 )
              goto LABEL_20;
            v16 = 1;
          }
          v9 = sub_1406AE11C(Pool2);
          v10 = *(unsigned int *)(Pool2 + 40);
          v11 = (_DWORD *)(v10 + Pool2);
          v12 = v10 + Pool2 + 48LL * *(unsigned int *)(Pool2 + 12);
          v13 = *(_QWORD *)(a1 + 16);
          v14 = (_DWORD *)(v10 + v13);
          if ( a2 )
            ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
          while ( (unsigned __int64)v11 < v12 )
          {
            *v14 ^= (*v14 ^ *v11) & 8;
            v11 += 12;
            v14 += 12;
          }
          *(_OWORD *)(v13 + 84) = *(_OWORD *)(Pool2 + 84);
          *(_OWORD *)(v13 + 100) = *(_OWORD *)(Pool2 + 100);
          *(_QWORD *)(v13 + 116) = *(_QWORD *)(Pool2 + 116);
          *(_DWORD *)(v13 + 124) = *(_DWORD *)(Pool2 + 124);
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  else
  {
    v9 = -1073741821;
  }
LABEL_20:
  if ( v16 )
    ObfDereferenceObject(*(PVOID *)(Pool2 + 72));
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v9;
}
