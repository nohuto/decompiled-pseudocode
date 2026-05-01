/*
 * XREFs of ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804BC3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804BC088 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 *     ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804BD0F0 (-_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewControllerBase::DragSwitchItem(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  volatile signed __int32 *v4; // rcx
  int started; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  int v8; // eax
  CMultitaskingViewControllerBase *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int16 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+10h] BYREF
  CMultitaskingViewControllerBase *v15; // [rsp+68h] [rbp+28h] BYREF

  v4 = (volatile signed __int32 *)((char *)this - 16);
  v15 = (CMultitaskingViewControllerBase *)v4;
  _InterlockedIncrement(v4 + 26);
  started = CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement(
              (CMultitaskingViewControllerBase *)v4,
              a2,
              a3);
  if ( started >= 0 )
  {
    v14 = 0LL;
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v8 = v7(v6, &GUID_51575f72_33a0_4be2_b5ad_5ecac31260f4, &v14);
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
        v11 = 0;
        v9 = v15;
        *((_WORD *)v15 + 56) = 0;
        v12 = 0LL;
        v10 = *((_QWORD *)v9 + 15);
        *((_QWORD *)v9 + 15) = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE1,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          (const char *)(unsigned int)v8);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)started);
  }
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v15);
}
