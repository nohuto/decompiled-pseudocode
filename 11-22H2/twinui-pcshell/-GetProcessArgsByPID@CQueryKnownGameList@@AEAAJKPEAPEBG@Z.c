/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18073FE4C
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F554 (--4-$ComPtr@UIQueryHelper@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18074006C (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessArgsByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        unsigned __int16 **a3)
{
  __int64 v7; // rbx
  int v8; // edi
  size_t v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rsi
  unsigned __int16 *v12; // rax
  unsigned int *v13; // r9
  int ProcessArgsByPID; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v17 = 0LL;
  wil::EnterCriticalSection(&lpCriticalSection, this + 19);
  Microsoft::WRL::ComPtr<KnownGameList::IQueryHelper>::operator=(&v17, (__int64 *)&this[18].SpinCount);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v7 = v17;
  if ( !v17 )
  {
    LODWORD(lpCriticalSection) = 4096;
    v12 = (unsigned __int16 *)operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v12;
    if ( !v12 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_15;
    }
    ProcessArgsByPID = Common::GetProcessArgsByPID(a2, v12, (unsigned __int16 *)&lpCriticalSection, v13);
    v8 = ProcessArgsByPID;
    if ( ProcessArgsByPID < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B5,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessArgsByPID);
LABEL_22:
      operator delete[](v11);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, LPCRITICAL_SECTION *))(*(_QWORD *)v17 + 32LL))(
         v17,
         a2,
         0LL,
         &lpCriticalSection);
  if ( v8 < 0 )
    goto LABEL_15;
  v9 = 2LL * (unsigned int)lpCriticalSection;
  if ( !is_mul_ok((unsigned int)lpCriticalSection, 2uLL) )
    v9 = -1LL;
  v10 = (unsigned __int16 *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A6,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 *, LPCRITICAL_SECTION *))(*(_QWORD *)v7 + 32LL))(
         v7,
         a2,
         v10,
         &lpCriticalSection);
  if ( v8 >= 0 )
  {
LABEL_14:
    *a3 = v11;
    v8 = 0;
    goto LABEL_15;
  }
LABEL_12:
  if ( v11 )
    goto LABEL_22;
LABEL_15:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v8;
}
