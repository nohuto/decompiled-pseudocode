/*
 * XREFs of ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18074024C
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F554 (--4-$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18002F584 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessParentDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        wchar_t **a3)
{
  __int64 v7; // rbx
  int ProcessImageInfoByPID; // edi
  size_t v9; // rax
  wchar_t *v10; // rax
  wchar_t *v11; // rsi
  __int64 v12; // rdx
  size_t v13; // rax
  wchar_t *v14; // rdi
  wchar_t *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F4,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v18 = 0LL;
  wil::EnterCriticalSection(&lpCriticalSection, this + 19);
  Microsoft::WRL::ComPtr<KnownGameList::IQueryHelper>::operator=(&v18, (__int64 *)&this[18].SpinCount);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v7 = v18;
  if ( !v18 )
  {
    LODWORD(lpCriticalSection) = 260;
    v11 = (wchar_t *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v11 )
    {
      v12 = 1041LL;
LABEL_25:
      ProcessImageInfoByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_15;
    }
    ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, 0LL, 0LL, v11, (unsigned __int16 *)&lpCriticalSection);
    if ( ProcessImageInfoByPID == -2147024774 )
    {
      v13 = 2LL * (unsigned int)lpCriticalSection;
      if ( !is_mul_ok((unsigned int)lpCriticalSection, 2uLL) )
        v13 = -1LL;
      v14 = (wchar_t *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
      v15 = v11;
      v11 = v14;
      operator delete[](v15);
      if ( !v14 )
      {
        v12 = 1048LL;
        goto LABEL_25;
      }
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(
                                a2,
                                0LL,
                                0LL,
                                v14,
                                (unsigned __int16 *)&lpCriticalSection);
    }
    if ( ProcessImageInfoByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41C,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
LABEL_29:
      operator delete[](v11);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  ProcessImageInfoByPID = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, LPCRITICAL_SECTION *))(*(_QWORD *)v18 + 48LL))(
                            v18,
                            a2,
                            0LL,
                            &lpCriticalSection);
  if ( ProcessImageInfoByPID < 0 )
    goto LABEL_15;
  v9 = 2LL * (unsigned int)lpCriticalSection;
  if ( !is_mul_ok((unsigned int)lpCriticalSection, 2uLL) )
    v9 = -1LL;
  v10 = (wchar_t *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    ProcessImageInfoByPID = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x404,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  ProcessImageInfoByPID = (*(__int64 (__fastcall **)(__int64, _QWORD, wchar_t *, LPCRITICAL_SECTION *))(*(_QWORD *)v7 + 48LL))(
                            v7,
                            a2,
                            v10,
                            &lpCriticalSection);
  if ( ProcessImageInfoByPID >= 0 )
  {
LABEL_14:
    *a3 = v11;
    ProcessImageInfoByPID = 0;
    goto LABEL_15;
  }
LABEL_12:
  if ( v11 )
    goto LABEL_29;
LABEL_15:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ProcessImageInfoByPID;
}
