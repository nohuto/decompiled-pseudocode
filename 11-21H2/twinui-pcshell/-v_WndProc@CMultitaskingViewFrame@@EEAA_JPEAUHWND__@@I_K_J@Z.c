/*
 * XREFs of ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802337B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18023A696 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804B2778 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z @ 0x1804B2810 (-_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z.c)
 *     ?_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x1804B2888 (-_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x1804B28EC (-_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804B2950 (-_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804B29E8 (-_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseHover@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1804B2A78 (-_OnMouseHover@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1804B2ADC (-_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z @ 0x1804B2BC8 (-_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804B2CBC (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1804C4D28 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x1804C4DF0 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CMultitaskingViewFrame::v_WndProc(
        CMultitaskingViewFrame *this,
        HWND a2,
        UINT a3,
        void *a4,
        LPARAM lParam)
{
  LONG_PTR v8; // rbx
  char v9; // r14
  __int64 v10; // r13
  int (__fastcall *v11)(__int64, GUID *, IRawElementProviderSimple **); // rbx
  bool v12; // al
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  bool *v17; // [rsp+20h] [rbp-30h]
  enum GRID_HOW_SELECTED_FLAGS *v18; // [rsp+28h] [rbp-28h]
  IRawElementProviderSimple *el; // [rsp+30h] [rbp-20h] BYREF
  LPARAM v20; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]

  v8 = 0LL;
  v20 = 0LL;
  v9 = 0;
  if ( a3 > 0x105 )
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
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
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
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
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
            return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
LABEL_42:
          LODWORD(el) = (__int16)lParam;
          HIDWORD(el) = SWORD1(lParam);
          v12 = CMultitaskingViewFrame::_OnMouseButtonUp(
                  (CMultitaskingViewFrame *)((char *)this - 40),
                  a3,
                  (const struct Geometry::CPoint *)&el);
          goto LABEL_43;
        }
      }
    }
    LODWORD(el) = (__int16)lParam;
    HIDWORD(el) = SWORD1(lParam);
    v12 = CMultitaskingViewFrame::_OnMouseButtonDown(
            (CMultitaskingViewFrame *)((char *)this - 40),
            a3,
            (const struct Geometry::CPoint *)&el);
    goto LABEL_43;
  }
  if ( a3 == 261 )
    goto LABEL_34;
  if ( a3 > 0x47 )
  {
    switch ( a3 )
    {
      case 0x7Bu:
        v20 = lParam;
        v21 = 0;
        CMultitaskingViewFrame::_OnContextMenu(
          (CMultitaskingViewFrame *)((char *)this - 40),
          (const struct ContextMenuArgs *)&v20);
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
      case 0x7Eu:
        AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___((char *)this + 2416, a2);
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
      case 0x100u:
        goto LABEL_31;
    }
    if ( a3 != 257 )
    {
      if ( a3 != 260 )
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
LABEL_31:
      v12 = CMultitaskingViewFrame::_OnKeyDown((CMultitaskingViewFrame *)((char *)this - 40), (unsigned int)a4);
      goto LABEL_43;
    }
LABEL_34:
    v12 = CMultitaskingViewFrame::_OnKeyUp((CMultitaskingViewFrame *)((char *)this - 40), (unsigned int)a4);
    goto LABEL_43;
  }
  if ( a3 == 71 )
  {
    CMultitaskingViewFrame::_OnWindowPosChanged((CMultitaskingViewFrame *)((char *)this - 40));
    return v8;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      CMultitaskingViewFrame::_EnsureDesktopZOrder((CMultitaskingViewFrame *)((char *)this - 40));
    }
    else
    {
      v20 = lParam;
      AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___((char *)this + 2416, &v20);
    }
    return v8;
  }
  if ( a3 <= 6 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  if ( a3 <= 8 )
  {
    v13 = *((_QWORD *)this + 310);
    if ( v13 )
    {
      LOBYTE(a2) = a3 == 7;
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v13 + 296LL))(v13, a2);
    }
    return v8;
  }
  if ( a3 == 16 || a3 == 20 )
    return v8;
  if ( a3 <= 0x2A )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  if ( a3 <= 0x2C )
  {
    v12 = CImmersiveContextMenuOwnerDrawHelper::s_ContextMenuWndProc(
            *((HWND *)this + 1),
            a3,
            (unsigned __int64)a4,
            lParam,
            v17,
            v18);
LABEL_43:
    v9 = v12;
    goto LABEL_44;
  }
  if ( a3 != 61 || lParam != -25 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  el = 0LL;
  v10 = *((_QWORD *)this + 310);
  if ( v10 )
  {
    v11 = *(int (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v10 + 376LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&el);
    if ( v11(v10, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &el) < 0 )
    {
      v8 = v20;
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
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  return v8;
}
