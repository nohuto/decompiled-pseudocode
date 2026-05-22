/*
 * XREFs of ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x1801A1B8C
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x1801A20F4 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D24C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DD48C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1801A0A10 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1801A0A4C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorBuffer::~ContextualProcessorBuffer(
        ContextualProcessorBuffer *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  ContextualProcessorBuffer::InputSample *v7; // rcx
  ContextualProcessorBuffer::ContextualProcessorMetadata *v8; // rcx

  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
  *((_QWORD *)this + 3) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 19);
  std::_Deallocate<16,0>(
    *((void **)this + 14),
    (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    v6,
    *((_QWORD ***)this + 12));
  std::_Deallocate<16,0>(*((void **)this + 12), 0x20uLL);
  v7 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
      v7,
      *((ContextualProcessorBuffer::InputSample **)this + 9));
    std::_Deallocate<16,0>(*((void **)this + 8), 16 * ((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) >> 4));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  v8 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
      v8,
      *((ContextualProcessorBuffer::ContextualProcessorMetadata **)this + 6));
    std::_Deallocate<16,0>(*((void **)this + 5), 32 * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 5)) >> 5));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
