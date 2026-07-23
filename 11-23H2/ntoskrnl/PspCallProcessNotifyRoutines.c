/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x1406AF984
 * Callers:
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PspExitProcess @ 0x140751624 (PspExitProcess.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140214EF0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140214FB0 (ExDereferenceCallBackBlock.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(struct _EX_RUNDOWN_REF *a1, __int64 a2, char a3)
{
  void (__fastcall **ExtensionTable)(_QWORD, _QWORD, _QWORD); // r14
  unsigned __int64 v7; // rax
  unsigned __int64 Count; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // esi
  int v11; // eax
  __int128 v12; // xmm0
  char *v13; // rcx
  __int64 v14; // rax
  int *v15; // rbx
  unsigned int v16; // r15d
  struct _EX_RUNDOWN_REF *v17; // rax
  __int64 v18; // r8
  struct _EX_RUNDOWN_REF *v19; // r14
  int v21; // eax
  __int64 v22; // rcx
  void (__fastcall **v23)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-49h]
  unsigned __int64 v24; // [rsp+28h] [rbp-41h]
  void (__fastcall **v25)(struct _EX_RUNDOWN_REF *, unsigned __int64, int *); // [rsp+30h] [rbp-39h]
  _OWORD v26[8]; // [rsp+40h] [rbp-29h] BYREF
  char v27; // [rsp+D0h] [rbp+67h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v26, 0, 0x48uLL);
  ExtensionTable = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v23 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  Count = a1[280].Count;
  v9 = 0;
  v10 = ((unsigned int)PspNotifyEnableMask >> 2) & 1;
  v25 = (void (__fastcall **)(struct _EX_RUNDOWN_REF *, unsigned __int64, int *))v7;
  Object = 0LL;
  v27 = 0;
  v24 = Count;
  if ( !a3 || (PspNotifyEnableMask & 4) == 0 && !ExtensionTable && !v7 )
  {
    v15 = 0LL;
    goto LABEL_14;
  }
  v11 = 0;
  *(_QWORD *)&v26[0] = 72LL;
  if ( Count )
    v11 = 2;
  DWORD2(v26[0]) = v11;
  *(struct _EX_RUNDOWN_REF *)&v26[1] = a1[168];
  v12 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  LODWORD(v26[4]) = 0;
  *(_OWORD *)((char *)&v26[1] + 8) = v12;
  if ( Count )
  {
    *((_QWORD *)&v26[2] + 1) = 0LL;
    v26[3] = 0LL;
    if ( a2 )
    {
      v22 = *(_QWORD *)(a2 + 432);
      if ( v22 )
      {
        *((_QWORD *)&v26[2] + 1) = *(_QWORD *)v22;
        v26[3] = *(_OWORD *)(v22 + 8);
      }
    }
    goto LABEL_13;
  }
  if ( a2 && (v13 = *(char **)(a2 + 176)) != 0LL )
  {
    Object = *(PVOID *)(a2 + 176);
    *((_QWORD *)&v26[2] + 1) = v13;
  }
  else
  {
    PsReferenceProcessFilePointer(a1, (unsigned __int64 *)&Object);
    v13 = (char *)Object;
    *((_QWORD *)&v26[2] + 1) = Object;
    v27 = 1;
    if ( !a2 )
      goto LABEL_41;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
  {
    DWORD2(v26[0]) |= 1u;
    *(_QWORD *)&v26[3] = a2 + 232;
    goto LABEL_11;
  }
LABEL_41:
  *(_QWORD *)&v26[3] = v13 + 88;
  if ( !a2 )
    goto LABEL_42;
LABEL_11:
  v14 = *(_QWORD *)(a2 + 208);
  if ( !v14 )
  {
LABEL_42:
    *((_QWORD *)&v26[3] + 1) = 0LL;
    goto LABEL_13;
  }
  *((_QWORD *)&v26[3] + 1) = v14 + 112;
LABEL_13:
  v15 = (int *)v26;
LABEL_14:
  if ( (PspNotifyEnableMask & 2) != 0 || (_BYTE)v10 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v16);
      v19 = v17;
      if ( v17 )
      {
        v21 = v17[2].Count;
        if ( !v24 || (v21 & 4) != 0 )
        {
          if ( (v21 & 2) != 0 )
          {
            if ( (_BYTE)v10 )
              ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, unsigned __int64, int *))v19[1].Count)(
                a1,
                a1[136].Count,
                v15);
          }
          else
          {
            LOBYTE(v18) = a3;
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))v19[1].Count)(
              a1[168].Count,
              a1[136].Count,
              v18);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v16, v19);
        if ( v15 )
        {
          if ( v15[16] < 0 )
            break;
        }
      }
      if ( ++v16 >= 0x40 )
        goto LABEL_18;
    }
    v9 = v15[16];
    PsTerminateProcess((ULONG_PTR)a1);
LABEL_18:
    ExtensionTable = v23;
  }
  if ( v25 && (!v15 || v15[16] >= 0) )
  {
    (*v25)(a1, a1[136].Count, v15);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v15 || v15[16] >= 0) )
  {
    (*ExtensionTable)(a1, a1[136].Count, v15);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v27 )
    ObfDereferenceObject(Object);
  return v9;
}
