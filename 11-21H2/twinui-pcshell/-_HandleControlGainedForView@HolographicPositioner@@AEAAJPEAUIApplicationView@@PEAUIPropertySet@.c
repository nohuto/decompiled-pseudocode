/*
 * XREFs of ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D1E0C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke @ 0x180181800 (CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___--Invoke.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803CD850 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803CDAD0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009848C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801A84AC (--$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA298 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1803CCFAC (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803D1248 (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803D1ADC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D30E8 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D393C (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_HandleControlGainedForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  char *ViewHostItem; // rax
  HolographicPositioner *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+38h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  if ( HolographicPositioner::_IsViewWin32Slate((__int64)a2, 6) && *((_QWORD *)this + 31) )
  {
    wil::com_query_failfast<IWin32ApplicationView,IApplicationView * &>(v16, &v18);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct Windows::Foundation::Collections::IPropertySet *))(**((_QWORD **)this + 31) + 24LL))(
           *((_QWORD *)this + 31),
           v16[0],
           a3);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x698,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v16);
  }
  HolographicPositioner::_FindViewHostItem((__int64)this, &v19);
  if ( v19 )
    goto LABEL_14;
  v7 = HolographicPositioner::_RaiseViewAdded(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1697LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_25;
  }
  v7 = HolographicPositioner::_TransitionViewToHolographic(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1700LL;
    goto LABEL_23;
  }
  ViewHostItem = (char *)HolographicPositioner::_FindViewHostItem((__int64)this, v16);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)&v19, ViewHostItem);
  v11 = (HolographicPositioner *)v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v19 )
  {
LABEL_14:
    v16[0] = 0LL;
    v12 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
            &v19,
            v16);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 1709LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v16);
      goto LABEL_25;
    }
    if ( a3 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v16[0] + 56LL))(
              v16[0],
              a3);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 1714LL;
        goto LABEL_19;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v16);
  }
  v7 = HolographicPositioner::_EnableSystemVisuals(
         v11,
         (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2,
         0);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1719LL;
    goto LABEL_23;
  }
  v8 = 0;
LABEL_25:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[2])(v14);
  }
  return v8;
}
