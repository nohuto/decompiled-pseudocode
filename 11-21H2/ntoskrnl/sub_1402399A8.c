/*
 * XREFs of sub_1402399A8 @ 0x1402399A8
 * Callers:
 *     sub_140239978 @ 0x140239978 (sub_140239978.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_1406F33E4 @ 0x1406F33E4 (sub_1406F33E4.c)
 * Callees:
 *     sub_140239A98 @ 0x140239A98 (sub_140239A98.c)
 *     sub_140239C2C @ 0x140239C2C (sub_140239C2C.c)
 *     sub_1405B62A0 @ 0x1405B62A0 (sub_1405B62A0.c)
 *     sub_1405B6318 @ 0x1405B6318 (sub_1405B6318.c)
 */

__int64 __fastcall sub_1402399A8(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // r8
  __int64 v5; // r14
  signed __int64 v6; // rsi
  unsigned int v7; // ebx

  v4 = *(volatile signed __int32 **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v5 = *(_QWORD *)v4;
  _InterlockedExchangeAdd(v4 + 98, 0xFFFFFFFF);
  if ( a1 && *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v5 )
    v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
  else
    v6 = 1LL;
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 - 16)) )
  {
    v7 = 2;
  }
  else
  {
    if ( *(_QWORD *)(a2 - 24) )
    {
      v7 = sub_140239C2C(v5, a2);
      if ( (BYTE4(xmmword_140D06900) & 1) != 0 )
        sub_1405B62A0(a2);
      if ( a1 && *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v5 )
        v7 = 4;
    }
    else
    {
      v7 = 0;
    }
    sub_140239A98(a2 - 48);
  }
  if ( !v6 )
    sub_1405B6318(v5, 1LL);
  return v7;
}
