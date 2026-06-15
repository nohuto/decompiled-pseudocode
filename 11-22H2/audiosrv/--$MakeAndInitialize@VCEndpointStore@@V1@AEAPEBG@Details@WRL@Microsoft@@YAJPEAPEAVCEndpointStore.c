/*
 * XREFs of ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x180027310
 * Callers:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0CEndpointStore@@QEAA@XZ @ 0x1800273AC (--0CEndpointStore@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180027660 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCEndpointStore@@@WRL@Microsoft@@QEAA@XZ @ 0x18010EF0C (--1-$ComPtr@VCEndpointStore@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointStore,CEndpointStore,unsigned short const * &>(
        CEndpointStore **a1,
        const unsigned __int16 **a2)
{
  CEndpointStore *v4; // rax
  CEndpointStore *v5; // rbx
  volatile int *v6; // rdx
  int v7; // edi
  CEndpointStore *v9; // [rsp+30h] [rbp+8h] BYREF
  CEndpointStore *v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CEndpointStore *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
  {
    v7 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v9);
    return (unsigned int)v7;
  }
  v5 = CEndpointStore::CEndpointStore(v4);
  v10 = v5;
  v9 = 0LL;
  v7 = CEndpointStore::RuntimeClassInitialize(v5, *a2);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<CEndpointStore>::~ComPtr<CEndpointStore>(&v10);
    goto LABEL_10;
  }
  if ( v5 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CEndpointStore *)((char *)v5 + 12), v6);
  *a1 = v5;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v5);
  return 0LL;
}
