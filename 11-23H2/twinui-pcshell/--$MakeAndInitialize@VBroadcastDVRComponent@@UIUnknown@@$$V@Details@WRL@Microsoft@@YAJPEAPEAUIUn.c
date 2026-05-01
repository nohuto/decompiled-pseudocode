/*
 * XREFs of ??$MakeAndInitialize@VBroadcastDVRComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801088B8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180109D30 (-CreateInstance@-$SimpleClassFactory@VBroadcastDVRComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ??0BroadcastDVRComponent@@QEAA@XZ @ 0x180108E30 (--0BroadcastDVRComponent@@QEAA@XZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BroadcastDVRComponent,IUnknown,>(_QWORD *a1)
{
  BroadcastDVRComponent *v2; // rax
  BroadcastDVRComponent *v3; // rdi
  int v4; // eax
  unsigned int v5; // esi
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = (BroadcastDVRComponent *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = BroadcastDVRComponent::BroadcastDVRComponent(v2);
    v4 = CImmersiveShellComponent::RegisterServiceInformation(
           (BroadcastDVRComponent *)((char *)v3 + 56),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&unk_180815DB0,
           2u);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v4,
        v7);
    else
      v5 = (**(__int64 (__fastcall ***)(BroadcastDVRComponent *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
