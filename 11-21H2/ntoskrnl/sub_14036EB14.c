/*
 * XREFs of sub_14036EB14 @ 0x14036EB14
 * Callers:
 *     sub_140365834 @ 0x140365834 (sub_140365834.c)
 *     sub_14036EA64 @ 0x14036EA64 (sub_14036EA64.c)
 * Callees:
 *     sub_140365560 @ 0x140365560 (sub_140365560.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14036EB14(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v10; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v10 = 0;
  v5 = 0;
  v6 = *(unsigned __int8 *)(a2 + 45);
  v7 = 0;
  if ( *(_BYTE *)(a2 + 45) )
  {
    do
    {
      v8 = sub_140365560(a2, v5, &v10);
      if ( v8 == -1 )
        break;
      v7 += v10;
      v5 = v10 + v8;
    }
    while ( v5 < v6 );
    if ( v7 && (dword_140C1BBE0 & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        -(__int64)((unsigned __int64)(unsigned int)(v7 << *(_BYTE *)(a2 + 44)) >> 12));
  }
  return sub_14042A5E0(*(_QWORD *)a1, a2);
}
