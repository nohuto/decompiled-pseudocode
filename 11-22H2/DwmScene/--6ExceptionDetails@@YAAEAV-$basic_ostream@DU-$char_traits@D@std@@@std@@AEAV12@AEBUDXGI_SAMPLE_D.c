/*
 * XREFs of ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUDXGI_SAMPLE_DESC@@@Z @ 0x1800CCD84
 * Callers:
 *     ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x1800CCB94 (--6ExceptionDetails@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_TEXTURE.c)
 * Callees:
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800203F0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 */

__int64 __fastcall ExceptionDetails::operator<<(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = std::operator<<<std::char_traits<char>>(a1, (__int64)"{");
  v5 = std::operator<<<std::char_traits<char>>(v4, (__int64)"Count");
  v6 = std::operator<<<std::char_traits<char>>(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = std::operator<<<std::char_traits<char>>(v7, (__int64)",Quality");
  v9 = std::operator<<<std::char_traits<char>>(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = std::operator<<<std::char_traits<char>>(v10, (__int64)",");
  std::operator<<<std::char_traits<char>>(v11, (__int64)"}");
  return a1;
}
