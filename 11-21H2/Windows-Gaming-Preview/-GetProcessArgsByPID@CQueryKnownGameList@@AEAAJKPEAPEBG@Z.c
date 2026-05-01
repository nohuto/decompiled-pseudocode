/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180047218
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800466B4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x180044A00 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CQueryKnownGameList::GetProcessArgsByPID(struct _RTL_CRITICAL_SECTION *this, DWORD a2, char **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  ULONG_PTR SpinCount; // rdi
  int v10; // esi
  unsigned __int64 v11; // rax
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rbp
  unsigned int *v15; // r9
  int ProcessArgsByPID; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR v21; // [rsp+88h] [rbp+20h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v21 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    v7 = SpinCount;
    v21 = SpinCount;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !v7 )
  {
    v20 = 4096;
    v13 = 0LL;
    v14 = (char *)operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
    {
      operator delete[](0LL);
      v13 = v14;
      ProcessArgsByPID = Common::GetProcessArgsByPID(a2, v14, (unsigned __int16 *)&v20, v15);
      v10 = ProcessArgsByPID;
      if ( ProcessArgsByPID >= 0 )
      {
        *a3 = v14;
LABEL_19:
        operator delete[](0LL);
        v10 = 0;
        goto LABEL_23;
      }
      v17 = (unsigned int)ProcessArgsByPID;
      v18 = 949LL;
    }
    else
    {
      v10 = -2147024882;
      v17 = 2147942414LL;
      v18 = 946LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v17);
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 32LL))(v7, a2, 0LL, &v20);
  if ( v10 >= 0 )
  {
    v11 = 2LL * v20;
    if ( !is_mul_ok(v20, 2uLL) )
      v11 = -1LL;
    v12 = (char *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A6,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
LABEL_22:
      operator delete[](v13);
      goto LABEL_23;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *, unsigned int *))(*(_QWORD *)v7 + 32LL))(
            v7,
            a2,
            v12,
            &v20);
    if ( v10 < 0 )
      goto LABEL_22;
    *a3 = v13;
    goto LABEL_19;
  }
LABEL_23:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v10;
}
