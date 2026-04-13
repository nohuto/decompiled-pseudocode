/*
 * XREFs of ?put_HasPreviouslyPaired@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180044EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800303F4 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_HasPreviouslyPaired(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  char v2; // di
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char)a2;
  v9 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v9);
  v5 = v3;
  if ( v3 >= 0 )
  {
    LOBYTE(v4) = v2;
    v3 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v9 + 56LL))(v9, v4);
    v5 = v3;
    if ( v3 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 744LL;
  }
  else
  {
    v6 = 743LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v9);
  return v5;
}
