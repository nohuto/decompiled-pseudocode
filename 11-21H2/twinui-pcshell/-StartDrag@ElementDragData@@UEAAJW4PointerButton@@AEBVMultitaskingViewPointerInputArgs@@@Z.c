/*
 * XREFs of ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D86F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800FF5A4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D6A48 (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1804D6F98 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1804D6F98.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804D7360 (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804D74C8 (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D7784 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804D7C44 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804D85A0 (-StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1804DD998 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ElementDragData::StartDrag(__int64 a1, int a2, __int64 *a3)
{
  int DragSourceLocation; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int32 v9; // ecx
  int Instance; // eax
  __int64 v11; // rdx
  __int64 *v12; // r12
  __int64 v13; // rcx
  void (__fastcall *v14)(__int64, __m128i *, _QWORD, _QWORD); // r11
  const struct _GUID *v16; // [rsp+28h] [rbp-D8h]
  __m128i v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19[3]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v20[40]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v21[40]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"DragSwitchItem");
  v20[0] = (volatile signed __int32 *)&MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  MultitaskingViewTelemetry::DragSwitchItem::StartActivity((MultitaskingViewTelemetry::DragSwitchItem *)v20);
  v17.m128i_i64[0] = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v17.m128i_i64);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, v17.m128i_i64, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17.m128i_i64);
  *(_DWORD *)(a1 + 88) = a2;
  *(_OWORD *)(a1 + 92) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 108) = *((_DWORD *)a3 + 4);
  v17 = 0LL;
  DragSourceLocation = ElementDragData::GetDragSourceLocation((ElementDragData *)a1, &v17);
  v7 = DragSourceLocation;
  if ( DragSourceLocation >= 0 )
  {
    v8 = *a3;
    *(_QWORD *)(a1 + 64) = *a3;
    v9 = *(_DWORD *)(a1 + 68) - v17.m128i_i32[1];
    v17.m128i_i32[0] = v8 - v17.m128i_i32[0];
    v17.m128i_i32[1] = v9;
    *(_QWORD *)(a1 + 56) = v17.m128i_i64[0];
    v18 = 0LL;
    Instance = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
                 &v18);
    v7 = Instance;
    if ( Instance >= 0 )
    {
      v12 = (__int64 *)(a1 + 48);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 48));
      Instance = MultitaskingViewDragVisual_CreateInstance(
                   *(struct ISwitchThumbnailFactory **)(a1 + 16),
                   *(struct IMultitaskingViewElement **)(a1 + 40),
                   *(struct IMultitaskingViewElement **)(a1 + 32),
                   (const struct Geometry::CSize *)(a1 + 56),
                   *(double *)(a1 + 120),
                   v16,
                   (void **)(a1 + 48));
      v7 = Instance;
      if ( Instance >= 0 )
      {
        v13 = *v12;
        v14 = *(void (__fastcall **)(__int64, __m128i *, _QWORD, _QWORD))(*(_QWORD *)*v12 + 24LL);
        v17.m128i_i64[0] = *(_QWORD *)(a1 + 92);
        v14(v13, &v17, 0LL, 0LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 216LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 232LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 432LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 24));
        ElementDragData::DragOver((ElementDragData *)a1, (const struct MultitaskingViewPointerInputArgs *)a3);
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v21,
          (__int64)v20,
          0);
        v21[0] = (volatile signed __int32 *)&MultitaskingViewTelemetry::DragSwitchItem::`vftable';
        MultitaskingViewTelemetry::DragSwitchItem::operator=((_QWORD *)(a1 + 184), (__int64)v21);
        MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem(v21);
        *(_DWORD *)(a1 + 504) = 1;
        v7 = 0;
        goto LABEL_9;
      }
      v11 = 113LL;
    }
    else
    {
      v11 = 106LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)Instance);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
    (const char *)(unsigned int)DragSourceLocation);
LABEL_10:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem(v20);
  return v7;
}
