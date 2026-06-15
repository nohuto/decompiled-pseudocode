/*
 * XREFs of ??0CProcess@@QEAA@XZ @ 0x18001E904
 * Callers:
 *     ??$MakeAndInitialize@VCProcess@@V1@PEAXAEAKAEAKPEAGPEAGAEA_KPEAG_NPEAGAEA_NAEA_NAEAHAEAHAEAHAEAHAEAHAEAHAEA_NAEAHAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCProcess@@$$QEAPEAXAEAK2$$QEAPEAG3AEA_K3$$QEA_N3AEA_N6AEAH77777677@Z @ 0x18001E2A0 (--$MakeAndInitialize@VCProcess@@V1@PEAXAEAKAEAKPEAGPEAGAEA_KPEAG_NPEAGAEA_NAEA_NAEAHAEAHAEAHAEAH.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXXZ @ 0x18001CD3C (-UpdateRehashThresholds@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_re.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
CProcess *__fastcall CProcess::CProcess(CProcess *this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioProcess,IAudioProcessInternal>::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioProcess,IAudioProcessInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 1) = &CProcess::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessInternal>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 9) = v3;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_QWORD *)this + 15) = 8LL;
  *((_DWORD *)this + 16) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    (__int64)this + 88,
    0x10uLL,
    *((_QWORD *)this + 9));
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 4;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 8, 0, 0);
  *((_QWORD *)this + 45) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 368), 0, 0);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *(_QWORD *)((char *)this + 484) = 4LL;
  *((_DWORD *)this + 123) = 1;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *(GUID *)((char *)this + 520) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 536), 0, 0);
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 592), 0, 0);
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 162) = 17;
  *((_QWORD *)this + 83) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 10;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_DWORD *)this + 163) = 1061158912;
  *((_DWORD *)this + 164) = 1048576000;
  *((_DWORD *)this + 165) = 1074790400;
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)this + 632);
  *((_QWORD *)this + 88) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 712), 0, 0);
  *((_DWORD *)this + 188) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_WORD *)this + 392) = 0;
  *((_BYTE *)this + 786) = 0;
  return this;
}
