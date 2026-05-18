/*
 * XREFs of sub_1800188C0 @ 0x1800188C0
 * Callers:
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 */

__int64 __fastcall sub_1800188C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 *v3; // r8
  __int64 *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  sub_18001265C(a2, &v8);
  v3 = *(__int64 **)(v2 + 112);
  v4 = *(__int64 **)(v2 + 120);
  while ( v3 != v4 )
  {
    v5 = *v3;
    if ( sub_180015678((_QWORD *)(*v3 + 16), &v8) )
    {
      if ( v9 )
        sub_180010530(v9);
      return v5;
    }
    v3 = (__int64 *)(v6 + 8);
  }
  if ( v9 )
    sub_180010530(v9);
  return 0LL;
}
