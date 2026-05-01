/*
 * XREFs of ??$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008C744
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008C6D0 (-CreateInstance@-$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@UEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PenWorkspaceDiscoverBrokerFactory@@QEAA@XZ @ 0x18008C800 (--0PenWorkspaceDiscoverBrokerFactory@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWorkspaceDiscoverBroker@@@Z @ 0x18008C870 (--$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceDiscoverBrokerFactory,IUnknown,>(_QWORD *a1)
{
  PenWorkspaceDiscoverBrokerFactory *v2; // rax
  __int64 *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = (PenWorkspaceDiscoverBrokerFactory *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = (__int64 *)PenWorkspaceDiscoverBrokerFactory::PenWorkspaceDiscoverBrokerFactory(v2);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v3 + 3);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceDiscoverBroker,PenWorkspaceDiscoverBroker,>(v3 + 3);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v4,
        v7);
    else
      v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(__int64 *))(*v3 + 16))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
