/*
 * XREFs of sub_14098F0F0 @ 0x14098F0F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405CFA04 @ 0x1405CFA04 (sub_1405CFA04.c)
 *     sub_1405CFB5C @ 0x1405CFB5C (sub_1405CFB5C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14098F0F0(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx

  while ( 1 )
  {
    sub_140A48330(a1);
    if ( (byte_140C23908 & 2) != 0 )
      break;
    if ( (byte_140C23908 & 1) == 0 )
      goto LABEL_9;
    sub_1405CFB5C(0);
    sub_140A47CF8(v4, v3);
    v5 = 2;
LABEL_8:
    sub_1405CFA04(qword_140C23900, v5);
  }
  if ( (byte_140C23908 & 1) == 0 )
  {
    byte_140C23908 &= ~4u;
    sub_1405CFB5C(1);
    sub_140A47CF8(v7, v6);
    v5 = 1;
    goto LABEL_8;
  }
  if ( (byte_140C23908 & 4) != 0 )
  {
    byte_140C23908 &= ~4u;
    sub_140A47CF8(v2, v1);
    v5 = 3;
    goto LABEL_8;
  }
LABEL_9:
  byte_140C23908 &= ~8u;
  return sub_140A47CF8(v2, v1);
}
