/*
 * XREFs of ??$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAU23@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18000B170
 * Callers:
 *     ??$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18000B134 (--$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList@.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18000A328 (-_Calculate_growth@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18000B358 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXQEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@_K1@Z @ 0x18000B3E4 (-_Change_array@-$vector@ULockedListEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Emplace_reallocate<CMasterVolumeNotificationProcess &,int>(
        char **a1,
        char *a2,
        _DWORD *a3,
        int *a4)
{
  char *v6; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 size_of; // rax
  __int64 v13; // r10
  _DWORD *v14; // rsi
  int v15; // edx
  char *v16; // r8
  char *v17; // rcx
  _QWORD *v18; // rdx
  char *v20; // rdx
  signed __int64 v21; // rcx

  v6 = a2;
  v8 = (a2 - *a1) >> 3;
  v9 = (a1[1] - *a1) >> 3;
  if ( v9 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v10 = v9 + 1;
  v11 = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_DWORD *)(v13 + 8 * v8);
  v15 = *a4;
  *v14 = *a3;
  v14[1] = v15;
  v16 = a1[1];
  v17 = *a1;
  v18 = (_QWORD *)v13;
  if ( v6 == v16 )
  {
    while ( v17 != v16 )
    {
      *v18++ = *(_QWORD *)v17;
      v17 += 8;
    }
  }
  else
  {
    while ( v17 != v6 )
    {
      *v18++ = *(_QWORD *)v17;
      v17 += 8;
    }
    v20 = a1[1];
    if ( v6 != v20 )
    {
      v21 = (char *)(v14 + 2) - v6;
      do
      {
        *(_QWORD *)&v6[v21] = *(_QWORD *)v6;
        v6 += 8;
      }
      while ( v6 != v20 );
    }
  }
  std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Change_array(
    a1,
    v13,
    v10,
    v11);
  return v14;
}
