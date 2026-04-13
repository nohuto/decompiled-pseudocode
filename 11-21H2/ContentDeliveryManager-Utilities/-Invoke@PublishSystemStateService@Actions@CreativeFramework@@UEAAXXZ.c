/*
 * XREFs of ?Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CE550
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::PublishSystemStateService::Invoke(
        CreativeFramework::Actions::PublishSystemStateService *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, _QWORD, __int64); // r14
  __int64 v9; // rsi
  unsigned int v10; // ebp
  const WCHAR *v11; // rax
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-50h] BYREF
  const WCHAR *v17; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v18; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v16, a2, a3);
  v15 = 0LL;
  v4 = *v16;
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 104))(v16, &v15);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      37LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v5,
      v14);
  v7 = v15;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64))(*(_QWORD *)v15 + 48LL);
  v9 = *((_QWORD *)this + 5);
  v10 = *((_DWORD *)this + 12);
  v11 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v11 = *(const WCHAR **)v11;
  v17 = v11;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v17, v6);
  v13 = v8(v7, v12[1].Reserved.Reserved1, v10, v9);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      38LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v13,
      v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
}
