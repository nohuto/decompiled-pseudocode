/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_A0xbba38151::ObservableObjectArrayBeginEndEventRegistration_IObservableObjectArrayChangedBeginEnd___&_ @ 0x1804A9F5C
 * Callers:
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1804AAD64 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18003FB90 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef @ 0x180043228 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalAddRef.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChangedBeginEnd@@@EventRegistrationHelpers@@QEAA@XZ @ 0x1804AA310 (--0-$EventRegistration@UIObservableObjectArray@@UIObservableObjectArrayChangedBeginEnd@@@EventRe.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_A0xbba38151::ObservableObjectArrayBeginEndEventRegistration_IObservableObjectArrayChangedBeginEnd_____(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    EventRegistrationHelpers::EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>::EventRegistration<IObservableObjectArray,IObservableObjectArrayChangedBeginEnd>(v5);
    *v6 = off_180644418;
    v8 = v6;
    v6[2] = *a2;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
