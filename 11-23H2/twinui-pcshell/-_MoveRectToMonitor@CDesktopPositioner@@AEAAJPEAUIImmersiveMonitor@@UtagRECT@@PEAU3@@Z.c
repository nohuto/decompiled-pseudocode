/*
 * XREFs of ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1805B5B08
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076DB0 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180060388 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076FF4 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_MoveRectToMonitor(
        CDesktopPositioner *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  __int64 *AddressOf; // rax
  int MonitorFromRect; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int ScaleFactorForRect; // esi
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v20; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]

  *a4 = *a3;
  v19 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v19);
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(this, a3, (struct IImmersiveMonitor **)AddressOf);
  v10 = MonitorFromRect;
  if ( MonitorFromRect >= 0 )
  {
    MonitorFromRect = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 88LL))(v19, v21);
    v10 = MonitorFromRect;
    if ( MonitorFromRect >= 0 )
    {
      MonitorFromRect = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(*(_QWORD *)a2 + 88LL))(
                          a2,
                          &v20);
      v10 = MonitorFromRect;
      if ( MonitorFromRect >= 0 )
      {
        ScaleFactorForRect = GetScaleFactorForRect(a3);
        v13 = GetScaleFactorForRect(&v20);
        v14 = MulDiv(a3->left - v21[0], v13, ScaleFactorForRect);
        v15 = MulDiv(a3->top - v21[1], v13, ScaleFactorForRect);
        v16 = v14 + v20.left;
        a4->left = v14 + v20.left;
        v17 = v15 + v20.top;
        a4->top = v15 + v20.top;
        a4->right = v16 + a3->right - a3->left;
        a4->bottom = v17 + a3->bottom - a3->top;
        v10 = 0;
        goto LABEL_9;
      }
      v11 = 3247LL;
    }
    else
    {
      v11 = 3244LL;
    }
  }
  else
  {
    v11 = 3241LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)MonitorFromRect);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  return v10;
}
