/*
 * XREFs of ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800303F4
 * Callers:
 *     ?TryPinYourPhoneAppToTaskbar@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x1800419B0 (-TryPinYourPhoneAppToTaskbar@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?get_HasPreviouslyPaired@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x1800441E0 (-get_HasPreviouslyPaired@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x1800445B0 (-get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?get_PairingContext@MobilityExperienceSettings@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180044640 (-get_PairingContext@MobilityExperienceSettings@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?get_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x1800446D0 (-get_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?get_SilentPairingContractVersion@MobilityExperienceSettings@ContentManagement@@UEAAJPEAK@Z @ 0x180044830 (-get_SilentPairingContractVersion@MobilityExperienceSettings@ContentManagement@@UEAAJPEAK@Z.c)
 *     ?put_HasPreviouslyPaired@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180044E90 (-put_HasPreviouslyPaired@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 *     ?put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180045070 (-put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 *     ?put_PairingContext@MobilityExperienceSettings@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180045150 (-put_PairingContext@MobilityExperienceSettings@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x1800451E0 (-put_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 *     ?put_SilentPairingContractVersion@MobilityExperienceSettings@ContentManagement@@UEAAJK@Z @ 0x1800452A0 (-put_SilentPairingContractVersion@MobilityExperienceSettings@ContentManagement@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloudExperienceHostCreateOOBEUserObject(const struct _GUID *a1, const struct _GUID *a2, void **a3)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v4 = CoCreateInstance(
         &GUID_e9309678_18b4_414b_ba7a_2c9a7bcf9684,
         0LL,
         1u,
         &GUID_ef2e1c05_9173_433a_baa2_ada0c25d0b99,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, void **))(*(_QWORD *)v10 + 32LL))(
           v10,
           &GUID_9cb89eff_b39e_4d5c_a493_f2171580cc21,
           &GUID_544fda9d_7c63_4e7b_8600_0f884e6f5955,
           a3);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 32LL;
  }
  else
  {
    v6 = 31LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\cloudexperiencehostcreatebrokeredobjecthelpers.h",
    (const char *)(unsigned int)v4,
    ppv);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v5;
}
