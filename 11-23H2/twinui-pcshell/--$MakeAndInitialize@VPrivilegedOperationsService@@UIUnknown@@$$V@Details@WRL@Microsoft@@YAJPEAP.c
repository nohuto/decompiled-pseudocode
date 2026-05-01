/*
 * XREFs of ??$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18012D83C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18012D7C0 (-CreateInstance@-$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??0PrivilegedOperationsService@@QEAA@XZ @ 0x18012D8EC (--0PrivilegedOperationsService@@QEAA@XZ.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012DC4C (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180163FE0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_180163FE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180168DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180168DD0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PrivilegedOperationsService,IUnknown,>(_QWORD *a1)
{
  PrivilegedOperationsService *v2; // rax
  struct PrivilegedOperationsService *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = (PrivilegedOperationsService *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = PrivilegedOperationsService::PrivilegedOperationsService(v2);
    PrivilegedOperationsService::s_this = v3;
    v4 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
           (char *)v3 + 168,
           v3);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A8,
        (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v4,
        v7);
    else
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>>(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
