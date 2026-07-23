/*
 * XREFs of sub_140573740 @ 0x140573740
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_14062E754 @ 0x14062E754 (sub_14062E754.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 */

void __fastcall sub_140573740(char a1)
{
  void *i; // rcx
  __int64 j; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx

  if ( byte_140D068F8 && a1 && (WORD2(xmmword_140D06910) & 0x100) != 0 )
  {
    for ( i = 0LL; ; i = (void *)v6 )
    {
      v6 = sub_1407B6B90(i);
      if ( !v6 )
        break;
      for ( j = 0LL; ; j = v5 )
      {
        v3 = sub_1407E7750(v6, j);
        v5 = v3;
        if ( !v3 )
          break;
        LOBYTE(v4) = *(_BYTE *)(v3 + 516);
        sub_14062E754(v3, v4, 1LL);
      }
    }
  }
}
