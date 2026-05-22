/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800227D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18000F5C0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1800230A0 (--$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA-AV-$vector.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x1800233A8 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180025304 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  HWND Ancestor; // r12
  struct InputSiteManager *InputSiteManager; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rbp
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // ebp
  unsigned int v13; // edi
  unsigned __int64 v14; // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v17; // eax
  HWND v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v3 = *a2;
  v4 = *(_QWORD *)(*a2 + 16);
  Ancestor = 0LL;
  if ( v4 )
    Ancestor = GetAncestor((HWND)(int)v4, 2u);
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v7 = (_QWORD *)*((_QWORD *)InputSiteManager + 7);
  for ( i = (_QWORD *)*((_QWORD *)InputSiteManager + 8); v7 != i; ++v7 )
  {
    InputSite::GetAllAttachedObjectsByType<IActivationListenerInputObjectProxy>(*v7, &v21);
    v9 = v22;
    v10 = v21;
    if ( v21 != v22 )
    {
      do
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 32LL))(*v10);
        v18 = GetAncestor((HWND)v17, 2u);
        v19 = 1LL;
        if ( v18 == Ancestor )
          v19 = 3LL;
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 24LL))(*v10, v19);
        ++v10;
      }
      while ( v10 != v9 );
      v9 = v22;
      v10 = v21;
    }
    if ( v10 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v10, v9);
      std::_Deallocate<16,0>(v21, 8 * ((v23 - (__int64)v21) >> 3));
    }
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_DWORD *)(v3 + 4);
  v13 = *(_DWORD *)v3;
  v14 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v11 + 216) = v14;
  *(_DWORD *)(v11 + 224) = v13;
  *(_DWORD *)(v11 + 228) = v12;
  if ( v13 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v14);
    ForegroundManager::UpdateForegroundTarget((ForegroundManager *)v11, v14, ViewIdFromWindowId, v13, v12, 0);
  }
  else
  {
    v20 = *(_QWORD *)(v11 + 16);
    if ( v20 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v20 + 24LL))(v20, 0LL, 0LL, 0LL, 0);
  }
}
