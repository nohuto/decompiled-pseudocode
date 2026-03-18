/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C0204000
 * Callers:
 *     NtUserEnableModernAppWindowKeyboardIntercept @ 0x1C01F3080 (NtUserEnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D1230 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D12DC (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, int a2)
{
  int v2; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v7 + 424) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) != 0x10
    && !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
  {
    v8 = 5LL;
LABEL_12:
    UserSetLastError(v8, v6);
    return v2;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v12) < 0 || !v12 )
  {
    v8 = 12LL;
    goto LABEL_12;
  }
  if ( a2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v7);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v7);
}
