/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x18041AE70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180123BAC (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18022AB3C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18041AB3C (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$ComPtr@UIWindowM.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18041ADA4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$C.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ViewPresentationMediator::OnGroupWindowTemplateApplied(
        ViewPresentationMediator *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        unsigned int a7)
{
  RTL_SRWLOCK *v10; // rbx
  unsigned int v11; // edi
  struct tagRECT *v12; // rsi
  struct tagRECT *v13; // r14
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h] BYREF
  int v18; // [rsp+58h] [rbp-41h]
  struct tagRECT v19; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT v20; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v21; // [rsp+88h] [rbp-11h] BYREF
  __int64 v22[2]; // [rsp+90h] [rbp-9h] BYREF
  int v23; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v24[2]; // [rsp+A8h] [rbp+Fh] BYREF
  struct IObjectArray *v25; // [rsp+E8h] [rbp+4Fh] BYREF

  v25 = 0LL;
  v10 = (RTL_SRWLOCK *)((char *)this + 120);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
  if ( (int)CGITRegistrationList::GetCallbackArray(v10, &v25) >= 0 )
  {
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v17,
      (__int64)v25);
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
      (__int64)&v21,
      (__int64)&v17,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
      (__int64)&v23,
      (__int64)&v17,
      v18);
    v11 = a7;
    v12 = a6;
    v13 = a5;
    while ( v21 != v23 || v22[1] != v24[1] )
    {
      v14 = (__int64 *)v22[0];
      v16 = v22[0];
      if ( v22[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22[0] + 8LL))(v22[0]);
      v15 = *v14;
      v19 = *v12;
      v20 = *v13;
      (*(void (__fastcall **)(__int64 *, HWND, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, unsigned int))(v15 + 24))(
        v14,
        a2,
        a3,
        a4,
        &v20,
        &v19,
        v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      ++v21;
      details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v21);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v22);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
}
