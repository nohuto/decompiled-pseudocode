/*
 * XREFs of ??$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18059E05C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18059E190 (-CreateInstance@-$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180497960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180497960.c)
 *     ??0CApplicationViewBroker@@QEAA@XZ @ 0x18059E128 (--0CApplicationViewBroker@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationViewBroker,IUnknown,>(
        CApplicationViewBroker **a1)
{
  CApplicationViewBroker *v2; // rax
  unsigned int v3; // edi
  CApplicationViewBroker *v4; // rbx
  _DWORD *v5; // rcx
  volatile int *v6; // rdx

  *a1 = 0LL;
  v2 = (CApplicationViewBroker *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CApplicationViewBroker::CApplicationViewBroker(v2);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v4;
      (*(void (__fastcall **)(CApplicationViewBroker *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = 0;
    }
    else if ( InlineIsEqualGUID(v5, &GUID_d4351e8c_208e_4c24_88ac_6e2add5f4bb1) )
    {
      *a1 = v4;
      v3 = 0;
      (*(void (__fastcall **)(CApplicationViewBroker *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v3 = -2147467262;
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
        (__int64)v4,
        v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
