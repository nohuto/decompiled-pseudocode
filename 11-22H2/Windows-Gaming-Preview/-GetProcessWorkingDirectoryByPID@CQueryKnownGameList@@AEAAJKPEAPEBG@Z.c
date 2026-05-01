/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18004826C
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800474C4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180045D58 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        unsigned int **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ULONG_PTR SpinCount; // rdi
  int ProcessWorkingDirectoryByPID; // esi
  unsigned __int64 v11; // rax
  unsigned int *v12; // rax
  unsigned int *v13; // rdi
  unsigned int *v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int *v18; // rsi
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v21; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v22; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BF,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v22 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v22 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !v7 )
  {
    v21 = 260;
    v13 = 0LL;
    v14 = (unsigned int *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
    {
      operator delete[](0LL);
      v13 = v14;
      ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(a2, v15, v14, (unsigned __int16 *)&v21);
      if ( ProcessWorkingDirectoryByPID == -2147024774 )
      {
        v16 = 2LL * v21;
        if ( !is_mul_ok(v21, 2uLL) )
          v16 = -1LL;
        v18 = (unsigned int *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
        if ( v18 != v14 )
        {
          operator delete[](v14);
          v13 = v18;
          v14 = v18;
          if ( !v18 )
          {
            v19 = 996LL;
LABEL_28:
            ProcessWorkingDirectoryByPID = -2147024882;
            goto LABEL_29;
          }
        }
        ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(a2, v17, v13, (unsigned __int16 *)&v21);
      }
      if ( ProcessWorkingDirectoryByPID >= 0 )
      {
        *a3 = v14;
LABEL_26:
        operator delete[](0LL);
        ProcessWorkingDirectoryByPID = 0;
        goto LABEL_31;
      }
      v19 = 1002LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
      goto LABEL_30;
    }
    v19 = 988LL;
    goto LABEL_28;
  }
  ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
                                   v7,
                                   a2,
                                   0LL,
                                   &v21);
  if ( ProcessWorkingDirectoryByPID >= 0 )
  {
    v11 = 2LL * v21;
    if ( !is_mul_ok(v21, 2uLL) )
      v11 = -1LL;
    v12 = (unsigned int *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CF,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
LABEL_30:
      operator delete[](v13);
      goto LABEL_31;
    }
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v7 + 40LL))(
                                     v7,
                                     a2,
                                     v12,
                                     &v21);
    if ( ProcessWorkingDirectoryByPID < 0 )
      goto LABEL_30;
    *a3 = v13;
    goto LABEL_26;
  }
LABEL_31:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
