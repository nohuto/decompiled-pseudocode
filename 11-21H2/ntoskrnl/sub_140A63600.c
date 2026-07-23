/*
 * XREFs of sub_140A63600 @ 0x140A63600
 * Callers:
 *     sub_140A54628 @ 0x140A54628 (sub_140A54628.c)
 *     sub_140AFA228 @ 0x140AFA228 (sub_140AFA228.c)
 * Callees:
 *     sub_1405184A0 @ 0x1405184A0 (sub_1405184A0.c)
 */

__int64 __fastcall sub_140A63600(unsigned __int8 a1)
{
  char v1; // r9
  unsigned int v3; // r11d
  char i; // r10
  char v5; // cl
  char v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !qword_140C54C38 )
    return 3221225486LL;
  v3 = *(unsigned __int8 *)(qword_140C54C38 + 36);
  for ( i = 1; (unsigned __int8)i < 0x80u; i *= 2 )
  {
    v5 = v1 + 1;
    if ( (a1 & (unsigned __int8)i) == 0 )
      v5 = v1;
    v1 = v5;
  }
  if ( (v5 & 1) != 0 )
    v6 = a1 & 0x7F;
  else
    v6 = a1 | 0x80;
  v8 = v6;
  sub_1405184A0(0LL, v3, (__int64)&v8, 1);
  return 0LL;
}
