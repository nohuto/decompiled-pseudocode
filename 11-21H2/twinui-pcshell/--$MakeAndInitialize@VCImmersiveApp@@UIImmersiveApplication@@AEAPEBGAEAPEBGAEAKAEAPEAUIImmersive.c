/*
 * XREFs of ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x1800EF2B0
 * Callers:
 *     ?s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EF9B4 (-s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEA.c)
 * Callees:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18006E200 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x1800EF3DC (--0CImmersiveApp@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3,
        int *a4,
        struct IImmersiveMonitor **a5,
        struct PER_APPLICATION_DATA **a6,
        struct IIAMServiceProvider **a7,
        unsigned __int64 *a8)
{
  CImmersiveApp *v12; // rax
  CImmersiveApp *v13; // rbx
  int v14; // esi

  *a1 = 0LL;
  v12 = (CImmersiveApp *)operator new(0x3A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = CImmersiveApp::CImmersiveApp(v12);
    v14 = CImmersiveApp::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
    if ( v14 >= 0 )
      v14 = (**(__int64 (__fastcall ***)(CImmersiveApp *, GUID *, _QWORD *))v13)(
              v13,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              a1);
    if ( v13 )
      (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
