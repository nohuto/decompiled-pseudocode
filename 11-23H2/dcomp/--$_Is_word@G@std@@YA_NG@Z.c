/*
 * XREFs of ??$_Is_word@G@std@@YA_NG@Z @ 0x18014E5BC
 * Callers:
 *     ?_Is_wbound@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEBA_NXZ @ 0x180150768 (-_Is_wbound@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Is_word<unsigned short>(unsigned __int16 a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 <= 0x7Au )
    return `std::_Is_word'::`2'::_Is_word_table[(unsigned __int8)a1] != 0;
  return v1;
}
