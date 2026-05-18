/*
 * XREFs of sub_180015C04 @ 0x180015C04
 * Callers:
 *     sub_180015520 @ 0x180015520 (sub_180015520.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180015C04(__int64 a1, _QWORD *a2)
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
  v5[0] = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = *a2;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v2;
  v5[1] = v3;
  sub_180010910((__int64)v5);
  return 0LL;
}
