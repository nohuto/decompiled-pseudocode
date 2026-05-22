/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180019FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x18001A0E0 (--$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA-AV-$vector.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001A1A0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x18009C7C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  HWND Ancestor; // r12
  struct InputSiteManager *InputSiteManager; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned __int64 v15; // rbp
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v18; // eax
  HWND v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v3 = *a2;
  v4 = *(_QWORD *)(*a2 + 16);
  v5 = 0LL;
  Ancestor = 0LL;
  if ( v4 )
    Ancestor = GetAncestor((HWND)(int)v4, 2u);
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v8 = (_QWORD *)*((_QWORD *)InputSiteManager + 7);
  v9 = (_QWORD *)*((_QWORD *)InputSiteManager + 8);
  if ( v8 != v9 )
  {
    do
    {
      InputSite::GetAllAttachedObjectsByType<IActivationListenerInputObjectProxy>(*v8, &v21);
      v10 = v22;
      v11 = v21;
      if ( v21 != v22 )
      {
        do
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 32LL))(*v11);
          v19 = GetAncestor((HWND)v18, 2u);
          v20 = 1LL;
          if ( v19 == Ancestor )
            v20 = 3LL;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 24LL))(*v11, v20);
          ++v11;
        }
        while ( v11 != v10 );
        v11 = v21;
      }
      if ( v11 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(v11);
        std::_Deallocate<16,0>(v21, (v23 - (_QWORD)v21) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v8;
    }
    while ( v8 != v9 );
    v5 = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_DWORD *)(v3 + 4);
  v14 = *(_DWORD *)v3;
  v15 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v12 + 216) = v15;
  *(_DWORD *)(v12 + 224) = v14;
  *(_DWORD *)(v12 + 228) = v13;
  if ( v14 )
  {
    v5 = v15;
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v15);
  }
  else
  {
    ViewIdFromWindowId = 0;
    v14 = 0;
    v13 = 0;
  }
  ForegroundManager::UpdateForegroundTarget((ForegroundManager *)v12, v5, ViewIdFromWindowId, v14, v13, 0);
}
