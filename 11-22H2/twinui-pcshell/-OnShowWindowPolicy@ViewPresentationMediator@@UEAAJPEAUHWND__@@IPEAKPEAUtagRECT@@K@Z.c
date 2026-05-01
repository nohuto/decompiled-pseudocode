/*
 * XREFs of ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804F3F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180055F54 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1802D0808 (--0-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationViewChangeLi.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802D990E (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1804F370C (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewPresentationMediator::OnShowWindowPolicy(
        RTL_SRWLOCK *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc,
        unsigned int a6)
{
  LPRECT v10; // rsi
  int CallbackArray; // eax
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  __int64 v14; // rbx
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-38h]
  unsigned int v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IObjectArray *v23; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+48h] BYREF

  *a4 = 0;
  v10 = lprc;
  SetRectEmpty(lprc);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  CallbackArray = CGITRegistrationList::GetCallbackArray(this + 11, &v23);
  v12 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>(
      (__int64)&v16,
      (__int64)v23);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v18,
      (__int64)&v16,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v20,
      (__int64)&v16,
      v17);
    v13 = a6;
    while ( v18 != v20 || v19[1] != v21[1] )
    {
      v14 = v19[0];
      v24 = v19[0];
      if ( v19[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 8LL))(v19[0]);
      if ( *a4 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
        break;
      }
      (*(void (__fastcall **)(__int64, HWND, _QWORD, unsigned int *, LPRECT, unsigned int))(*(_QWORD *)v14 + 24LL))(
        v14,
        a2,
        a3,
        a4,
        v10,
        v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      ++v18;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v18);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  return v12;
}
