/*
 * XREFs of ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1806E0744
 * Callers:
 *     ??$assign@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@V?$istreambuf_iterator@GU?$char_traits@G@std@@@1@0@Z @ 0x1806E0B6C (--$assign@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180090DA0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x1806E3F40 (-_Peek@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEBAGXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::wstring::_Construct<std::istreambuf_iterator<unsigned short>>(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v6; // al

  while ( 1 )
  {
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a2);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( *(_QWORD *)a2 )
      break;
    if ( !*(_QWORD *)a3 )
      return;
LABEL_9:
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a2);
    std::wstring::push_back(a1, *(_WORD *)(a2 + 10));
    if ( !*(_QWORD *)a2 || (unsigned __int16)std::basic_streambuf<unsigned short>::sbumpc(*(_QWORD *)a2) == 0xFFFF )
    {
      *(_QWORD *)a2 = 0LL;
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    *(_BYTE *)(a2 + 8) = v6;
  }
  if ( !*(_QWORD *)a3 )
    goto LABEL_9;
}
