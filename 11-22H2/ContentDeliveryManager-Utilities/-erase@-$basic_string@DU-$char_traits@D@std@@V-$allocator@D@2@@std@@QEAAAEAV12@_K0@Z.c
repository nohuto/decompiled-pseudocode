/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x180043B2C
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800436B4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x1800049E0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     memmove_0 @ 0x180022B30 (memmove_0.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax

  v3 = a1[2];
  if ( v3 < a2 )
    std::_Xout_of_range("invalid string position");
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      if ( a1[3] < 0x10uLL )
        v6 = a1;
      else
        v6 = (_QWORD *)*a1;
      v7 = v3 - a3;
      if ( v7 != a2 )
        memmove_0((char *)v6 + a2, (char *)v6 + a2 + a3, v7 - a2);
      if ( a1[3] < 0x10uLL )
        v8 = a1;
      else
        v8 = (_QWORD *)*a1;
      a1[2] = v7;
      *((_BYTE *)v8 + v7) = 0;
    }
  }
  else
  {
    if ( a1[3] < 0x10uLL )
      v5 = a1;
    else
      v5 = (_QWORD *)*a1;
    a1[2] = a2;
    *((_BYTE *)v5 + a2) = 0;
  }
  return a1;
}
