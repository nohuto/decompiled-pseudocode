/*
 * XREFs of sub_180095628 @ 0x180095628
 * Callers:
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180095628(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v6[0] = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *a2;
  v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v2;
  v6[1] = v4;
  sub_180010910((__int64)v6);
  return sub_180010910((__int64)a2);
}
