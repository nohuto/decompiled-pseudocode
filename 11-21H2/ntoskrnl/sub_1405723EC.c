/*
 * XREFs of sub_1405723EC @ 0x1405723EC
 * Callers:
 *     sub_1402396F0 @ 0x1402396F0 (sub_1402396F0.c)
 * Callees:
 *     sub_140292B8C @ 0x140292B8C (sub_140292B8C.c)
 */

char sub_1405723EC()
{
  __int64 v0; // rdx
  unsigned __int64 *v1; // r8
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  __int64 v5; // rax

  while ( qword_140D06A00 != sub_140292B8C(&qword_140D06A00) )
    ;
  v4 = v0 & ~*(_QWORD *)(v3 + 8 * v2);
  if ( v4 )
  {
    *v1 = v4;
    return (0x101010101010101LL
          * ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
            + ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  else
  {
    *v1 = 0LL;
    LOBYTE(v5) = 0;
  }
  return v5;
}
