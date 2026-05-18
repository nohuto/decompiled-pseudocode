/*
 * XREFs of sub_1800B1224 @ 0x1800B1224
 * Callers:
 *     sub_18003DA04 @ 0x18003DA04 (sub_18003DA04.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B1224(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v5[0] = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = *a2;
  v3 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = v2;
  v5[1] = v3;
  return sub_180010910((__int64)v5);
}
