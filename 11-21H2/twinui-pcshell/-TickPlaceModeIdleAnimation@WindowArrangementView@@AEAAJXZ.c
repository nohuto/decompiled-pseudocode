/*
 * XREFs of ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18051C78C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x18051B650 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::Run @ 0x18051B680 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x180517A9C (CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb___.c)
 *     ??1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ @ 0x180518510 (--1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180519184 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18051A854 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18051B6B8 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?GetPlaceModeGutterIndex@AppLayoutHelpers@@YAIPEAUIAppLayout@@@Z @ 0x180619C50 (-GetPlaceModeGutterIndex@AppLayoutHelpers@@YAIPEAUIAppLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowArrangementView::TickPlaceModeIdleAnimation(WindowArrangementView *this)
{
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  volatile int *v6; // rdx
  unsigned int v7; // edi
  unsigned int PlaceModeGutterIndex; // eax
  int v9; // ecx
  volatile int *v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  HRESULT v13; // eax
  __int64 v14; // rbx
  void *v15; // rbx
  void *v17; // [rsp+30h] [rbp-28h] BYREF
  WindowArrangementView *v18; // [rsp+38h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  __int64 v21; // [rsp+90h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+40h] BYREF
  WindowArrangementView *v23; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+50h] BYREF

  if ( *((_DWORD *)this + 74) && *((_DWORD *)this + 77) < 3u )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL);
    v3 = *((_DWORD *)this + 74);
    if ( v3 == 1 )
    {
      *((_DWORD *)this + 75) = *((_BYTE *)this + 313) != 0 ? v2 - 1 : 0;
      *((_DWORD *)this + 74) = 2;
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_10;
      if ( *((_BYTE *)this + 304) )
      {
        *((_BYTE *)this + 304) = 0;
        goto LABEL_10;
      }
      *((_DWORD *)this + 75) += *((_BYTE *)this + 313) != 0 ? -1 : 1;
    }
    *((_BYTE *)this + 304) = 1;
LABEL_10:
    v24 = 0LL;
    v4 = *((_QWORD *)this + 15);
    v5 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    if ( v5(v4, *((unsigned int *)this + 75), 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v24) < 0 )
    {
      ++*((_DWORD *)this + 77);
      LOBYTE(v6) = 1;
      WindowArrangementView::SetPlaceModeIdleAnimationEnabled(this, v6);
    }
    else
    {
      v7 = 0;
      if ( *((_BYTE *)this + 304) )
      {
        PlaceModeGutterIndex = AppLayoutHelpers::GetPlaceModeGutterIndex(
                                 *((AppLayoutHelpers **)this + 15),
                                 (struct IAppLayout *)v6);
        v9 = *((_DWORD *)this + 75);
        if ( v9 == PlaceModeGutterIndex )
        {
          v7 = 1;
        }
        else if ( v9 == PlaceModeGutterIndex + 1 )
        {
          v7 = 2;
        }
      }
      v21 = 0LL;
      v18 = this;
      Microsoft::WRL::Details::SafeUnknownIncrementReference((WindowArrangementView *)((char *)this + 68), v6);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      v23 = this;
      Microsoft::WRL::Details::SafeUnknownIncrementReference((WindowArrangementView *)((char *)this + 68), v10);
      v11 = CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb_((__int64)&v23, &v21);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v11);
LABEL_20:
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
LABEL_26:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        return v12;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      v13 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_1806EB620,
              &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
              &ppvOut);
      v12 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_20;
      }
      v14 = v21;
      v23 = (WindowArrangementView *)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, (__int64 *)&v23, (__int64)&GUID_NULL, v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
      v15 = ppvOut;
      v17 = ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      if ( v15 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 160LL))(v15, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 168LL))(
        *((_QWORD *)this + 10),
        v7,
        1LL,
        v21);
      LODWORD(v23) = 3;
      HIDWORD(v23) = (*((_DWORD *)this + 75) != 0) + 2;
      WindowArrangementView::EnablePlaceModeDropFeedback(
        (__int64)this,
        0,
        (int *)((unsigned __int64)&v23 & -(__int64)(*((_BYTE *)this + 304) != 0)),
        v21);
      DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier::~CDCompAnimationsOffBehaviorModifier((DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier *)&v17);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    }
    v12 = 0;
    goto LABEL_26;
  }
  return 2147947423LL;
}
