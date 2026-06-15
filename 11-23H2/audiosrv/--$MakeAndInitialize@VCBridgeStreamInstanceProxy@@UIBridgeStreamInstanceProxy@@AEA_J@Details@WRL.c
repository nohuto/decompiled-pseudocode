/*
 * XREFs of ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@AEA_J@Z @ 0x1800D78F8
 * Callers:
 *     _lambda_9908ef596f629d302acb4d2b2b826918_::operator() @ 0x18006B5C0 (_lambda_9908ef596f629d302acb4d2b2b826918_--operator().c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8CE4 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18004AFF0 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CBridgeStreamInstanceProxy@@QEAA@XZ @ 0x1800D8488 (--0CBridgeStreamInstanceProxy@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeStreamInstanceProxy,IBridgeStreamInstanceProxy,__int64 &>(
        _QWORD *a1,
        __int64 *a2)
{
  void *v4; // rax
  int v5; // ebx
  CStreamInstanceProxyImpl *v6; // rdi
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CStreamInstanceProxyImpl *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = CBridgeStreamInstanceProxy::CBridgeStreamInstanceProxy((CBridgeStreamInstanceProxy *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = CStreamInstanceProxyImpl::Initialize(v6, *a2);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(CStreamInstanceProxyImpl *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_27a10493_380f_4ad8_8126_77aefd2f3c32,
             a1);
      (*(void (__fastcall **)(CStreamInstanceProxyImpl *))(*(_QWORD *)v6 + 16LL))(v6);
      return (unsigned int)v5;
    }
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v9);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v8);
  return (unsigned int)v5;
}
