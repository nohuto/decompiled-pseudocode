/*
 * XREFs of ?SetYourPhonePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z @ 0x1800406D8
 * Callers:
 *     ?put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180045070 (-put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 *     ?put_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x1800451E0 (-put_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPackageManager@Deployment@Management@1@@Z @ 0x180024684 (--$ActivateInstance@UIPackageManager@Deployment@Management@Windows@@@Foundation@Windows@@YAJPEAU.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::SetYourPhonePackageStubPreference(
        ContentManagement::MobilityExperienceSettings *this,
        char a2)
{
  BOOL v2; // esi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, BOOL); // rdi
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = a2 == 0;
  v10 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Management.Deployment.PackageManager",
    0x2Du,
    0x2Cu);
  v3 = Windows::Foundation::ActivateInstance<Windows::Management::Deployment::IPackageManager>(v13, &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = **v11;
    v10 = 0LL;
    v3 = v6(v11, &GUID_1aa79035_cc71_4b2e_80a6_c7041d8579a7, &v10);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = v10;
      v8 = *(__int64 (__fastcall **)(__int64, __int64, BOOL))(*(_QWORD *)v10 + 88LL);
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Microsoft.YourPhone_8wekyb3d8bbwe",
        0x22u,
        0x21u);
      v3 = v8(v7, v13, v2);
      v4 = v3;
      if ( v3 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v5 = 808LL;
    }
    else
    {
      v5 = 807LL;
    }
  }
  else
  {
    v5 = 806LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v10);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v11);
  return v4;
}
