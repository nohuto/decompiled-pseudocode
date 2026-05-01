/*
 * XREFs of ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1804FE6E0
 * Callers:
 *     ??$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1804FE480 (--$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 * Callees:
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801642D0 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ?AddRef@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180164550 (-AddRef@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x1804FE9C0 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1804FEBE8 (-Attach@-$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriH.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualTouchpadUriHandlerFactory,VirtualTouchpadUriHandlerFactory,>(
        __int64 *a1)
{
  unsigned int v1; // edi
  VirtualTouchpadUriHandlerFactory *v3; // rax
  VirtualTouchpadUriHandlerFactory *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = (VirtualTouchpadUriHandlerFactory *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = VirtualTouchpadUriHandlerFactory::VirtualTouchpadUriHandlerFactory(v3);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<VirtualTouchpadUriHandlerFactory>::Attach(&v8, v4);
    v6 = v8;
    if ( v8 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(v8);
    *a1 = v6;
    if ( v6 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v6,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
