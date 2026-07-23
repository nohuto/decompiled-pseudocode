/*
 * XREFs of HalSetProfileInterval @ 0x14050ACF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall HalSetProfileInterval(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( (int)sub_14042A5E0(0LL, &v2) >= 0 )
    return v2;
  else
    return 0LL;
}
