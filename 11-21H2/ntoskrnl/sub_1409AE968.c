/*
 * XREFs of sub_1409AE968 @ 0x1409AE968
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14024BA3C @ 0x14024BA3C (sub_14024BA3C.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1409AEB50 @ 0x1409AEB50 (sub_1409AEB50.c)
 */

__int64 __fastcall sub_1409AE968(__int64 a1, int *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  signed __int32 v7; // edx
  signed __int32 v8; // eax
  bool v9; // zf

  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = *a2;
  v5 = (*a2 & 2) << 17;
  v6 = v5 | 0x80000;
  if ( (v4 & 1) == 0 )
    v6 = v5;
  _m_prefetchw((const void *)(v3 + 1120));
  v7 = *(_DWORD *)(v3 + 1120);
  v8 = v7;
  do
  {
    if ( (v8 & 0xC0000) == v6 )
      break;
    if ( (v7 & 0x40000) != 0 )
      return 3221225473LL;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1120), v6 | v7 & 0xFFF3FFFF, v7);
    v9 = v7 == v8;
    v7 = v8;
  }
  while ( !v9 );
  if ( v6 == 0x40000 )
  {
    sub_14024BA3C(v3, a1);
  }
  else if ( (v6 & 0x80000) != 0 && KeDynamicPartitioningSupported )
  {
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3B150, 0LL);
    if ( !(unsigned int)KeIsEmptyAffinityEx(word_140C0D660) )
      sub_1409AEB50(a1, v3, word_140C0D660);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3B150, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140D3B150);
    sub_1402AFC00((ULONG_PTR)&qword_140D3B150);
    sub_1402F9540(a1);
  }
  return 0LL;
}
