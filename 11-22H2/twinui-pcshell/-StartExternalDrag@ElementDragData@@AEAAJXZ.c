/*
 * XREFs of ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x180590768
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18058F544 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@ExternalDragDetected@MultitaskingViewTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18058E468 (--$-0$$V@ExternalDragDetected@MultitaskingViewTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x18058E518 (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x18058E574 (DragCallbackHelpers--CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___.c)
 *     ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18058F1A8 (--1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ElementDragData::StartExternalDrag(ElementDragData *this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  HWND v7; // rax
  HWND v8; // rax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  ElementDragData *v12; // [rsp+30h] [rbp-D0h] BYREF
  ElementDragData *v13; // [rsp+38h] [rbp-C8h] BYREF
  struct tagPOINT v14; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT Points; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  MultitaskingViewTelemetry::ExternalDragDetected::ExternalDragDetected((__int64)v16, a2);
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v12 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v3 = DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
         (__int64)this,
         &v10,
         (__int64)&v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 126) = 2;
    v11 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4,
           &v11);
    v4 = v5;
    if ( v5 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, struct tagPOINT *))(**((_QWORD **)this + 6) + 32LL))(
        *((_QWORD *)this + 6),
        &Points);
      v7 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5));
      MapWindowPoints(v7, 0LL, &Points, 2u);
      v14 = *(struct tagPOINT *)((char *)this + 92);
      v8 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5));
      MapWindowPoints(v8, 0LL, &v14, 1u);
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, v10);
      v4 = v5;
      if ( v5 >= 0 )
      {
        wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
        v4 = 0;
        goto LABEL_9;
      }
      v6 = 428LL;
    }
    else
    {
      v6 = 421LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19D,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  MultitaskingViewTelemetry::ExternalDragDetected::~ExternalDragDetected((MultitaskingViewTelemetry::ExternalDragDetected *)v16);
  return v4;
}
