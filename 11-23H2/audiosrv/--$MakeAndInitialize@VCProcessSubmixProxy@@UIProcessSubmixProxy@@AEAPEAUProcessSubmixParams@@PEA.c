/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x18000C1AC
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000BF30 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ??0CProcessSubmixProxy@@QEAA@XZ @ 0x18000C27C (--0CProcessSubmixProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18000C664 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixProxy,IProcessSubmixProxy,ProcessSubmixParams * &,PROCESS_SUBMIX_DESCRIPTOR *,IStreamGroupProxy *,unsigned long &>(
        _QWORD *a1,
        const struct ProcessSubmixParams **a2,
        struct PROCESS_SUBMIX_DESCRIPTOR **a3,
        struct IStreamGroupProxy **a4,
        CProcessSubmixProxy *a5)
{
  CProcessSubmixProxy *v9; // rax
  CProcessSubmixProxy *v10; // rdi
  int v11; // ebx
  char v13; // [rsp+20h] [rbp-28h]
  CProcessSubmixProxy *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CProcessSubmixProxy *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v14);
    return (unsigned int)v11;
  }
  v10 = CProcessSubmixProxy::CProcessSubmixProxy(v9);
  a5 = v10;
  v14 = 0LL;
  v11 = CProcessSubmixProxy::RuntimeClassInitialize(v10, *a2, *a3, *a4, v13);
  if ( v11 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&a5);
    goto LABEL_7;
  }
  v11 = (**(__int64 (__fastcall ***)(CProcessSubmixProxy *, GUID *, _QWORD *))v10)(
          v10,
          &GUID_3a5c2657_1b5f_474a_96ef_4cfdc4deeb2a,
          a1);
  (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v11;
}
