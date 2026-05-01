/*
 * XREFs of ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180576F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180576C10 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 *     ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180577AA0 (-_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewControllerBase::DragSwitchItem(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  char *v4; // rdi
  int started; // eax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  int v8; // eax
  CMultitaskingViewControllerBase *v9; // [rsp+20h] [rbp-20h] BYREF
  __int16 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v4 = (char *)this - 16;
  v9 = (CMultitaskingViewControllerBase *)((char *)this - 16);
  _InterlockedIncrement((volatile signed __int32 *)this + 20);
  started = CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement(
              (CMultitaskingViewControllerBase *)((char *)this - 16),
              a2,
              a3);
  if ( started >= 0 )
  {
    v13 = 0LL;
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      v8 = v7(v6, &GUID_51575f72_33a0_4be2_b5ad_5ecac31260f4, &v13);
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        v10 = 0;
        *((_WORD *)v4 + 52) = 0;
        v11 = 0LL;
        v14 = *((_QWORD *)v4 + 14);
        *((_QWORD *)v4 + 14) = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD5,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          (const char *)(unsigned int)v8);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD1,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)started);
  }
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v9);
}
