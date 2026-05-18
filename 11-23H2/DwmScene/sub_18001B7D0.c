/*
 * XREFs of sub_18001B7D0 @ 0x18001B7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18001636C @ 0x18001636C (sub_18001636C.c)
 */

char __fastcall sub_18001B7D0(__int64 a1, __int64 *a2)
{
  char v3; // bl
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_18001636C(*a2, &v5);
  v3 = 0;
  if ( sub_180011DE0(&v5) )
  {
    sub_1800124F8(*(__int64 **)(a1 + 8), &v5);
    if ( v6 )
      sub_180010530(v6);
  }
  else
  {
    if ( v6 )
      sub_180010530(v6);
    return 1;
  }
  return v3;
}
