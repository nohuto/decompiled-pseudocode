/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@@Z @ 0x180043A30
 * Callers:
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180022E60 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 * Callees:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z @ 0x180045CF8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180055B34 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,_tlgProvider_t const * &>(
        CEndpointCharacteristics **a1,
        const unsigned __int16 **a2,
        const struct _tlgProvider_t **a3)
{
  CEndpointCharacteristics *v6; // rax
  CEndpointCharacteristics *v7; // rbx
  int v8; // esi

  *a1 = 0LL;
  v6 = (CEndpointCharacteristics *)operator new(0x2640uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CEndpointCharacteristics::CEndpointCharacteristics(v6);
    v8 = CEndpointCharacteristics::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    if ( v7 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
