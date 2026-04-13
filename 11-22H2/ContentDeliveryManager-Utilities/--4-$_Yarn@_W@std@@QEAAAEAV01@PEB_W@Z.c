/*
 * XREFs of ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800D0330
 * Callers:
 *     ?_W_Getdays@_Locinfo@std@@QEBAPEBGXZ @ 0x1800D0D7C (-_W_Getdays@_Locinfo@std@@QEBAPEBGXZ.c)
 *     ?_W_Getmonths@_Locinfo@std@@QEBAPEBGXZ @ 0x1800D0DDC (-_W_Getmonths@_Locinfo@std@@QEBAPEBGXZ.c)
 * Callees:
 *     memcpy_0 @ 0x180022B24 (memcpy_0.c)
 *     ?_Tidy@?$_Yarn@_W@std@@AEAAXXZ @ 0x180062784 (-_Tidy@-$_Yarn@_W@std@@AEAAXXZ.c)
 */

void **__fastcall std::_Yarn<wchar_t>::operator=(void **a1, char *a2)
{
  char *i; // rbx
  signed __int64 v5; // rbx
  void *v6; // rax

  if ( *a1 != a2 )
  {
    std::_Yarn<wchar_t>::_Tidy(a1);
    if ( a2 )
    {
      for ( i = a2; *(_WORD *)i; i += 2 )
        ;
      v5 = i - a2;
      v6 = malloc(v5 + 2);
      *a1 = v6;
      if ( v6 )
        memcpy_0(v6, a2, v5 + 2);
    }
  }
  return a1;
}
