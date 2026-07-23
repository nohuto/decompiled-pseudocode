/*
 * XREFs of sub_14069FD1C @ 0x14069FD1C
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 * Callees:
 *     sub_14069FD64 @ 0x14069FD64 (sub_14069FD64.c)
 *     sub_14069FF64 @ 0x14069FF64 (sub_14069FF64.c)
 */

__int64 __fastcall sub_14069FD1C(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        sub_14069FF64();
    }
  }
  LOBYTE(a2) = v2;
  return sub_14069FD64(a1, a2);
}
