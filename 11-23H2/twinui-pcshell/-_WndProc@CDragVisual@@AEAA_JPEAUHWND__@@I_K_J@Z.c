/*
 * XREFs of ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8
 * Callers:
 *     ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1805F1600 (-s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18057E40C (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1805ECF90 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1805EEEF0 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x1805EF4AC (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x1805EF6BC (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 *     ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x1805EF764 (-_OnCaptureChanged@CDragVisual@@AEAAXXZ.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805EF81C (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805EF924 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1805EF9B4 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805EFAC0 (-_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805EFB8C (-_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805EFD54 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1805EFF48 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1805EFF90 (-_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1805F00C4 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_ShouldHandleInput@CDragVisual@@AEAA_NI@Z @ 0x1805F054C (-_ShouldHandleInput@CDragVisual@@AEAA_NI@Z.c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1805F0688 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     ?s_IsPointerIdTouch@CDragVisual@@CA_NI@Z @ 0x1805F15C0 (-s_IsPointerIdTouch@CDragVisual@@CA_NI@Z.c)
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x1805F5CFC (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 */

LRESULT __fastcall CDragVisual::_WndProc(CDragVisual *this, HWND hWnd, UINT a3, void *a4, LPARAM lParam)
{
  _BOOL8 v5; // r13
  HWND v9; // rdi
  LRESULT v10; // r13
  char *v11; // rdi
  __int64 *v12; // rbx
  bool v13; // zf
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 *v16; // rbx
  int SingleViewFromLayout; // eax
  __int64 v18; // rdx
  __int64 *v19; // rbx
  struct IApplicationView **v20; // r8
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rsi
  __int64 *v22; // rbx
  int (__fastcall *v23)(_QWORD, GUID *, __int64 *); // rdi
  bool v24; // bl
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
  _BOOL8 v36; // [rsp+30h] [rbp-10h]
  struct tagPOINT v37; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF
  HWND v40; // [rsp+88h] [rbp+48h]

  v40 = hWnd;
  ppvOut = this;
  v9 = hWnd;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&ppvOut);
  LOBYTE(v5) = 0;
  v36 = v5;
  v10 = 0LL;
  if ( a3 > 0x202 )
  {
    switch ( a3 )
    {
      case 0x215u:
        CDragVisual::_OnCaptureChanged(this);
        break;
      case 0x245u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_38;
        if ( CDragVisual::_ShouldHandleInput(this, a3) )
        {
          v31 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)lParam;
          HIDWORD(ppvOut) = SWORD1(lParam);
          v32 = Geometry::CPoint::ScreenToClient(&v37, v31, (LONG *)&ppvOut);
          CDragVisual::_OnPointerUpdate(this, (unsigned __int16)a4, *v32);
        }
        break;
      case 0x246u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_38;
        if ( CDragVisual::_ShouldHandleInput(this, a3) )
        {
          v29 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)lParam;
          HIDWORD(ppvOut) = SWORD1(lParam);
          v30 = Geometry::CPoint::ScreenToClient(&v37, v29, (LONG *)&ppvOut);
          CDragVisual::_OnPointerDown(this, (unsigned __int16)a4, *v30);
        }
        break;
      case 0x247u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_38;
        if ( CDragVisual::_ShouldHandleInput(this, a3) )
        {
          v27 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)lParam;
          HIDWORD(ppvOut) = SWORD1(lParam);
          v28 = Geometry::CPoint::ScreenToClient(&v37, v27, (LONG *)&ppvOut);
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
        if ( !CDragVisual::_ShouldHandleInput(this, 675) )
        {
LABEL_38:
          v10 = DefWindowProcW(v9, a3, (WPARAM)a4, lParam);
          break;
        }
        CDragVisual::_TrackMouseLeave(this, 0);
        if ( *((HWND *)this + 19) != GetCapture() && !*((_DWORD *)this + 82) )
          CDragVisual::_ClearVisualFeedback(this);
        break;
      default:
        switch ( a3 )
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
        goto LABEL_38;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0x202u:
        if ( !CDragVisual::_ShouldHandleInput(this, 514) )
          goto LABEL_38;
        LODWORD(ppvOut) = (__int16)lParam;
        HIDWORD(ppvOut) = SWORD1(lParam);
        CDragVisual::_OnLButtonUp(this, (struct tagPOINT)ppvOut);
        break;
      case 6u:
        if ( !a4 && CDragVisual::_ShouldHandleInput(this, 6) )
        {
          ppvOut = 0LL;
          v25 = 0LL;
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
        goto LABEL_38;
      case 0x10u:
        break;
      case 0x14u:
        v10 = 1LL;
        break;
      case 0x21u:
        v24 = *((_DWORD *)this + 37) != 6;
        v10 = v24 ? 3 : 0;
        goto LABEL_37;
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
          if ( (int)CDragVisualAcc_CreateInstance(
                      (struct IDragVisual *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                      (const struct _GUID *)((char *)this + 24),
                      (void **)v12) < 0 )
            goto LABEL_31;
          v13 = *((_DWORD *)this + 37) == 6;
          v34 = 0LL;
          ppvOut = 0LL;
          if ( v13 )
          {
            v14 = *((_QWORD *)this + 17);
            v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 72LL);
            v16 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v34, &v37);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v16);
            SingleViewFromLayout = v15(v14, v16);
            if ( SingleViewFromLayout >= 0 )
            {
              v19 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)&ppvOut,
                                  &v37);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v19);
              SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                                       *((AppLayoutHelpers **)this + 11),
                                       (struct IAppLayout *)v19,
                                       v20);
              if ( SingleViewFromLayout >= 0 )
              {
                v11 = (char *)this + 96;
                (*(void (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 12) + 88LL))(
                  *((_QWORD *)this + 12),
                  ppvOut,
                  v34);
                goto LABEL_30;
              }
              v18 = 2285LL;
            }
            else
            {
              v18 = 2284LL;
            }
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v18,
              (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
              (const char *)(unsigned int)SingleViewFromLayout);
            v11 = (char *)this + 96;
          }
LABEL_30:
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 216LL))((char *)this + 24);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&ppvOut);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
LABEL_31:
          el = 0LL;
          v21 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v11;
          if ( *(_QWORD *)v11
            && (v22 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                    (__int64)&el,
                                    &ppvOut),
                v23 = **v21,
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v22),
                v23(v21, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, v22) >= 0) )
          {
            v10 = UiaReturnRawElementProvider(*((HWND *)this + 19), (WPARAM)a4, lParam, el);
            v24 = 1;
          }
          else
          {
            v24 = v36;
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&el);
          v9 = v40;
LABEL_37:
          if ( v24 )
            break;
          goto LABEL_38;
        }
        goto LABEL_38;
      default:
        switch ( a3 )
        {
          case 0x47u:
            goto LABEL_82;
          case 0x100u:
            if ( CDragVisual::_ShouldHandleInput(this, 256) )
            {
              CDragVisual::_OnKeyDown((__int64 **)this, (int)a4);
              goto LABEL_82;
            }
            break;
          case 0x200u:
            if ( CDragVisual::_ShouldHandleInput(this, 512) )
            {
              LODWORD(ppvOut) = (__int16)lParam;
              HIDWORD(ppvOut) = SWORD1(lParam);
              CDragVisual::_OnMouseMove(this, (struct tagPOINT)ppvOut);
              goto LABEL_82;
            }
            break;
          default:
            if ( a3 == 513 && CDragVisual::_ShouldHandleInput(this, 513) )
            {
              LODWORD(ppvOut) = (__int16)lParam;
              HIDWORD(ppvOut) = SWORD1(lParam);
              CDragVisual::_OnLButtonDown(this, (struct tagPOINT)ppvOut);
              goto LABEL_82;
            }
            break;
        }
        goto LABEL_38;
    }
  }
LABEL_82:
  if ( this )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)this + 16LL))(this);
  return v10;
}
