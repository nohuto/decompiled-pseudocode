/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002DC7C
 * Callers:
 *     ValidateHandleSecure @ 0x1C002DD80 (ValidateHandleSecure.c)
 * Callees:
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C003D540 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // rbx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rbp
  __int16 v8; // cx
  PVOID *v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8

  v4 = gpKernelHandleTable;
  v6 = 3LL * (unsigned int)((a1 - qword_1C0294B68) >> 5);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v8 = *((_WORD *)&unk_1C024AF4C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v8 & 2) != 0 )
  {
    v9 = (PVOID *)v4[v6 + 1];
  }
  else
  {
    if ( (v8 & 1) == 0 )
      return 1LL;
    v11 = v4[v6 + 1];
    if ( !v11 )
      return 1LL;
    v9 = *(PVOID **)(v11 + 424);
  }
  if ( !v9
    || *v9 == gpepCSRSS
    || (unsigned __int8)CheckAccessEx((char *)CurrentProcessWin32Process + 880, v9 + 110, 0LL) )
  {
    return 1LL;
  }
  EtwTraceUIPIHandleValidationError(CurrentProcessWin32Process);
  UserSetLastError(5LL, v12, v13);
  return 0LL;
}
