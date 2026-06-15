/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEBU_tlgProvider_t@@@Z @ 0x180059734
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x1800598AC (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &,_tlgProvider_t const * &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  CEndpointCharacteristicsCache *v5; // rax
  CEndpointCharacteristicsCache *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // edi

  g_pEndpointCharacteristicsCache = 0LL;
  v5 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v5);
    v7 = *a3;
    v8 = *a2;
    v9 = g_policyConfigInternal;
    g_policyConfigInternal = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)v6 + 13) = v7;
    v10 = (**(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, PVOID *))v6)(
            v6,
            &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
            &g_pEndpointCharacteristicsCache);
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
