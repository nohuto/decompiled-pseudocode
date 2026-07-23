/*
 * XREFs of sub_140995690 @ 0x140995690
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 * Callees:
 *     sub_1407EEBA8 @ 0x1407EEBA8 (sub_1407EEBA8.c)
 *     sub_1407EEC68 @ 0x1407EEC68 (sub_1407EEC68.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140995690(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  _BYTE *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  sub_140A48330(a1);
  v1 = 0;
  v9 = 0;
  v2 = 0LL;
  do
  {
    v3 = qword_140C231B8;
    v4 = 3 * v2;
    v5 = 3 * v2;
    if ( (*(&qword_140C229A0 + 6 * v2 + 75) & 0x80u) == 0 )
    {
      *(&qword_140C229A0 + 6 * v2 + 78) = *((_DWORD *)qword_140C231B8 + 6 * v2 + 25);
      if ( v3[24 * v2 + 96] )
      {
        *(&qword_140C229A0 + 6 * v2 + 75) |= 0x80u;
        sub_1407EEBA8(&v9, (__int64)(&qword_140C229A0 + 6 * v2 + 74));
        v1 = v9;
        v6 = 3LL * v9;
        v7 = 24LL * v9;
        if ( sub_1407EEC68((__int64)&qword_140C229A0 + v7 + 296) )
        {
          *(&qword_140C229A0 + 2 * v6 + 75) |= 2u;
          sub_1407EEBA8(&v9, (__int64)&qword_140C229A0 + v7 + 296);
          v1 = v9;
        }
      }
    }
    v9 = ++v1;
    v2 = v1;
  }
  while ( v1 < 4 );
  return sub_140A47CF8(v4, v5);
}
