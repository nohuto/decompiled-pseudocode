/*
 * XREFs of sub_14097F200 @ 0x14097F200
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_140982DE4 @ 0x140982DE4 (sub_140982DE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14097F200(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v4; // rax
  unsigned __int64 i; // rdx
  signed __int64 v6; // rtt

  if ( *(_QWORD *)(a1 + 2040) )
  {
    v4 = *(_QWORD *)(a1 + 2032);
    for ( i = v4 + a2; i <= *(_QWORD *)(a1 + 2040); i = a2 + v4 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2032), i, v4);
      if ( v6 == v4 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), a2);
    return 1LL;
  }
}
