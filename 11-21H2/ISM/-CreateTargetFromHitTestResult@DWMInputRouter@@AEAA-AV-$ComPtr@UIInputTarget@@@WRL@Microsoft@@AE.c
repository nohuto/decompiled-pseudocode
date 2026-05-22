/*
 * XREFs of ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x18004E334
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x18004E484 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D1CC (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18004D3CC (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18004DE80 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall DWMInputRouter::CreateTargetFromHitTestResult(__int64 a1, __int64 *a2, __int64 a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  int v6; // eax
  __int64 v7; // rcx
  _OWORD v9[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+28h]
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v13 = a2;
  v12 = a1;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  InputSiteManager::GetInputSiteFromInputSinkHandle((__int64)InputSiteManager, &v14, *(_QWORD *)(a3 + 8));
  *a2 = 0LL;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
  v12 = v14;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v12);
  DWMInputTarget::Create((int)v9, &v12, (__int64)a2);
  if ( *(_BYTE *)(a3 + 88) )
  {
    v12 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v12);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x51B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v6,
        1);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 80LL))(v12, *(unsigned int *)(a3 + 92));
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  }
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a2;
}
