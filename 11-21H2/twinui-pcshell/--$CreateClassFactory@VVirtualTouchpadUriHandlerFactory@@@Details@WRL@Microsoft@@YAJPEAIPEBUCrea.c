/*
 * XREFs of ??$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180448640
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsIID@V?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$05@Details@WRL@Microsoft@@KAJPEAV?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@23@AEBU_GUID@@PEAPEAX@Z @ 0x1801136F4 (--$AsIID@V-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@-$RuntimeC.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18012C7A0 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x18044888C (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<VirtualTouchpadUriHandlerFactory>(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<VirtualTouchpadUriHandlerFactory,VirtualTouchpadUriHandlerFactory,>(v12);
  v8 = v12[0];
  v9 = v7;
  if ( v7 >= 0 )
  {
    *(_DWORD *)(v12[0] + 20) = *a1;
    v10 = Microsoft::WRL::Details::RuntimeClassBaseT<6>::AsIID<Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>>(
            v8,
            a3,
            a4);
    v9 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
      {
        *(_DWORD *)(v8 + 20) &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v8 = 0LL;
      }
    }
  }
  if ( v8 )
    Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v8);
  return v9;
}
