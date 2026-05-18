/*
 * XREFs of sub_18002A2F0 @ 0x18002A2F0
 * Callers:
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 * Callees:
 *     sub_18002A2D4 @ 0x18002A2D4 (sub_18002A2D4.c)
 *     sub_18002A2E0 @ 0x18002A2E0 (sub_18002A2E0.c)
 *     sub_18002A334 @ 0x18002A334 (sub_18002A334.c)
 */

char __fastcall sub_18002A2F0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  char v4; // bl

  if ( (unsigned int)sub_18002A2D4(a1) != 1 )
    return 1;
  v4 = 0;
  if ( (unsigned __int8)sub_18002A334(v2) || (unsigned __int8)sub_18002A2E0(a1, v3) )
    return 1;
  return v4;
}
