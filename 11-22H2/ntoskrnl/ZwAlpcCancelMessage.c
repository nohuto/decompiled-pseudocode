/*
 * XREFs of ZwAlpcCancelMessage @ 0x14041B5A0
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407A6F88 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084D7DC (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCancelMessage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
