/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C5E7C
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C5E70 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180075FF0 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C26A0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUri(void **this, __int64 a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // r15
  void **v10; // rax
  unsigned int v11; // r8d
  PVOID Reserved1; // r14
  _QWORD *v13; // rax
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, void *, _QWORD); // r13
  unsigned int v19; // r15d
  void *v20; // r12
  const WCHAR *v21; // r14
  char *v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // r8d
  HSTRING_HEADER *v25; // rax
  HSTRING_HEADER *v26; // rax
  int v27; // eax
  unsigned int v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  UINT32 applicationUserModelIdLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  void *v34[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h]
  unsigned __int64 v36; // [rsp+78h] [rbp-90h]
  HSTRING_HEADER v37; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-70h]
  HSTRING_HEADER v39; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-50h]
  WCHAR applicationUserModelId[136]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v33, a2, a3);
  v31 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 88LL))(v33, &v31);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      115LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v4,
      v28);
  v6 = 7LL;
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(v34[0]) = 0;
  v7 = -1LL;
  if ( *((_BYTE *)this + 113) && v34 != this + 5 )
  {
    std::wstring::assign(v34, this + 5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v6 = v36;
  }
  v32 = 0LL;
  v8 = v31;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v31 + 48LL);
  v32 = 0LL;
  v10 = v34;
  if ( v6 >= 8 )
    v10 = (void **)v34[0];
  *(_QWORD *)applicationUserModelIdLength = v10;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &v39,
                (const WCHAR **)applicationUserModelIdLength,
                v5)[1].Reserved.Reserved1;
  v13 = this + 1;
  if ( (unsigned __int64)this[4] >= 8 )
    v13 = (_QWORD *)*v13;
  *(_QWORD *)applicationUserModelIdLength = v13;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v37,
          (const WCHAR **)applicationUserModelIdLength,
          v11);
  v15 = v9(v8, v14[1].Reserved.Reserved1, Reserved1, &v32);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      124LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v15,
      v28);
  wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(&v29, v32, v16);
  if ( *((_BYTE *)this + 112) )
  {
    v17 = v31;
    v18 = *(__int64 (__fastcall **)(__int64, PVOID, void *, _QWORD))(*(_QWORD *)v31 + 56LL);
    v19 = *((_DWORD *)this + 29);
    v20 = this[13];
    v21 = (const WCHAR *)(this + 9);
    if ( (unsigned __int64)this[12] >= 8 )
      v21 = *(const WCHAR **)v21;
    v22 = (char *)(this + 5);
    if ( *((_QWORD *)v22 + 3) >= 8uLL )
      v22 = *(char **)v22;
    memset_0(applicationUserModelId, 0, 0x104uLL);
    applicationUserModelIdLength[0] = 130;
    v23 = FormatApplicationUserModelId((PCWSTR)v22, v21, applicationUserModelIdLength, applicationUserModelId);
    if ( v23 )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        140LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)v23,
        v28);
    v38 = 7LL;
    *(_QWORD *)&v37.Reserved.Reserved2[16] = 0LL;
    LOWORD(v37.Reserved.Reserved1) = 0;
    if ( applicationUserModelId[0] )
    {
      do
        ++v7;
      while ( applicationUserModelId[v7] );
    }
    else
    {
      v7 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)&v37, (char *)applicationUserModelId, v7);
    v25 = &v37;
    if ( v38 >= 8 )
      v25 = (HSTRING_HEADER *)v37.Reserved.Reserved1;
    *(_QWORD *)applicationUserModelIdLength = v25;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v39,
            (const WCHAR **)applicationUserModelIdLength,
            v24);
    v27 = v18(v17, v26[1].Reserved.Reserved1, v20, v19);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)(unsigned int)v27);
    v40 = 0LL;
    if ( v38 >= 8 )
      operator delete(v37.Reserved.Reserved1);
  }
  if ( v32 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v32)[2])(v32);
  if ( v36 >= 8 )
    operator delete(v34[0]);
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(v34[0]) = 0;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
}
