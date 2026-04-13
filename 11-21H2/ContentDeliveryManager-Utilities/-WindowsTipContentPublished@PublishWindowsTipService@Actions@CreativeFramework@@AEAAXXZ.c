/*
 * XREFs of ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CE114
 * Callers:
 *     ?Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CDFF0 (-Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::PublishWindowsTipService::WindowsTipContentPublished(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  _WORD *v5; // rcx
  signed __int64 v6; // rdx
  __int16 v7; // ax
  _WORD *v8; // rax
  char *v9; // rcx
  _WORD *v10; // rdx
  signed __int64 v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, __int64, _BYTE *); // rdi
  HSTRING_HEADER *v19; // rax
  int v20; // eax
  int v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v24; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER v25; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v26[512]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v27[512]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+490h] [rbp+388h]

  v24 = L"WNF_SHEL_WINDOWSTIP_CONTENT_PUBLISHED";
  memset_0(v26, 0, 0x400uLL);
  v2 = (char *)this + 8;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v2 = *(char **)v2;
  v3 = 256LL;
  v4 = 256LL;
  v5 = v26;
  v6 = v2 - v26;
  do
  {
    if ( v4 == -2147483390 )
      break;
    v7 = *(_WORD *)((char *)v5 + v6);
    if ( !v7 )
      break;
    *v5++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = v5 - 1;
  if ( v4 )
    v8 = v5;
  *v8 = 0;
  if ( !v4 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x8007007ALL,
      v21);
  v9 = (char *)this + 40;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v9 = *(char **)v9;
  v10 = v27;
  v11 = v9 - v27;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v12 = *(_WORD *)((char *)v10 + v11);
    if ( !v12 )
      break;
    *v10++ = v12;
    --v3;
  }
  while ( v3 );
  v13 = v10 - 1;
  if ( v3 )
    v13 = v10;
  *v13 = 0;
  if ( !v3 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      37LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x8007007ALL,
      v21);
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v23, (__int64)v10, v3);
  v22 = 0LL;
  v14 = *v23;
  v22 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 104))(v23, &v22);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      41LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v15,
      v21);
  v17 = v22;
  v18 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v22 + 48LL);
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v24, v16);
  v20 = v18(v17, v19[1].Reserved.Reserved1, 1024LL, v26);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      42LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v20,
      v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
}
