/*
 * XREFs of ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18003EC10
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18003E9D0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18003EE00 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___ @ 0x18003EEDC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_0067f30f54eb0de3635ee.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800E0158 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::RuntimeClassInitialize(CWinRTApplicationView *this)
{
  int ViewId; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v7);
  v8 = -1LL;
  v9 = -1LL;
  ViewId = CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)this + 16), &v7);
  v3 = ViewId;
  if ( ViewId < 0 )
  {
    v5 = 35LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ViewId,
      v6[0]);
    goto LABEL_3;
  }
  v6[0] = &v7;
  v6[1] = this;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___(v6);
  ViewId = CApplicationViewBase::RuntimeClassInitialize(this);
  v3 = ViewId;
  if ( ViewId < 0 )
  {
    v5 = 47LL;
    goto LABEL_6;
  }
LABEL_3:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v7);
  return v3;
}
