/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x1800407BC
 * Callers:
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180038280 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 * Callees:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18004089C (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,_tlgProvider_t const * &,IEndpointResourceManagerProvider * &>(
        CEndpointCharacteristics **a1,
        const unsigned __int16 **a2,
        const struct _tlgProvider_t **a3,
        struct IEndpointResourceManagerProvider **a4)
{
  CEndpointCharacteristics *v8; // rax
  CEndpointCharacteristics *v9; // rbx
  int v10; // edi
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  CEndpointCharacteristics *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CEndpointCharacteristics *)operator new(0x2070uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v12[0] = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v13);
    return (unsigned int)v10;
  }
  v12[1] = v8;
  v9 = CEndpointCharacteristics::CEndpointCharacteristics(v8);
  v12[0] = v9;
  v13 = 0LL;
  v10 = CEndpointCharacteristics::RuntimeClassInitialize(v9, *a2, *a3, *a4);
  if ( v10 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(v12);
    goto LABEL_10;
  }
  if ( v9 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 8LL))(v9);
  *a1 = v9;
  if ( v9 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
