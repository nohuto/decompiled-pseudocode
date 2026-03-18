/*
 * XREFs of xxxWindowEvent @ 0x1C00C4C0C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 *     zzzDestroyQueue @ 0x1C012DDE0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxWindowEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax

  result = qword_1C0295598;
  if ( qword_1C0295598 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_1C0295598(a1, a2, a3, a4, a5);
  return result;
}
