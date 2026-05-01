/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VPCShellImmersiveComponentCreator@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VPCShellImmersiveComponentCreator@@$0A@@12@@Z @ 0x18016AA58
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VPCShellImmersiveComponentCreator@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18016A9A0 (--$CreateClassFactory@V-$SimpleClassFactory@VPCShellImmersiveComponentCreator@@$0A@@WRL@Microsof.c)
 * Callees:
 *     ?AddRef@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18012E010 (-AddRef@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<PCShellImmersiveComponentCreator,0>,Microsoft::WRL::SimpleClassFactory<PCShellImmersiveComponentCreator,0>,>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v3[3] = 1;
    v3[5] = 4;
    *(_QWORD *)v3 = &Microsoft::WRL::SimpleClassFactory<PCShellImmersiveComponentCreator,0>::`vftable';
    Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef((__int64)v3);
    *a1 = v4;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
