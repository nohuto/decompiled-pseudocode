/*
 * XREFs of ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1804FE65C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804FED20 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     ??$AsIID@V?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$05@Details@WRL@Microsoft@@KAJPEAV?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@23@AEBU_GUID@@PEAPEAX@Z @ 0x1800857B4 (--$AsIID@V-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@-$RuntimeC.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801642D0 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x1804FE9C0 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1804FEBE8 (-Attach@-$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriH.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualTouchpadUriHandlerFactory,IUnknown,>(_QWORD *a1)
{
  VirtualTouchpadUriHandlerFactory *v2; // rax
  unsigned int v3; // edi
  VirtualTouchpadUriHandlerFactory *v4; // rax
  _QWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (VirtualTouchpadUriHandlerFactory *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = VirtualTouchpadUriHandlerFactory::VirtualTouchpadUriHandlerFactory(v2);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<VirtualTouchpadUriHandlerFactory>::Attach(&v9, v4);
    v5 = a1;
    v6 = v9;
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<6>::AsIID<Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>>(
           v9,
           (__int64)&GUID_00000000_0000_0000_c000_000000000046,
           v5);
    if ( v6 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v6,
        v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
