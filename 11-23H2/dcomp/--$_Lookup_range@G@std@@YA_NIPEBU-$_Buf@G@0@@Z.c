/*
 * XREFs of ??$_Lookup_range@G@std@@YA_NIPEBU?$_Buf@G@0@@Z @ 0x18014E870
 * Callers:
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Lookup_range<unsigned short>(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0LL;
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 8);
  while ( *(unsigned __int16 *)(v4 + 2 * v3) > a1 || a1 > *(unsigned __int16 *)(v4 + 2LL * (unsigned int)(v3 + 1)) )
  {
    v3 = (unsigned int)(v3 + 2);
    if ( (unsigned int)v3 >= v2 )
      return 0;
  }
  return 1;
}
