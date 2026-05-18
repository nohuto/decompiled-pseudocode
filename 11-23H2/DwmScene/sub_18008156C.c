/*
 * XREFs of sub_18008156C @ 0x18008156C
 * Callers:
 *     sub_1800814C0 @ 0x1800814C0 (sub_1800814C0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18008156C(__int64 a1)
{
  char result; // al
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  result = (unsigned __int8)sub_18004330C(a1, &v2);
  if ( v2 )
    result = sub_18003E330(v2);
  if ( v3 )
    return sub_180010530(v3);
  return result;
}
