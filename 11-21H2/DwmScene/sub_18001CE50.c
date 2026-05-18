/*
 * XREFs of sub_18001CE50 @ 0x18001CE50
 * Callers:
 *     sub_180017C24 @ 0x180017C24 (sub_180017C24.c)
 *     sub_180017D84 @ 0x180017D84 (sub_180017D84.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_18001CE50(__int64 a1, _QWORD *a2)
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
  v5[0] = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *a2;
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v2;
  v5[1] = v3;
  sub_180010910((__int64)v5);
  return 0LL;
}
