/*
 * XREFs of ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x18057A380
 * Callers:
 *     <none>
 * Callees:
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister @ 0x18002DAEC (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18002DAEC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x18056783C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x180567924 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 *     ?_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z @ 0x18057A69C (-_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSwitchItemGrid::SetItems(CSwitchItemGrid *this, struct IObservableObjectArray *a2)
{
  CSwitchItemGrid *v4; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // r14d
  __int64 (__fastcall *v11)(struct IObservableObjectArray *, _QWORD, GUID *, struct IUnknown **); // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v19; // [rsp+88h] [rbp+48h] BYREF
  char *v20; // [rsp+90h] [rbp+50h]

  v4 = (CSwitchItemGrid *)((char *)this - 208);
  v20 = (char *)this - 208;
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)this + 56LL))(this);
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
  v6 = (_QWORD *)((char *)this + 680);
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister((__int64)this + 680);
  v7 = (_QWORD *)((char *)this + 696);
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister((__int64)this + 696);
  if ( !a2 )
    goto LABEL_17;
  v8 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = 0;
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = 0LL;
        v11 = *(__int64 (__fastcall **)(struct IObservableObjectArray *, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        v12 = v11(a2, v10, &GUID_00000000_0000_0000_c000_000000000046, &v19);
        v9 = v12;
        if ( v12 < 0 )
          break;
        v12 = CSwitchItemGrid::_AddElementForObject(v4, v19);
        v9 = v12;
        if ( v12 < 0 )
        {
          v15 = 427LL;
          goto LABEL_12;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        if ( ++v10 >= v18 )
          goto LABEL_8;
      }
      v15 = 426LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      goto LABEL_16;
    }
LABEL_8:
    v13 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
            v6,
            (__int64)a2);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 431LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v13);
LABEL_16:
      (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
      goto LABEL_18;
    }
    v13 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register(
            v7,
            (__int64)a2);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 432LL;
      goto LABEL_15;
    }
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19F,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
    (const char *)(unsigned int)v8);
LABEL_18:
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)this + 64LL))(this);
  return v9;
}
