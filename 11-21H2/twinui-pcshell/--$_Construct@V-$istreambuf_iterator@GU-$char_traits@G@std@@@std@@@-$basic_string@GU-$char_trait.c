/*
 * XREFs of ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1805DCAFC
 * Callers:
 *     ??$assign@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@V?$istreambuf_iterator@GU?$char_traits@G@std@@@1@0@Z @ 0x1805DCC9C (--$assign@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180587C48 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x1805DE2B8 (-_Peek@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEBAGXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::wstring::_Construct<std::istreambuf_iterator<unsigned short>>(void **a1, __int64 *a2, __int64 a3)
{
  char result; // al
  __int64 v7; // rdi

  for ( result = *((_BYTE *)a2 + 8); ; *((_BYTE *)a2 + 8) = result )
  {
    if ( !result )
      result = std::istreambuf_iterator<unsigned short>::_Peek(a2);
    if ( !*(_BYTE *)(a3 + 8) )
      result = std::istreambuf_iterator<unsigned short>::_Peek(a3);
    v7 = *a2;
    if ( *a2 )
      break;
    if ( !*(_QWORD *)a3 )
      return result;
LABEL_10:
    if ( !*((_BYTE *)a2 + 8) )
    {
      std::istreambuf_iterator<unsigned short>::_Peek(a2);
      v7 = *a2;
    }
    std::wstring::push_back(a1, *((unsigned __int16 *)a2 + 5));
    if ( !v7 || (unsigned __int16)std::basic_streambuf<unsigned short>::sbumpc(v7) == 0xFFFF )
    {
      *a2 = 0LL;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  if ( !*(_QWORD *)a3 )
    goto LABEL_10;
  return result;
}
