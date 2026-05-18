/*
 * XREFs of sub_1800B1040 @ 0x1800B1040
 * Callers:
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B0EA8 @ 0x1800B0EA8 (sub_1800B0EA8.c)
 */

__int64 __fastcall sub_1800B1040(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)(a1 + 440) = 1;
  sub_1800B0EA8(a1 + 8, a1 + 264);
  v2 = *(_QWORD *)(a1 + 432);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 432);
  }
  v5[0] = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = *(_QWORD *)(a1 + 424);
  v3 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = v2;
  v5[1] = v3;
  sub_180010910((__int64)v5);
  return sub_1800B0F7C((_QWORD *)a1);
}
