/*
 * XREFs of ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x1801B8B40
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F480 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801B9380 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F6ABC (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x1800FDB24 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 *     ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x1801B89F0 (-CreateTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AE.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x1801B9114 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall DWMInputRouter::GetInitialTargetFromHitTestResult(
        int a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        void (__fastcall ***a5)(_QWORD, GUID *, __int64 *))
{
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v10)(_QWORD, GUID *, _QWORD); // rbx
  void (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v14; // rcx
  __int64 *i; // rbx
  __int64 *v16; // rdi
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-20h] BYREF
  __int128 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h]

  v18 = 0LL;
  v9 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    v10 = (int (__fastcall *)(_QWORD, GUID *, _QWORD))**v9;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&a5);
    if ( v10(v9, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &a5) < 0 )
    {
      v13 = **v9;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
      v13(v9, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v18);
    }
    else
    {
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *), void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*a5)[3])(
        a5,
        &v19);
      v11 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
      if ( v19 )
      {
        v12 = **v19;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
        v12(v11, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v18);
      }
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v19);
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&a5);
  }
  DWMInputRouter::GetTargetListFromHitTestResult(a1, (unsigned int)&v20, a3, a4, (__int64)&v18);
  v16 = (__int64 *)*((_QWORD *)&v20 + 1);
  for ( i = (__int64 *)v20; ; ++i )
  {
    if ( i == v16 )
    {
      DWMInputRouter::CreateTargetFromHitTestResult(v14, a2, a4);
      goto LABEL_14;
    }
    a5 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))i,
                (__int64 *)&a5) >= 0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*a5)[5])(
             a5,
             *(_QWORD *)(a4 + 8)) )
      {
        break;
      }
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&a5);
  }
  *a2 = *i;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&a5);
LABEL_14:
  if ( (_QWORD)v20 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>((__int64 *)v20, *((__int64 **)&v20 + 1));
    std::_Deallocate<16,0>((void *)v20, (v21 - v20) & 0xFFFFFFFFFFFFFFF8uLL);
    v20 = 0LL;
    v21 = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
  return a2;
}
