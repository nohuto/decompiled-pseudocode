/*
 * XREFs of sub_18002C704 @ 0x18002C704
 * Callers:
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 * Callees:
 *     sub_18002C694 @ 0x18002C694 (sub_18002C694.c)
 *     sub_18002C6A0 @ 0x18002C6A0 (sub_18002C6A0.c)
 */

char __fastcall sub_18002C704(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // al
  char v4; // cl

  if ( (unsigned int)sub_18002C694(a1) != 1 )
    return 1;
  v3 = sub_18002C6A0(v2, v1);
  v4 = 0;
  if ( v3 )
    return 1;
  return v4;
}
