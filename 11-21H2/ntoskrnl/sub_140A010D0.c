/*
 * XREFs of sub_140A010D0 @ 0x140A010D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A010D0(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v7; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned int i; // ecx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // edi

  v2 = a2;
  PoolWithTag = 0LL;
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( a2 > 0x3FFFFFFF )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v7 = *((_BYTE *)CurrentThread + 562);
  if ( v7 && !SeSinglePrivilegeCheck(stru_140D3CA50, *((_BYTE *)CurrentThread + 562)) )
    return 3221225569LL;
  if ( (_DWORD)v2 )
  {
    v8 = 4 * v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v2, 0x72766E45u);
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( v7 && v8 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = a1 + v8;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      if ( *(_DWORD *)(a1 + 4LL * i) > 0xFFFFu )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return 3221225485LL;
      }
      *((_WORD *)PoolWithTag + i) = *(_WORD *)(a1 + 4LL * i);
    }
  }
  v11 = KeGetCurrentThread();
  --*((_WORD *)v11 + 242);
  ExAcquireFastMutexUnsafe(&stru_140C11680);
  v12 = sub_14093E830(L"BootOrder", (__int64)&qword_140042090, (__int64)PoolWithTag, 2 * (int)v2, 1);
  ExReleaseFastMutexUnsafe(&stru_140C11680);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v12 == -1073741568 )
    v12 = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
