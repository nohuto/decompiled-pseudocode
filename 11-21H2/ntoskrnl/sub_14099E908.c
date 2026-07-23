/*
 * XREFs of sub_14099E908 @ 0x14099E908
 * Callers:
 *     sub_14098C1E4 @ 0x14098C1E4 (sub_14098C1E4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14099E7DC @ 0x14099E7DC (sub_14099E7DC.c)
 */

__int64 __fastcall sub_14099E908(__int64 a1)
{
  __int64 v2; // rdi
  PVOID *i; // rbx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1CB48, 0LL);
  v2 = *(_QWORD *)(a1 + 776);
  if ( v2 )
    *(_DWORD *)(v2 + 152) |= 0x20u;
  for ( i = (PVOID *)qword_140C1CB60; i != &qword_140C1CB60; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 9) == dword_140C1CD88 )
    {
      ++*((_DWORD *)i + 53);
      if ( v2 )
        sub_14099E7DC((__int64)i, v2, 5);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1CB48);
  return sub_1402AFC00((ULONG_PTR)&qword_140C1CB48);
}
