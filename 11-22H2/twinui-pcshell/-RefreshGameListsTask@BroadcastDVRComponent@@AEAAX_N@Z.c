/*
 * XREFs of ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803DAD7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___::Run @ 0x1803DB650 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803D64C4 (-BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z.c)
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x1803D99DC (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::RefreshGameListsTask(BroadcastDVRComponent *this, char a2)
{
  struct IApplicationView *v3; // rbx
  __int64 v4; // rcx
  unsigned __int8 v5; // dl
  __int64 v6; // rsi
  _QWORD *v7; // rax
  int v8; // edi
  _WORD *v9; // rbx
  HWND v10; // rdi
  unsigned __int64 v11; // r8
  unsigned int v12; // r9d
  char v13; // r8
  struct IApplicationView *v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  std::_Ref_count_base *v16; // [rsp+50h] [rbp-10h]
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  char v18; // [rsp+A8h] [rbp+48h] BYREF
  HWND v19; // [rsp+B0h] [rbp+50h] BYREF
  void *v20; // [rsp+B8h] [rbp+58h] BYREF

  v18 = a2;
  v3 = (struct IApplicationView *)*((_QWORD *)this + 38);
  v14 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v15,
    (_QWORD *)this + 39);
  v5 = 0;
  v6 = v15;
  if ( v15 )
    v5 = *(_BYTE *)(v15 + 16);
  GameDVRTraceProvider::BroadcastDVRComponent_RefreshGameListsTask(v4, v5);
  v7 = (_QWORD *)**((_QWORD **)this + 33);
  pv = v7;
  while ( v7 != *((_QWORD **)this + 33) )
  {
    *(_DWORD *)(v7[5] + 56LL) |= 1u;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++((__int64 **)&pv);
    v7 = pv;
  }
  if ( v3 )
  {
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v8 = *(unsigned __int8 *)(v6 + 16);
    pv = 0LL;
    BroadcastDVRComponent::EvaluateIfViewIsGame((__int64)this, v3, v6 + 16, &v18, &v19, &v20, &pv);
    *(_DWORD *)(v6 + 56) &= ~4u;
    *(_DWORD *)(v6 + 56) |= 4 * (v18 & 1);
    v9 = pv;
    if ( (*(_BYTE *)(v6 + 16) == 0) == v8 )
    {
      v10 = v19;
      *(_QWORD *)v6 = v19;
      *(_QWORD *)(v6 + 8) = v20;
      *(_DWORD *)(v6 + 56) &= ~1u;
      if ( v9 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( v9[v11] );
        std::wstring::assign((char *)(v6 + 72), v9, v11);
      }
      if ( *(_BYTE *)(v6 + 16) )
      {
        v12 = 5;
        v13 = 1;
      }
      else
      {
        v12 = 0;
        v13 = 0;
      }
      BroadcastDVRComponent::OnAddRemoveGameTask((__int64)this, v10, v13, v12, 0);
    }
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
}
