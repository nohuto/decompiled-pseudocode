/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x1800D0E20
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x1800CF64C (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800254C0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18003F3DC (-_Calculate_growth@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 */

char *__fastcall std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  SIZE_T size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v3 = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[8 * v3];
  a1[2] = result;
  return result;
}
