/*
 * XREFs of NVMeReConfigAsyncEventCompletion @ 0x1C0021890
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalCommand @ 0x1C0009D40 (GetLocalCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001FBC4 (NVMeIssueAsyncEventCommand.c)
 */

__int64 __fastcall NVMeReConfigAsyncEventCompletion(__int64 a1, __int64 a2)
{
  _BYTE *LocalCommand; // rax
  __int64 v3; // r11

  LocalCommand = (_BYTE *)GetLocalCommand(a1, a2);
  *LocalCommand = 0;
  return NVMeIssueAsyncEventCommand(v3, (__int64)LocalCommand);
}
