/*
 * XREFs of ??1DragNDropProcessor@@UEAA@XZ @ 0x18015C7C4
 * Callers:
 *     ??_EDragNDropProcessor@@UEAAPEAXI@Z @ 0x18015CD50 (--_EDragNDropProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180097BC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098338 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A0930 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18015ADDC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18015AE2C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18015AE80 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@M.c)
 */

void __fastcall DragNDropProcessor::~DragNDropProcessor(DragNDropProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  std::_Deallocate<16,0>(
    *((void **)this + 57),
    (*((_QWORD *)this + 58) - *((_QWORD *)this + 57)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    *((_QWORD ***)this + 55));
  std::_Deallocate<16,0>(*((void **)this + 55), 0x18uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 49),
    (*((_QWORD *)this + 50) - *((_QWORD *)this + 49)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>,void *>>>(
    v3,
    *((_QWORD ***)this + 47));
  std::_Deallocate<16,0>(*((void **)this + 47), 0x20uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 41),
    (*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v4,
    *((_QWORD ***)this + 39));
  std::_Deallocate<16,0>(*((void **)this + 39), 0x20uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 33),
    (*((_QWORD *)this + 34) - *((_QWORD *)this + 33)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v5,
    *((_QWORD ***)this + 31));
  std::_Deallocate<16,0>(*((void **)this + 31), 0x20uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 25),
    (*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>(
    v6,
    *((_QWORD ***)this + 23));
  std::_Deallocate<16,0>(*((void **)this + 23), 0x38uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 17),
    (*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>(
    v7,
    *((_QWORD ***)this + 15));
  std::_Deallocate<16,0>(*((void **)this + 15), 0x90uLL);
  std::_Deallocate<16,0>(*((void **)this + 9), (*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
    v8,
    *((_QWORD ***)this + 7));
  std::_Deallocate<16,0>(*((void **)this + 7), 0x30uLL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
