/*
 * XREFs of ?SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18078BD44
 * Callers:
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180788F0C (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?TagWindowForSnapAnimation@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x18078BE20 (-TagWindowForSnapAnimation@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@.c)
 */

void __fastcall SnapAssistState::SnapPending(
        SnapAssistState *this,
        HWND a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  HWND PropW; // rax
  HWND v7; // rsi
  HWND v8; // r8
  __int64 v9; // rax
  winrt::Windows::Foundation::IUnknown *v10; // rcx
  winrt::Windows::Foundation::IUnknown *v11; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((float *)a3 + 2) <= 0.0 || *((float *)a3 + 3) <= 0.0 )
  {
    v12 = 0LL;
    v11 = (winrt::Windows::Foundation::IUnknown *)&v12;
    v10 = (SnapAssistState *)((char *)this + 184);
  }
  else
  {
    PropW = (HWND)GetPropW(a2, (LPCWSTR)0xA920);
    v7 = PropW;
    if ( PropW )
    {
      if ( (unsigned int)IsWindowArranged(PropW) )
        goto LABEL_11;
      v8 = v7;
    }
    else
    {
      v8 = a2;
    }
    v9 = winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::TagWindowForSnapAnimation(
           (char *)this + 168,
           &v12,
           v8,
           a3);
    v10 = (SnapAssistState *)((char *)this + 184);
    v11 = (winrt::Windows::Foundation::IUnknown *)v9;
  }
  winrt::Windows::Foundation::IUnknown::operator=(v10, v11);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
LABEL_11:
  *((_BYTE *)this + 152) = 1;
}
