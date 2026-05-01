/*
 * XREFs of ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18002F464
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F3D0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F554 (--4-$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18002F584 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessNameByPID(struct _RTL_CRITICAL_SECTION *this, DWORD a2, wchar_t **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rbx
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  int ProcessImageInfoByPID; // edi
  unsigned __int64 v12; // rax
  wchar_t *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  wchar_t *v16; // rdi
  wchar_t *v17; // rcx
  int v18; // [rsp+20h] [rbp-38h]
  unsigned int *v19; // [rsp+28h] [rbp-30h]
  unsigned int *v20; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL,
      v18);
    return 2147500035LL;
  }
  v23 = 0LL;
  v6 = this + 19;
  EnterCriticalSection(this + 19);
  Microsoft::WRL::ComPtr<KnownGameList::IQueryHelper>::operator=(&v23, &this[18].SpinCount);
  if ( v6 )
    LeaveCriticalSection(v6);
  v7 = v23;
  if ( v23 )
  {
    ProcessImageInfoByPID = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v23 + 24LL))(
                              v23,
                              a2,
                              0LL,
                              &v22);
    if ( ProcessImageInfoByPID < 0 )
      goto LABEL_9;
    v12 = 2LL * v22;
    if ( !is_mul_ok(v22, 2uLL) )
      v12 = -1LL;
    v13 = (wchar_t *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v13;
    if ( v13 )
    {
      ProcessImageInfoByPID = (*(__int64 (__fastcall **)(__int64, _QWORD, wchar_t *, unsigned int *))(*(_QWORD *)v7 + 24LL))(
                                v7,
                                a2,
                                v13,
                                &v22);
      if ( ProcessImageInfoByPID >= 0 )
        goto LABEL_8;
    }
    else
    {
      ProcessImageInfoByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x375,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL,
        v18);
    }
    if ( !v9 )
      goto LABEL_9;
LABEL_30:
    operator delete[](v9);
    goto LABEL_9;
  }
  v22 = 260;
  v8 = (wchar_t *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v14 = 898LL;
LABEL_27:
    ProcessImageInfoByPID = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000ELL,
      v18);
    goto LABEL_9;
  }
  ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v8, (unsigned __int16 *)&v22, 0LL, 0LL, v19);
  if ( ProcessImageInfoByPID != -2147024774 )
    goto LABEL_7;
  v15 = 2LL * v22;
  if ( !is_mul_ok(v22, 2uLL) )
    v15 = -1LL;
  v16 = (wchar_t *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v9;
  v9 = v16;
  operator delete[](v17);
  if ( !v16 )
  {
    v14 = 904LL;
    goto LABEL_27;
  }
  ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v16, (unsigned __int16 *)&v22, 0LL, 0LL, v20);
LABEL_7:
  if ( ProcessImageInfoByPID < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38C,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)ProcessImageInfoByPID,
      v18);
    goto LABEL_30;
  }
LABEL_8:
  *a3 = v9;
  ProcessImageInfoByPID = 0;
LABEL_9:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ProcessImageInfoByPID;
}
