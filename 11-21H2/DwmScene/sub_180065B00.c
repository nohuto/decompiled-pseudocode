/*
 * XREFs of sub_180065B00 @ 0x180065B00
 * Callers:
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 */

_QWORD *__fastcall sub_180065B00(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)v7 = 0LL;
  if ( !v2 )
LABEL_7:
    sub_1800120F4();
  v4 = *(_DWORD *)(v2 + 8);
  do
  {
    if ( !v4 )
      goto LABEL_7;
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v4 + 1, v4);
  }
  while ( v5 != v4 );
  *(_OWORD *)v7 = *(_OWORD *)(a1 + 8);
  sub_18001872C(a2, v7);
  sub_180010910((__int64)v7);
  return a2;
}
