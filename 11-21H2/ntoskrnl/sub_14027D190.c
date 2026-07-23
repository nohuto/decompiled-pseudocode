/*
 * XREFs of sub_14027D190 @ 0x14027D190
 * Callers:
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_14096DAE0 @ 0x14096DAE0 (sub_14096DAE0.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 */

__int64 __fastcall sub_14027D190(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  __int64 v8; // r8

  if ( !(unsigned int)sub_14032A4B0(a1, a2, 1LL) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 2 )
    v6 = 0LL;
  if ( !(unsigned int)sub_1402821F4(a1, a2, v6) )
  {
    sub_14028CE10(a1, a2);
    return 0LL;
  }
  if ( a3 == 1 || a3 == 11 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a2);
  }
  else if ( a3 != 2 )
  {
    if ( a3 == 4 )
      _InterlockedExchangeAdd64(&qword_140C53558, a2);
    else
      _InterlockedExchangeAdd64(&qword_140C53540, a2);
  }
  return 1LL;
}
