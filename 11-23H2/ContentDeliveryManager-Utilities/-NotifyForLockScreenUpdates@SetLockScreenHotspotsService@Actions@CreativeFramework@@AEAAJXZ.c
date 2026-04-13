/*
 * XREFs of ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800BB698
 * Callers:
 *     ?Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BAF40 (-Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A8F7C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800A8F7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64 *); // rdi
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, _QWORD, void *); // rbp
  void *v10; // rsi
  DWORD LengthSid; // edi
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v18; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16 = 0LL;
  v2 = wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v17);
  v3 = *v2;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 104LL);
  v16 = 0LL;
  v5 = v4(v3, &v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v17);
  if ( v5 >= 0 )
  {
    v8 = v16;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, void *))(*(_QWORD *)v16 + 48LL);
    v10 = (void *)*((_QWORD *)this + 1);
    LengthSid = GetLengthSid(v10);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)off_1800FE410, v12);
    v14 = v9(v8, v13[1].Reserved.Reserved1, LengthSid, v10);
    v5 = v14;
    if ( v14 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = (unsigned int)v14;
    v7 = 141LL;
  }
  else
  {
    v6 = (unsigned int)v5;
    v7 = 140LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
    (const char *)v6);
LABEL_7:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v16);
  return (unsigned int)v5;
}
