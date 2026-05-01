/*
 * XREFs of ??$MakeAndInitialize@VPCShellImmersiveComponentCreator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014229C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPCShellImmersiveComponentCreator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180142220 (-CreateInstance@-$SimpleClassFactory@VPCShellImmersiveComponentCreator@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EDE80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??0PCShellImmersiveComponentCreator@@QEAA@XZ @ 0x180142380 (--0PCShellImmersiveComponentCreator@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PCShellImmersiveComponentCreator,IUnknown,>(void **a1)
{
  PCShellImmersiveComponentCreator *v2; // rax
  PCShellImmersiveComponentCreator *v3; // rbx
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  const struct _GUID *v6; // r9
  unsigned int v7; // edi
  volatile int *v8; // rdx
  int CanCastTo; // eax

  *a1 = 0LL;
  v2 = (PCShellImmersiveComponentCreator *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = PCShellImmersiveComponentCreator::PCShellImmersiveComponentCreator(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v3;
    (*(void (__fastcall **)(PCShellImmersiveComponentCreator *))(*(_QWORD *)v3 + 8LL))(v3);
    v7 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, &GUID_17f0c53d_fae4_44a6_9dc6_ff79f1b092c1)
      || InlineIsEqualGUID(v5, &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8) )
    {
      *a1 = v3;
      v7 = 0;
LABEL_6:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((PCShellImmersiveComponentCreator *)((char *)v3 + 8), v6, a1);
    v7 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v7 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_6;
    }
  }
LABEL_7:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
      (__int64)v3,
      v8);
  return v7;
}
