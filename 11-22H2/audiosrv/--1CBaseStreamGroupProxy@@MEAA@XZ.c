/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x1800111AC
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18001864C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x180105420 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@QEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x1800126A0 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x180046090 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180047644 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?_Tidy@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXXZ @ 0x18004A8FC (-_Tidy@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  __int64 v10; // rdx

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_QWORD *)this + 1) = &CBaseStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v10 = *((_QWORD *)this + 9);
    if ( v10 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v10 + 56));
  }
  v3 = *((_QWORD *)this + 37);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD, CBaseStreamGroupProxy *))(*(_QWORD *)v3 + 80LL))(
      v3,
      *((unsigned int *)this + 76),
      this);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((char *)this + 296);
  v4 = (void *)*((_QWORD *)this + 36);
  if ( v4 )
    CoTaskMemFree(v4);
  std::vector<_GUID>::_Tidy((char *)this + 264);
  v5 = *((_QWORD *)this + 30);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
      v5,
      *((_QWORD *)this + 31));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 30),
      (*((_QWORD *)this + 32) - *((_QWORD *)this + 30)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
  }
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>>(v6, *((_QWORD *)this + 28));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 27),
      (*((_QWORD *)this + 29) - *((_QWORD *)this + 27)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 26) - v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((char *)this + 88);
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
      &v9[1],
      &v9[1],
      v9[1].DebugInfo->CriticalSection);
    std::_Deallocate<16,0>(v9[1].DebugInfo, 40LL);
    DeleteCriticalSection(v9);
    operator delete(v9, 0x40uLL);
  }
  *((_QWORD *)this + 9) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
}
