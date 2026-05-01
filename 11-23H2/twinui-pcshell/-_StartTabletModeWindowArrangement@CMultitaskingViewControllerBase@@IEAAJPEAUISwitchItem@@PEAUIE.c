/*
 * XREFs of ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180577AA0
 * Callers:
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180576F40 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@ExternalDragHandoff@MultitaskingViewTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805769DC (--$-0$$V@ExternalDragHandoff@MultitaskingViewTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180576C3C (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1805878AC (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement(
        CMultitaskingViewControllerBase *this,
        __int64 (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *),
        struct IExternalDragCallback *a3)
{
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, GUID *, struct IExternalDragHost **); // rbx
  int v13; // eax
  const struct _GUID *v14; // rdx
  int v15; // eax
  char v16; // di
  int v17; // eax
  int v18; // eax
  void *v20; // [rsp+30h] [rbp-D0h] BYREF
  struct IExternalDragHost *v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v23[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+60h] [rbp-A0h]
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v27[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  MultitaskingViewTelemetry::ExternalDragHandoff::ExternalDragHandoff((__int64)v27, (char)a2);
  if ( *((_QWORD *)this + 8) )
  {
    v22 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v8 = v7((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v22);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
        (const char *)(unsigned int)v8);
LABEL_22:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      goto LABEL_23;
    }
    v21 = 0LL;
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      v12 = *(__int64 (__fastcall **)(__int64, GUID *, struct IExternalDragHost **))(*(_QWORD *)v9 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
      v13 = v12(v9, &GUID_51575f72_33a0_4be2_b5ad_5ecac31260f4, &v21);
      v6 = v13;
      if ( v13 >= 0 )
      {
        v20 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v20);
        v15 = DragInputHandler_CreateInstance(v21, v14, &v20);
        v6 = v15;
        if ( v15 >= 0 )
        {
          v24[1] = (__int64)&v20;
          v16 = 1;
          v25 = 1;
          v26 = 0LL;
          v23[0] = 0;
          v23[1] = 0;
          v17 = (*(__int64 (__fastcall **)(struct IExternalDragCallback *, __int128 *, _DWORD *))(*(_QWORD *)a3 + 24LL))(
                  a3,
                  &v26,
                  v23);
          v6 = v17;
          if ( v17 >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, v24);
            v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, _DWORD *, void *))(**((_QWORD **)this + 8)
                                                                                           + 40LL))(
                    *((_QWORD *)this + 8),
                    v24[0],
                    &v26,
                    v23,
                    v20);
            v6 = v18;
            if ( v18 >= 0 )
            {
              v16 = 0;
              v25 = 0;
              (*(void (__fastcall **)(struct IExternalDragCallback *))(*(_QWORD *)a3 + 32LL))(a3);
              wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
              v6 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x123,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
                (const char *)(unsigned int)v18);
            }
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v24);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x120,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
              (const char *)(unsigned int)v17);
          }
          if ( v16 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 32LL))(v20);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x118,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
            (const char *)(unsigned int)v15);
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v20);
        goto LABEL_21;
      }
      v10 = (unsigned int)v13;
      v11 = 277LL;
    }
    else
    {
      v6 = -2147019873;
      v10 = 2147947423LL;
      v11 = 276LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)v10);
LABEL_21:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    goto LABEL_22;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10B,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
    (const char *)0x8007139FLL);
LABEL_23:
  MultitaskingViewTelemetry::ExternalDragHandoff::~ExternalDragHandoff((MultitaskingViewTelemetry::ExternalDragHandoff *)v27);
  return v6;
}
