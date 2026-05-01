/*
 * XREFs of ??$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801747B4
 * Callers:
 *     ?GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180174780 (-GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIIn.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005DEE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800FED60 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x180100170 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ?Release@MiniSearchExperienceManager@@UEAAKXZ @ 0x180141F80 (-Release@MiniSearchExperienceManager@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CShoulderTapExperienceManager,IInspectable,IServiceProvider * &>(
        CShoulderTapExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CShoulderTapExperienceManager *v4; // rax
  CShoulderTapExperienceManager *v5; // rbx
  int CanCastTo; // edi
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v11; // r9

  *a1 = 0LL;
  v4 = (CShoulderTapExperienceManager *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = CShoulderTapExperienceManager::CShoulderTapExperienceManager(v4);
  CanCastTo = CShoulderTapExperienceManager::RuntimeClassInitialize(v5, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, v8) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(CShoulderTapExperienceManager *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
      goto LABEL_6;
    }
    if ( InlineIsEqualGUID(v9, &GUID_8667db0d_6960_465f_b9a4_c461863efa91) )
    {
      *a1 = v5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                    (__int64)v5 + 8,
                    v11,
                    a1);
      if ( CanCastTo < 0 )
        goto LABEL_6;
    }
    (*(void (__fastcall **)(CShoulderTapExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_6:
  if ( v5 )
    MiniSearchExperienceManager::Release(v5);
  return (unsigned int)CanCastTo;
}
