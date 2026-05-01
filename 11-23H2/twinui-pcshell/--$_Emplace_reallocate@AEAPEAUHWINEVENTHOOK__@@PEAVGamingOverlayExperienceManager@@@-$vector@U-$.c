/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@QEAAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU2@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1803F4AE8
 * Callers:
 *     ??$emplace_back@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@QEAA?A_TAEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1803F799C (--$emplace_back@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$OwnedHW.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@0PEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803F6638 (--$_Uninitialized_move@PEAU-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@.c)
 *     ??$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1803F767C (--$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_trai.c)
 *     ?_Change_array@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAXQEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@_K1@Z @ 0x1804098F4 (-_Change_array@-$vector@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@U-.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::_Emplace_reallocate<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  _QWORD *v14; // r14
  char *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  char *result; // rax
  __int64 v21; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-60h]
  void *v25; // [rsp+40h] [rbp-58h]
  char v26[80]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v25 = v13;
  v15 = &v13[8 * v6];
  v24 = v15 + 8;
  try
  {
    v21 = *a4;
    v22 = *a3;
    wil::EnterCriticalSection(
      &lpCriticalSection,
      &OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwnersCS);
    *(_QWORD *)v15 = v22;
    std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::emplace<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager * &>(
      v16,
      v26,
      &v22,
      &v21,
      v21,
      v22);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v27 = (__int64)v15;
    v17 = a1[1];
    v18 = v14;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<OwnedHWinEventHook<GamingOverlayExperienceManager> *,std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
        v19,
        a2,
        v14);
      v27 = (__int64)v14;
      v18 = v15 + 8;
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<OwnedHWinEventHook<GamingOverlayExperienceManager> *,std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
      v19,
      v17,
      v18);
    std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(v27, (__int64)v24);
    std::_Deallocate<16,0>(v25, 8 * v8);
    throw;
  }
  return result;
}
