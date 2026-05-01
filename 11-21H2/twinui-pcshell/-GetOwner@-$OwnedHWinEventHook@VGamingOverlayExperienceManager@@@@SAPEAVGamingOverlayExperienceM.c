/*
 * XREFs of ?GetOwner@?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@SAPEAVGamingOverlayExperienceManager@@PEAUHWINEVENTHOOK__@@@Z @ 0x1803318C0
 * Callers:
 *     ?StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18033A460 (-StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAUHWINEVENTHOOK__@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@AEBQEAUHWINEVENTHOOK__@@_K@Z @ 0x18032836C (--$_Find_last@PEAUHWINEVENTHOOK__@@@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall OwnedHWinEventHook<GamingOverlayExperienceManager>::GetOwner(__int64 a1)
{
  __int64 v1; // rcx
  __int64 appended; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  EnterCriticalSection(&OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwnersCS);
  v9 = &OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwnersCS;
  appended = std::_Fnv1a_append_bytes(v1, (const unsigned __int8 *const)&v8, 8uLL);
  std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Find_last<HWINEVENTHOOK__ *>(
    v3,
    &v6,
    &v8,
    appended);
  if ( v7 )
  {
    v4 = *(_QWORD *)(v7 + 24);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v9);
    return v4;
  }
  else
  {
    try
    {
      std::_Xout_of_range("invalid unordered_map<K, T> key");
    }
    catch ( ... )
    {
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v9);
    return 0LL;
  }
}
