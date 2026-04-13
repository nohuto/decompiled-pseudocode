/*
 * XREFs of ?put_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180045230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800303F4 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetYourPhonePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z @ 0x1800406D8 (-SetYourPhonePackageStubPreference@MobilityExperienceSettings@ContentManagement@@QEAAJE@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F60 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_PhoneLinkEnabled(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  char v2; // di
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  ContentManagement::MobilityExperienceSettings *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char)a2;
  v11 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v11);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 829LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_10;
  }
  LOBYTE(v4) = v2;
  v3 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v11 + 104LL))(v11, v4);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 830LL;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v8 = ContentManagement::MobilityExperienceSettings::SetYourPhonePackageStubPreference(v7, v2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x344,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v8);
  }
  v5 = 0;
LABEL_10:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v11);
  return v5;
}
