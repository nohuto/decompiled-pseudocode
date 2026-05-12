/*
 * XREFs of sub_1C007A4E8 @ 0x1C007A4E8
 * Callers:
 *     sub_1C007A530 @ 0x1C007A530 (sub_1C007A530.c)
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007B3C0 @ 0x1C007B3C0 (sub_1C007B3C0.c)
 *     sub_1C007B420 @ 0x1C007B420 (sub_1C007B420.c)
 *     sub_1C007B570 @ 0x1C007B570 (sub_1C007B570.c)
 *     sub_1C007B860 @ 0x1C007B860 (sub_1C007B860.c)
 *     sub_1C007BE80 @ 0x1C007BE80 (sub_1C007BE80.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007D570 @ 0x1C007D570 (sub_1C007D570.c)
 *     sub_1C007D640 @ 0x1C007D640 (sub_1C007D640.c)
 *     sub_1C007DD78 @ 0x1C007DD78 (sub_1C007DD78.c)
 *     sub_1C007E04C @ 0x1C007E04C (sub_1C007E04C.c)
 *     sub_1C007E6FC @ 0x1C007E6FC (sub_1C007E6FC.c)
 *     sub_1C007E9A0 @ 0x1C007E9A0 (sub_1C007E9A0.c)
 *     sub_1C007EC10 @ 0x1C007EC10 (sub_1C007EC10.c)
 *     sub_1C007FC98 @ 0x1C007FC98 (sub_1C007FC98.c)
 *     sub_1C0080248 @ 0x1C0080248 (sub_1C0080248.c)
 *     sub_1C0080D94 @ 0x1C0080D94 (sub_1C0080D94.c)
 *     sub_1C0081478 @ 0x1C0081478 (sub_1C0081478.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C007A4E8(char *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char *v4; // r11
  char v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char result; // al

  v3 = 0;
  if ( a2 >> 1 )
  {
    v4 = a1;
    do
    {
      v5 = *v4;
      v6 = a2 - v3++;
      v7 = v6 - 1;
      v8 = (unsigned int)v7;
      result = a1[v7];
      *v4++ = result;
      a1[v8] = v5;
    }
    while ( v3 < a2 >> 1 );
  }
  return result;
}
