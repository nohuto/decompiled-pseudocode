/*
 * XREFs of sub_18002A344 @ 0x18002A344
 * Callers:
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 * Callees:
 *     sub_18002A2D4 @ 0x18002A2D4 (sub_18002A2D4.c)
 *     sub_18002A2E0 @ 0x18002A2E0 (sub_18002A2E0.c)
 */

char __fastcall sub_18002A344(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // al
  char v4; // cl

  if ( (unsigned int)sub_18002A2D4(a1) != 1 )
    return 1;
  v3 = sub_18002A2E0(v2, v1);
  v4 = 0;
  if ( v3 )
    return 1;
  return v4;
}
