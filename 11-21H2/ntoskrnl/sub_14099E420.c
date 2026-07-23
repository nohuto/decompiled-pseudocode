/*
 * XREFs of sub_14099E420 @ 0x14099E420
 * Callers:
 *     sub_14099F5D8 @ 0x14099F5D8 (sub_14099F5D8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_14099E420(__int64 a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1CB48, 0LL);
    if ( a2 < 0 || (*(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (16 * a3)) & 0xF0, a4) )
      *(_DWORD *)(a1 + 40) |= 0x100u;
    else
      *(_DWORD *)(a1 + 40) &= ~0x100u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1CB48);
    return sub_1402AFC00((ULONG_PTR)&qword_140C1CB48);
  }
  return result;
}
