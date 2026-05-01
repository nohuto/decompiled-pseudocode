/*
 * XREFs of ??$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015B73C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18015B6C0 (-CreateInstance@-$SimpleClassFactory@VJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExper.c)
 *     ??0JumpViewExperienceManagerFactory@@QEAA@XZ @ 0x18015B80C (--0JumpViewExperienceManagerFactory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JumpViewExperienceManagerFactory,IUnknown,>(void **a1)
{
  JumpViewExperienceManagerFactory *v2; // rax
  JumpViewExperienceManagerFactory *v3; // rdi
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  unsigned int v6; // ebx
  volatile int *v7; // rdx
  __int64 v9; // r8
  const struct _GUID *v10; // r9
  int CanCastTo; // eax

  *a1 = 0LL;
  v2 = (JumpViewExperienceManagerFactory *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = JumpViewExperienceManagerFactory::JumpViewExperienceManagerFactory(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v3;
    (*(void (__fastcall **)(JumpViewExperienceManagerFactory *))(*(_QWORD *)v3 + 8LL))(v3);
    v6 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, &GUID_18368aef_0ed2_4f7a_94a5_20e6988c5224) )
    {
      *a1 = v3;
LABEL_5:
      v6 = 0;
LABEL_6:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_7;
    }
    if ( InlineIsEqualGUID(v5, &GUID_6114579d_0b09_4fb0_8b9d_a7e30b3fcde8) )
    {
      *a1 = (void *)v9;
      goto LABEL_5;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v9 + 8), v10, a1);
    v6 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v6 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_6;
    }
  }
LABEL_7:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
      (__int64)v3,
      v7);
  return v6;
}
