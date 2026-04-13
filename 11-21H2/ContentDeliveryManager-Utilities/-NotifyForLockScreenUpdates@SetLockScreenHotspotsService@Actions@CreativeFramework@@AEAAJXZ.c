/*
 * XREFs of ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800CFF78
 * Callers:
 *     ?Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CF670 (-Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this,
        __int64 a2,
        unsigned int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  unsigned int v7; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, _QWORD, void *); // rbp
  void *v11; // rsi
  DWORD LengthSid; // edi
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v18; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16 = 0LL;
  v4 = wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v17, a2, a3);
  v5 = *v4;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 104LL);
  v16 = 0LL;
  v7 = v6(v5, &v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( (v7 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)v7);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v7;
  }
  v9 = v16;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, void *))(*(_QWORD *)v16 + 48LL);
  v11 = (void *)*((_QWORD *)this + 1);
  LengthSid = GetLengthSid(v11);
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)off_18011A170, v13);
  v15 = v10(v9, v14[1].Reserved.Reserved1, LengthSid, v11);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v7;
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return 0LL;
}
