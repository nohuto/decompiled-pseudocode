/*
 * XREFs of ??$MakeAndInitialize@VVirtualTouchpadUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1804FE5EC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804FEC90 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804FE2D8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteComm.c)
 *     ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x1804FE91C (--0VirtualTouchpadUriHandler@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804FF5E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1804FF5E0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualTouchpadUriHandler,IUnknown,>(_QWORD *a1)
{
  VirtualTouchpadUriHandler *v2; // rax
  unsigned int v3; // ebx
  VirtualTouchpadUriHandler *v4; // rdi

  *a1 = 0LL;
  v2 = (VirtualTouchpadUriHandler *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = VirtualTouchpadUriHandler::VirtualTouchpadUriHandler(v2);
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>>(
           (__int64)v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
