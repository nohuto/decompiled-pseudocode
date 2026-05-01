/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ @ 0x1804CA81C
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804C8988 (-RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@.c)
 *     ?RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804CB53C (-RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800E1674 (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@UIUnknown@@@WeakReference@@V12@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@UIUnknown@@@WeakReference@@AEAPEAUIUnknown@@@Z @ 0x1804C8D2C (--$MakeAndInitialize@V-$CWeakReference@UIUnknown@@@WeakReference@@V12@AEAPEAUIUnknown@@@Details@.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::RuntimeClassInitialize(
        MultitaskingViewAnimationCoordinatorBase *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MultitaskingViewAnimationCoordinatorBase *v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = wil::wnf_query_nothrow<enum _TABLETMODESTATE>((__int64)this, (char *)&v11, (__int64)&v12, a4);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 311LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !(_BYTE)v11 || (v7 = 1, v12 != 1) )
    v7 = 0;
  *((_BYTE *)this + 168) = v7;
  v11 = this;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<IUnknown>,WeakReference::CWeakReference<IUnknown>,IUnknown * &>(
         (_QWORD *)this + 3,
         &v11);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v8);
    v6 = 313LL;
    goto LABEL_8;
  }
  return v5;
}
