/*
 * XREFs of ??$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019468C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCImmersiveShellBuilder@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180194610 (-CreateInstance@-$SimpleClassFactory@VCImmersiveShellBuilder@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustm.c)
 *     ??0CImmersiveShellBuilder@@QEAA@XZ @ 0x18019475C (--0CImmersiveShellBuilder@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CImmersiveShellBuilder,IUnknown,>(
        CImmersiveShellBuilder **a1)
{
  CImmersiveShellBuilder *v2; // rax
  CImmersiveShellBuilder *v3; // rbx
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  CImmersiveShellBuilder *v6; // rcx
  CImmersiveShellBuilder *v7; // r8
  unsigned int v8; // edi
  volatile int *v9; // rdx

  *a1 = 0LL;
  v2 = (CImmersiveShellBuilder *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = CImmersiveShellBuilder::CImmersiveShellBuilder(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v3;
    (*(void (__fastcall **)(CImmersiveShellBuilder *))(*(_QWORD *)v3 + 8LL))(v3);
    v8 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, &GUID_1c56b3e4_e6ea_4ced_8a74_73b72c6bd435) )
    {
      v6 = v3;
      v7 = v3;
LABEL_5:
      v8 = 0;
      *a1 = v7;
      (*(void (__fastcall **)(CImmersiveShellBuilder *))(*(_QWORD *)v6 + 8LL))(v6);
      goto LABEL_6;
    }
    if ( InlineIsEqualGUID(v5, &GUID_2eb59b15_1487_40ce_916e_ef65330dd224) )
    {
      v6 = v7;
      goto LABEL_5;
    }
    v8 = -2147467262;
  }
LABEL_6:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::Release(
      (__int64)v3,
      v9);
  return v8;
}
