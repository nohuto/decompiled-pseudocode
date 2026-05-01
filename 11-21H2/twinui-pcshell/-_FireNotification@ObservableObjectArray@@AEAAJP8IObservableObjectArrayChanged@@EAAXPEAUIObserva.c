/*
 * XREFs of ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x180233EA4
 * Callers:
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180233DCE (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804B6B40 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180123BAC (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18022AB3C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V?$ComPtr@UIObservableObjectArrayChanged@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180233C22 (--0Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V-$ComPtr@UIObservableObjec.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V?$ComPtr@UIObservableObjectArrayChangedBeginEnd@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180233C62 (--0Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V-$ComPtr@UIObserva.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V?$ComPtr@UIObservableObjectArrayChangedBeginEnd@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180233CA2 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V-$C.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V?$ComPtr@UIObservableObjectArrayChanged@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1804B6A10 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall ObservableObjectArray::_FireNotification(
        RTL_SRWLOCK *a1,
        void (__fastcall *a2)(__int64, RTL_SRWLOCK *, __int64),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  struct IObjectArray *v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rbx
  struct IObjectArray *v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  struct IObjectArray *v19; // [rsp+40h] [rbp-40h] BYREF
  int v20; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h] BYREF
  __int64 v26; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct IObjectArray *v28; // [rsp+A0h] [rbp+20h] BYREF

  v28 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  CallbackArray = CGITRegistrationList::GetCallbackArray(a1 + 12, &v28);
  v9 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    v10 = CGITRegistrationList::GetCallbackArray(a1 + 6, &v17);
    v9 = v10;
    if ( v10 >= 0 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v19,
        (__int64)v28);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v21,
        (__int64)&v19,
        0);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v24,
        (__int64)&v19,
        v20);
      while ( v21 != v24 || v23 != v26 )
      {
        v11 = v22;
        v18 = v22;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, __int64))(*(_QWORD *)v11 + 24LL))(v11, a1, a3, a4);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
        ++v21;
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(&v21);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      v12 = v17;
      v19 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      v20 = 0;
      v13 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v12->lpVtbl->GetCount)(v12, &v20);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10,
          (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v13);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::Iterator(
        (__int64)&v21,
        (__int64)&v19,
        0);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::Iterator(
        (__int64)&v24,
        (__int64)&v19,
        v20);
      while ( v21 != v24 || v23 != v26 )
      {
        v14 = v22;
        v18 = v22;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        a2(v14, a1, a4);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
        ++v21;
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::GetCurrentObject(&v21);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v19,
        (__int64)v28);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v21,
        (__int64)&v19,
        0);
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        (__int64)&v24,
        (__int64)&v19,
        v20);
      while ( v21 != v24 || v23 != v26 )
      {
        v15 = v22;
        v18 = v22;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, __int64))(*(_QWORD *)v15 + 32LL))(v15, a1, a3, a4);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
        ++v21;
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(&v21);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  return v9;
}
