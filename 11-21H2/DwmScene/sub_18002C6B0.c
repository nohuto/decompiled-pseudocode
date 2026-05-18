/*
 * XREFs of sub_18002C6B0 @ 0x18002C6B0
 * Callers:
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 * Callees:
 *     sub_18002C694 @ 0x18002C694 (sub_18002C694.c)
 *     sub_18002C6A0 @ 0x18002C6A0 (sub_18002C6A0.c)
 *     sub_18002C6F4 @ 0x18002C6F4 (sub_18002C6F4.c)
 */

char __fastcall sub_18002C6B0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  char v4; // bl

  if ( (unsigned int)sub_18002C694(a1) != 1 )
    return 1;
  v4 = 0;
  if ( (unsigned __int8)sub_18002C6F4(v2) || (unsigned __int8)sub_18002C6A0(a1, v3) )
    return 1;
  return v4;
}
