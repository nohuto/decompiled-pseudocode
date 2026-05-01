/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z @ 0x1804AB150
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFilteredCollection@@AEAPEAUIObservableObjectArray@@@Z @ 0x1804AA084 (--$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180233DCE (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEAVSwitchItemFilteredCollection@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@AEAPEAVSwitchItemFilteredCollection@@@Z @ 0x1804A9EC8 (--$MakeAndInitialize@V-$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEA.c)
 *     ??4?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z @ 0x1804AA584 (--4-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x1804AAC7C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1804AAD64 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::RuntimeClassInitialize(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArray *a2)
{
  _QWORD *v4; // rbx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, SwitchItemFilteredCollection **); // rbx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v16; // [rsp+60h] [rbp+30h] BYREF
  SwitchItemFilteredCollection *v17; // [rsp+70h] [rbp+40h] BYREF

  v4 = (_QWORD *)((char *)this + 336);
  v17 = this;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<SwitchItemFilteredCollection>,WeakReference::CWeakReference<SwitchItemFilteredCollection>,SwitchItemFilteredCollection * &>(
         v4,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v5);
    v7 = 534LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
         (_QWORD *)this + 36,
         (__int64)a2);
  if ( v6 < 0 )
  {
    v7 = 536LL;
    goto LABEL_3;
  }
  v6 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register(
         (_QWORD *)this + 38,
         (__int64)a2);
  if ( v6 < 0 )
  {
    v7 = 537LL;
    goto LABEL_3;
  }
  v9 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 23, (__int64)a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 24LL))(*v9, &v16);
  if ( v6 < 0 )
  {
    v7 = 542LL;
    goto LABEL_3;
  }
  v10 = 0;
  if ( v16 )
  {
    while ( 1 )
    {
      v17 = 0LL;
      v11 = *v9;
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, SwitchItemFilteredCollection **))(*(_QWORD *)*v9 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      v13 = v12(v11, v10, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v17);
      v6 = v13;
      if ( v13 < 0 )
        break;
      v13 = ObservableObjectArray::_AddItem(this, (__int64 *)&v17, 2u);
      v6 = v13;
      if ( v13 < 0 )
      {
        v14 = 547LL;
        goto LABEL_18;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      if ( ++v10 >= v16 )
        return 0LL;
    }
    v14 = 546LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    return (unsigned int)v6;
  }
  return 0LL;
}
