/*
 * XREFs of IopQueryProcessIdsUsingFile @ 0x14094B338
 * Callers:
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x1407AE160 (ExEnumHandleTable.c)
 *     MmIsFileMapped @ 0x140A3C89C (MmIsFileMapped.c)
 */

__int64 __fastcall IopQueryProcessIdsUsingFile(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned __int64 *v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  unsigned int *v12; // rax
  char v13; // r15
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]

  v6 = (unsigned __int64 *)(a2 + 2);
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  v16 = 0LL;
  *a2 = 0;
  v15 = a1;
  for ( i = 0LL; ; i = v11 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v11 = NextProcess;
    if ( !NextProcess )
      break;
    v12 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v12 )
    {
      LOBYTE(v16) = v11 == (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
      v13 = ExEnumHandleTable(
              v12,
              (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))IopIsFileOpenOrSection,
              (__int64)&v15,
              0LL);
      ExReleaseRundownProtection_0(v11 + 139);
    }
    else
    {
      v13 = 0;
    }
    if ( v13 || (unsigned int)MmIsFileMapped(v11, a1) )
    {
      if ( v8 < v7 )
      {
        *v6 = v11[136].Count;
        ++*a2;
        ++v6;
      }
      ++v8;
    }
  }
  *a4 = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
