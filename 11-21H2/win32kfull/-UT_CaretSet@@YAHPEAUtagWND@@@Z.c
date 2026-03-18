/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00726A8
 * Callers:
 *     NtUserShowCaret @ 0x1C00725B0 (NtUserShowCaret.c)
 *     NtUserHideCaret @ 0x1C0072630 (NtUserHideCaret.c)
 *     zzzDestroyCaret @ 0x1C00C32AC (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C010A5AC (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C023AA44 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C023AA6C (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

_BOOL8 __fastcall UT_CaretSet(struct tagWND *a1)
{
  __int64 v2; // rbx
  unsigned int ThreadId; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !*(_QWORD *)(v2 + 296)
    || (ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
        v5 = *(unsigned int *)(v2 + 352),
        (_DWORD)v5 != ThreadId)
    && ((v6 = PtiFromThreadId(v5)) == 0 || *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(v6 + 424)) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return !a1 || a1 == *(struct tagWND **)(v2 + 296);
}
