/*
 * XREFs of ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x180030AF0
 * Callers:
 *     ?get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x180049F30 (-get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x18004ADE0 (-put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CloudExperienceHostCreateOOBEUserObject(const struct _GUID *a1, const struct _GUID *a2, void **a3)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rcx
  int v8; // eax
  LPVOID v9; // rcx
  LPVOID v10; // rcx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v4 = CoCreateInstance(
         &GUID_e9309678_18b4_414b_ba7a_2c9a7bcf9684,
         0LL,
         1u,
         &GUID_ef2e1c05_9173_433a_baa2_ada0c25d0b99,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\cloudexperiencehostcreatebrokeredobjecthelpers.h",
      (const char *)(unsigned int)v4,
      v11);
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
  v8 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, void **))(*(_QWORD *)v13 + 32LL))(
         v13,
         &GUID_9cb89eff_b39e_4d5c_a493_f2171580cc21,
         &GUID_401c0441_9dd0_494f_bc60_c53a4a7b9b38,
         a3);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\cloudexperiencehostcreatebrokeredobjecthelpers.h",
      (const char *)(unsigned int)v8,
      v11);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v5;
  }
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
