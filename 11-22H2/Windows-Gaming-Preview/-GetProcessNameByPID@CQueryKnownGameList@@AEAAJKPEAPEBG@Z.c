/*
 * XREFs of ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180047D8C
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800467C0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180045A78 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CQueryKnownGameList::GetProcessNameByPID(struct _RTL_CRITICAL_SECTION *this, DWORD a2, char **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ULONG_PTR SpinCount; // rdi
  int ProcessImageInfoByPID; // esi
  unsigned __int64 v11; // rax
  char *v12; // rax
  char *v13; // rdi
  char *v14; // r14
  unsigned __int64 v15; // rax
  char *v16; // rsi
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v19; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v20; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v20 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v20 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !v7 )
  {
    v19 = 260;
    v13 = 0LL;
    v14 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
    {
      operator delete[](0LL);
      v13 = v14;
      ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v14, (unsigned __int16 *)&v19, 0LL, 0LL);
      if ( ProcessImageInfoByPID == -2147024774 )
      {
        v15 = 2LL * v19;
        if ( !is_mul_ok(v19, 2uLL) )
          v15 = -1LL;
        v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
        if ( v16 != v14 )
        {
          operator delete[](v14);
          v13 = v16;
          v14 = v16;
          if ( !v16 )
          {
            v17 = 904LL;
LABEL_28:
            ProcessImageInfoByPID = -2147024882;
            goto LABEL_29;
          }
        }
        ProcessImageInfoByPID = Common::GetProcessImageInfoByPID(a2, v13, (unsigned __int16 *)&v19, 0LL, 0LL);
      }
      if ( ProcessImageInfoByPID >= 0 )
      {
        *a3 = v14;
LABEL_26:
        operator delete[](0LL);
        ProcessImageInfoByPID = 0;
        goto LABEL_31;
      }
      v17 = 908LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessImageInfoByPID);
      goto LABEL_30;
    }
    v17 = 898LL;
    goto LABEL_28;
  }
  ProcessImageInfoByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 24LL))(
                            v7,
                            a2,
                            0LL,
                            &v19);
  if ( ProcessImageInfoByPID >= 0 )
  {
    v11 = 2LL * v19;
    if ( !is_mul_ok(v19, 2uLL) )
      v11 = -1LL;
    v12 = (char *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      ProcessImageInfoByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x375,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
LABEL_30:
      operator delete[](v13);
      goto LABEL_31;
    }
    ProcessImageInfoByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *, unsigned int *))(*(_QWORD *)v7 + 24LL))(
                              v7,
                              a2,
                              v12,
                              &v19);
    if ( ProcessImageInfoByPID < 0 )
      goto LABEL_30;
    *a3 = v13;
    goto LABEL_26;
  }
LABEL_31:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ProcessImageInfoByPID;
}
