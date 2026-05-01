/*
 * XREFs of ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180536154
 * Callers:
 *     ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180536860 (-s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1804C3A6C (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180532230 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180534170 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x180534710 (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x180534920 (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 *     ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x1805349C8 (-_OnCaptureChanged@CDragVisual@@AEAAXXZ.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180534A80 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180534B88 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x180534C18 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180534D24 (-_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180534DF0 (-_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180534FAC (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1805351A0 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1805351E8 (-_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x18053531C (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_ShouldHandleInput@CDragVisual@@AEAA_NI@Z @ 0x180535798 (-_ShouldHandleInput@CDragVisual@@AEAA_NI@Z.c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1805358D8 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     ?s_IsPointerIdTouch@CDragVisual@@CA_NI@Z @ 0x180536824 (-s_IsPointerIdTouch@CDragVisual@@CA_NI@Z.c)
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x18053AF5C (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 */

LRESULT __fastcall CDragVisual::_WndProc(CDragVisual *this, HWND hWnd, UINT Msg, void *a4, LPARAM lParam)
{
  UINT v7; // edi
  HWND v8; // rsi
  bool v9; // r13
  LRESULT v10; // r12
  char *v11; // rdi
  __int64 *v12; // rbx
  const struct _GUID *v13; // rdx
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 *v16; // rbx
  int SingleViewFromLayout; // eax
  __int64 v18; // rdx
  __int64 **v19; // rax
  __int64 *AddressOf; // rax
  struct IApplicationView **v21; // r8
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rsi
  __int64 *v23; // rbx
  int (__fastcall *v24)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  HWND v27; // rdx
  struct tagPOINT *v28; // rax
  HWND v29; // rdx
  struct tagPOINT *v30; // rax
  HWND v31; // rdx
  struct tagPOINT *v32; // rax
  __int64 v34; // [rsp+20h] [rbp-20h] BYREF
  IRawElementProviderSimple *el; // [rsp+28h] [rbp-18h] BYREF
  struct tagPOINT v36[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF
  HWND v39; // [rsp+88h] [rbp+48h]
  UINT v40; // [rsp+90h] [rbp+50h]

  v40 = Msg;
  v39 = hWnd;
  ppvOut = this;
  v7 = Msg;
  v8 = hWnd;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&ppvOut);
  v9 = 0;
  v10 = 0LL;
  if ( v7 > 0x202 )
  {
    switch ( v7 )
    {
      case 0x215u:
        CDragVisual::_OnCaptureChanged(this);
        break;
      case 0x245u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_37;
        if ( CDragVisual::_ShouldHandleInput(this, 0x245u) )
        {
          v31 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)lParam;
          HIDWORD(ppvOut) = SWORD1(lParam);
          v32 = Geometry::CPoint::ScreenToClient(v36, v31, (LONG *)&ppvOut);
          CDragVisual::_OnPointerUpdate(this, (unsigned __int16)a4, *v32);
        }
        break;
      case 0x246u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_37;
        if ( CDragVisual::_ShouldHandleInput(this, 0x246u) )
        {
          v29 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)lParam;
          HIDWORD(ppvOut) = SWORD1(lParam);
          v30 = Geometry::CPoint::ScreenToClient(v36, v29, (LONG *)&ppvOut);
          CDragVisual::_OnPointerDown(this, (unsigned __int16)a4, *v30);
        }
        break;
      case 0x247u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_37;
        if ( CDragVisual::_ShouldHandleInput(this, 0x247u) )
        {
          v27 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)lParam;
          HIDWORD(ppvOut) = SWORD1(lParam);
          v28 = Geometry::CPoint::ScreenToClient(v36, v27, (LONG *)&ppvOut);
          if ( (_WORD)a4 )
          {
            if ( (unsigned __int16)a4 == *((_DWORD *)this + 82) )
            {
              if ( *((_BYTE *)this + 325) )
              {
                CDragVisual::_OnFinishDrag(this, (unsigned __int16)a4, *v28);
                *((_BYTE *)this + 325) = 0;
              }
              else
              {
                CDragVisual::_OnClick((HWND *)this, *v28);
              }
              *((_DWORD *)this + 82) = 0;
            }
          }
        }
        break;
      case 0x24Cu:
        CDragVisual::_OnPointerCaptureChanged(this, (unsigned __int16)a4);
        break;
      case 0x2A3u:
        if ( !CDragVisual::_ShouldHandleInput(this, 0x2A3u) )
        {
LABEL_37:
          v10 = DefWindowProcW(v8, v7, (WPARAM)a4, lParam);
          break;
        }
        CDragVisual::_TrackMouseLeave(this, 0);
        if ( *((HWND *)this + 19) != GetCapture() && !*((_DWORD *)this + 82) )
          CDragVisual::_ClearVisualFeedback(this);
        break;
      default:
        switch ( v7 )
        {
          case 0x327u:
            CDragVisual::_OnAppWindowSizeChanged(this, a4);
            break;
          case 0x401u:
            CDragVisual::_OnCancelDrag(this);
            break;
          case 0x402u:
            v26 = *((_QWORD *)this + 12);
            if ( v26 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
            break;
        }
        goto LABEL_37;
    }
  }
  else
  {
    switch ( v7 )
    {
      case 0x202u:
        if ( !CDragVisual::_ShouldHandleInput(this, 0x202u) )
          goto LABEL_37;
        LODWORD(ppvOut) = (__int16)lParam;
        HIDWORD(ppvOut) = SWORD1(lParam);
        CDragVisual::_OnLButtonUp(this, (struct tagPOINT)ppvOut);
        break;
      case 6u:
        if ( !a4 && CDragVisual::_ShouldHandleInput(this, 6u) )
        {
          v25 = 0LL;
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
          if ( IUnknown_QueryService(
                 *((IUnknown **)this + 2),
                 &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
                 &GUID_84098f74_87a7_4582_b398_f6c3178e9dd6,
                 &ppvOut) >= 0 )
            v25 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 96LL))(ppvOut);
          if ( lParam != v25 )
            PostMessageW(*((HWND *)this + 19), 0x401u, 0LL, 0LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
        }
        goto LABEL_37;
      case 0x10u:
        break;
      case 0x14u:
        v10 = 1LL;
        break;
      case 0x21u:
        v9 = *((_DWORD *)this + 37) != 6;
        v10 = v9 ? 3 : 0;
        goto LABEL_36;
      case 0x3Du:
        if ( *((_BYTE *)this + 272) && lParam == -25 )
        {
          v11 = (char *)this + 96;
          if ( *((_QWORD *)this + 12) )
            goto LABEL_31;
          if ( !*((_QWORD *)this + 17) )
            goto LABEL_31;
          v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                              (__int64)this + 96,
                              &ppvOut);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
          if ( (int)CDragVisualAcc_CreateInstance((CDragVisual *)((char *)this + 24), v13, (void **)v12) < 0 )
            goto LABEL_31;
          v34 = 0LL;
          ppvOut = 0LL;
          if ( *((_DWORD *)this + 37) == 6 )
          {
            v14 = *((_QWORD *)this + 17);
            v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 72LL);
            v16 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v34, v36);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v16);
            SingleViewFromLayout = v15(v14, v16);
            if ( SingleViewFromLayout >= 0 )
            {
              v19 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)&ppvOut,
                                  v36);
              AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v19);
              SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                                       *((AppLayoutHelpers **)this + 11),
                                       (struct IAppLayout *)AddressOf,
                                       v21);
              if ( SingleViewFromLayout >= 0 )
              {
                v11 = (char *)this + 96;
                (*(void (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 12) + 88LL))(
                  *((_QWORD *)this + 12),
                  ppvOut,
                  v34);
                goto LABEL_30;
              }
              v18 = 2292LL;
            }
            else
            {
              v18 = 2291LL;
            }
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v18,
              (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
              (const char *)(unsigned int)SingleViewFromLayout);
            v11 = (char *)this + 96;
          }
LABEL_30:
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 216LL))((char *)this + 24);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&ppvOut);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
LABEL_31:
          el = 0LL;
          v22 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v11;
          if ( *(_QWORD *)v11 )
          {
            v23 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                (__int64)&el,
                                &ppvOut);
            v24 = **v22;
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v23);
            if ( v24(v22, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, v23) >= 0 )
            {
              v10 = UiaReturnRawElementProvider(*((HWND *)this + 19), (WPARAM)a4, -25LL, el);
              v9 = 1;
            }
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&el);
          v7 = v40;
          v8 = v39;
LABEL_36:
          if ( v9 )
            break;
          goto LABEL_37;
        }
        goto LABEL_37;
      default:
        switch ( v7 )
        {
          case 0x47u:
            goto LABEL_81;
          case 0x100u:
            if ( CDragVisual::_ShouldHandleInput(this, 0x100u) )
            {
              CDragVisual::_OnKeyDown((__int64 **)this, (int)a4);
              goto LABEL_81;
            }
            break;
          case 0x200u:
            if ( CDragVisual::_ShouldHandleInput(this, 0x200u) )
            {
              LODWORD(ppvOut) = (__int16)lParam;
              HIDWORD(ppvOut) = SWORD1(lParam);
              CDragVisual::_OnMouseMove(this, (struct tagPOINT)ppvOut);
              goto LABEL_81;
            }
            break;
          default:
            if ( v7 == 513 && CDragVisual::_ShouldHandleInput(this, 0x201u) )
            {
              LODWORD(ppvOut) = (__int16)lParam;
              HIDWORD(ppvOut) = SWORD1(lParam);
              CDragVisual::_OnLButtonDown(this, (struct tagPOINT)ppvOut);
              goto LABEL_81;
            }
            break;
        }
        goto LABEL_37;
    }
  }
LABEL_81:
  if ( this )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)this + 16LL))(this);
  return v10;
}
