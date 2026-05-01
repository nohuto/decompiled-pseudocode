/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804DAC24
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804C66CC (--$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z @ 0x1804AA584 (--4-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x1804AAC7C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     ??4?$ComPtr@UIVirtualDesktopElementFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopElementFactory@@@Z @ 0x1804B0114 (--4-$ComPtr@UIVirtualDesktopElementFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopEleme.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804B7E94 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1804DA13C (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopContainerElement::RuntimeClassInitialize(
        CVirtualDesktopContainerElement *this,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray *a4,
        struct IVirtualDesktopElementFactory *a5,
        struct ISwitchThumbnailFactory *a6)
{
  _OWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, char *); // rdi
  char v14; // si
  int v15; // eax
  unsigned int v16; // edi
  __int64 (__fastcall *v17)(struct IObservableObjectArray *, _QWORD, GUID *, struct IObservableItem **); // rbx
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v21; // [rsp+70h] [rbp+30h] BYREF
  struct IObservableItem *v22; // [rsp+78h] [rbp+38h] BYREF

  v8 = (_OWORD *)((char *)this + 296);
  v9 = 3LL;
  do
  {
    *v8 = *(_OWORD *)a2;
    v8[1] = *((_OWORD *)a2 + 1);
    v8[2] = *((_OWORD *)a2 + 2);
    v8[3] = *((_OWORD *)a2 + 3);
    v8[4] = *((_OWORD *)a2 + 4);
    v8[5] = *((_OWORD *)a2 + 5);
    v8[6] = *((_OWORD *)a2 + 6);
    v8 += 8;
    *(v8 - 1) = *((_OWORD *)a2 + 7);
    a2 = (const struct VirtualDesktopMetrics *)((char *)a2 + 128);
    --v9;
  }
  while ( v9 );
  *v8 = *(_OWORD *)a2;
  v8[1] = *((_OWORD *)a2 + 1);
  v8[2] = *((_OWORD *)a2 + 2);
  v8[3] = *((_OWORD *)a2 + 3);
  v8[4] = *((_OWORD *)a2 + 4);
  v8[5] = *((_OWORD *)a2 + 5);
  v8[6] = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)a3;
  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 33, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopElementFactory>::operator=((__int64 *)this + 34, (__int64)a5);
  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)this + 30, (__int64)a6);
  v10 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
          (_QWORD *)this + 35,
          *((_QWORD *)this + 33));
  if ( v10 < 0 )
  {
    v11 = 26LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v12 = *((_QWORD *)this + 30);
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v12 + 120LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
  v22 = (struct IObservableItem *)0x100000001LL;
  v10 = v13(v12, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 88);
  if ( v10 < 0 )
  {
    v11 = 27LL;
    goto LABEL_5;
  }
  v14 = 1;
  v15 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, unsigned int *))(*(_QWORD *)a4 + 24LL))(a4, &v21);
  v10 = v15;
  if ( v15 >= 0 )
  {
    v16 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        v22 = 0LL;
        v17 = *(__int64 (__fastcall **)(struct IObservableObjectArray *, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)a4 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        v18 = v17(a4, v16, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v22);
        v10 = v18;
        if ( v18 < 0 )
          break;
        CVirtualDesktopContainerElement::ItemAddedInternal(this, v22);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        if ( ++v16 >= v21 )
          goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    }
    else
    {
LABEL_13:
      v14 = 0;
      *((_BYTE *)this + 825) = 1;
      v10 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
      (const char *)(unsigned int)v15);
  }
  if ( v14 )
    (*(void (__fastcall **)(CVirtualDesktopContainerElement *))(*(_QWORD *)this + 80LL))(this);
  return (unsigned int)v10;
}
