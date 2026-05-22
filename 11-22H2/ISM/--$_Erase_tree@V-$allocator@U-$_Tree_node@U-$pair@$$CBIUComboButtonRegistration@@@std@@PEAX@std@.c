/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1801D24D4
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1801D24D4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@.c)
 *     ??1ButtonRecognizer@@MEAA@XZ @ 0x1801D2E80 (--1ButtonRecognizer@@MEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801D4194 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1801D24D4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::vector<Windows::UI::Color>::_Tidy((__int64)v6 + 48);
      std::_Deallocate<16,0>(v6, 0x70uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
