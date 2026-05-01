/*
 * XREFs of ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x1802EC2E0 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x18056F0C8 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z @ 0x18056F160 (-_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z.c)
 *     ?_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18056F1D8 (-_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18056F23C (-_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x18056F2A0 (-_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x18056F338 (-_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseHover@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x18056F3C8 (-_OnMouseHover@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x18056F42C (-_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z @ 0x18056F524 (-_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x18056F618 (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x18057F6B8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x18057F780 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CMultitaskingViewFrame::v_WndProc(
        CMultitaskingViewFrame *this,
        HWND a2,
        UINT a3,
        void *a4,
        IRawElementProviderSimple *lParam)
{
  LONG_PTR v8; // rbx
  char v9; // r14
  bool v10; // al
  __int64 v11; // rcx
  __int64 v12; // r13
  int (__fastcall *v13)(__int64, GUID *, IRawElementProviderSimple **); // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  bool *v17; // [rsp+20h] [rbp-30h]
  enum GRID_HOW_SELECTED_FLAGS *v18; // [rsp+28h] [rbp-28h]
  IRawElementProviderSimple *el; // [rsp+30h] [rbp-20h] BYREF
  IRawElementProviderSimple *v20; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]

  v8 = 0LL;
  v20 = 0LL;
  v9 = 0;
  if ( a3 > 0x104 )
  {
    if ( a3 > 0x207 )
    {
      if ( a3 != 520 )
      {
        if ( a3 == 533 )
        {
          v16 = *((_QWORD *)this + 310);
          if ( v16 )
            (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v16 + 232LL))(v16, a2);
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
        }
        if ( a3 == 673 )
        {
          LODWORD(el) = (__int16)lParam;
          HIDWORD(el) = SWORD1(lParam);
          CMultitaskingViewFrame::_OnMouseHover(
            (CMultitaskingViewFrame *)((char *)this - 40),
            (const struct Geometry::CPoint *)&el);
          return v8;
        }
        if ( a3 != 675 )
        {
          if ( a3 == 807 )
            CMultitaskingViewFrame::_OnThumbnailSizeChanged((CMultitaskingViewFrame *)((char *)this - 40), a4);
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
        }
        v15 = *((_QWORD *)this + 310);
        if ( v15 )
          (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v15 + 216LL))(v15, a2);
        *((_WORD *)this + 1264) = 0;
        return v8;
      }
      goto LABEL_42;
    }
    if ( a3 != 519 )
    {
      if ( a3 == 261 )
        goto LABEL_23;
      if ( a3 == 512 )
      {
        LODWORD(el) = (__int16)lParam;
        HIDWORD(el) = SWORD1(lParam);
        CMultitaskingViewFrame::_OnMouseMove(
          (CMultitaskingViewFrame *)((char *)this - 40),
          (const struct Geometry::CPoint *)&el);
        return v8;
      }
      if ( a3 != 513 )
      {
        if ( a3 == 514 )
          goto LABEL_42;
        if ( a3 != 516 )
        {
          if ( a3 != 517 )
            return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
LABEL_42:
          LODWORD(el) = (__int16)lParam;
          HIDWORD(el) = SWORD1(lParam);
          v10 = CMultitaskingViewFrame::_OnMouseButtonUp(
                  (CMultitaskingViewFrame *)((char *)this - 40),
                  a3,
                  (const struct Geometry::CPoint *)&el);
          goto LABEL_43;
        }
      }
    }
    LODWORD(el) = (__int16)lParam;
    HIDWORD(el) = SWORD1(lParam);
    v10 = CMultitaskingViewFrame::_OnMouseButtonDown(
            (CMultitaskingViewFrame *)((char *)this - 40),
            a3,
            (const struct Geometry::CPoint *)&el);
    goto LABEL_43;
  }
  if ( a3 == 260 )
    goto LABEL_33;
  if ( a3 <= 0x2C )
  {
    switch ( a3 )
    {
      case 0x2Cu:
        goto LABEL_11;
      case 6u:
        if ( a4 )
        {
          CMultitaskingViewFrame::_EnsureDesktopZOrder((CMultitaskingViewFrame *)((char *)this - 40));
        }
        else
        {
          el = lParam;
          AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___((char *)this + 2416, &el);
        }
        return v8;
      case 7u:
      case 8u:
        v11 = *((_QWORD *)this + 310);
        if ( v11 )
        {
          LOBYTE(a2) = a3 == 7;
          (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v11 + 296LL))(v11, a2);
        }
        return v8;
      case 0x10u:
      case 0x14u:
        return v8;
      case 0x2Bu:
LABEL_11:
        v10 = CImmersiveContextMenuOwnerDrawHelper::s_ContextMenuWndProc(
                *((HWND *)this + 1),
                a3,
                (unsigned __int64)a4,
                (__int64)lParam,
                v17,
                v18);
LABEL_43:
        v9 = v10;
        goto LABEL_44;
    }
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
  }
  if ( a3 != 61 )
  {
    switch ( a3 )
    {
      case 'G':
        CMultitaskingViewFrame::_OnWindowPosChanged((CMultitaskingViewFrame *)((char *)this - 40));
        return v8;
      case '{':
        v20 = lParam;
        v21 = 0;
        CMultitaskingViewFrame::_OnContextMenu(
          (CMultitaskingViewFrame *)((char *)this - 40),
          (const struct ContextMenuArgs *)&v20);
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
      case '~':
        AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___((char *)this + 2416, a2);
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
    }
    if ( a3 != 256 )
    {
      if ( a3 != 257 )
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
LABEL_23:
      v10 = CMultitaskingViewFrame::_OnKeyUp((CMultitaskingViewFrame *)((char *)this - 40), (unsigned int)a4);
      goto LABEL_43;
    }
LABEL_33:
    v10 = CMultitaskingViewFrame::_OnKeyDown((CMultitaskingViewFrame *)((char *)this - 40), (unsigned int)a4);
    goto LABEL_43;
  }
  if ( lParam != (IRawElementProviderSimple *)-25LL )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
  el = 0LL;
  v12 = *((_QWORD *)this + 310);
  if ( v12 )
  {
    v13 = *(int (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v12 + 376LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&el);
    if ( v13(v12, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &el) < 0 )
    {
      v8 = (LONG_PTR)v20;
    }
    else
    {
      v8 = UiaReturnRawElementProvider(*((HWND *)this + 1), (WPARAM)a4, -25LL, el);
      v9 = 1;
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&el);
LABEL_44:
  if ( !v9 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
  return v8;
}
