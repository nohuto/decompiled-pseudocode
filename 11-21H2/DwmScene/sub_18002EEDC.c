/*
 * XREFs of sub_18002EEDC @ 0x18002EEDC
 * Callers:
 *     sub_1800DF530 @ 0x1800DF530 (sub_1800DF530.c)
 *     sub_1800DF6B0 @ 0x1800DF6B0 (sub_1800DF6B0.c)
 *     sub_1800F1B60 @ 0x1800F1B60 (sub_1800F1B60.c)
 *     sub_1800F1C20 @ 0x1800F1C20 (sub_1800F1C20.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_18002EEDC(__int64 a1, _QWORD *a2)
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
  v6[0] = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 256) = *a2;
  v4 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 264) = v2;
  v6[1] = v4;
  sub_180010910((__int64)v6);
  return sub_180010910((__int64)a2);
}
