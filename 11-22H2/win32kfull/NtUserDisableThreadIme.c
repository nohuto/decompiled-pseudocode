/*
 * XREFs of NtUserDisableThreadIme @ 0x1C00A3140
 * Callers:
 *     <none>
 * Callees:
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00A31DC (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00A3214 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // rdx
  struct tagTHREADINFO *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  bool v8; // dl

  EnterCrit(0LL, 0LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v6 = 0LL;
    goto LABEL_3;
  }
  if ( a1 == -1 )
  {
    UserDisableImeForProcess(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL));
LABEL_6:
    v6 = 1LL;
    goto LABEL_3;
  }
  v6 = 0LL;
  if ( !a1 )
  {
    v8 = 1;
    v3 = (struct tagTHREADINFO *)gptiCurrent;
LABEL_9:
    UserDisableImeForThread(v3, v8);
    goto LABEL_6;
  }
  v3 = (struct tagTHREADINFO *)PtiFromThreadId(a1);
  if ( v3 && *((_QWORD *)v3 + 53) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    v8 = v3 == (struct tagTHREADINFO *)gptiCurrent;
    goto LABEL_9;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v6;
}
