/*
 * XREFs of sub_18009195C @ 0x18009195C
 * Callers:
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180091AC0 @ 0x180091AC0 (sub_180091AC0.c)
 */

__int64 __fastcall sub_18009195C(__int64 a1, __int64 a2, float a3, float a4)
{
  __int64 v6; // rcx
  float v8; // [rsp+50h] [rbp+18h] BYREF
  float v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  sub_180091AC0(a1, a2, &v8, &v9);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    sub_180010530(v6);
  return a1;
}
