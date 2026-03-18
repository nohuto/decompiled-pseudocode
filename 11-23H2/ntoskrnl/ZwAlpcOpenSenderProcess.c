/*
 * XREFs of ZwAlpcOpenSenderProcess @ 0x14041BE40
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407A6A78 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcOpenSenderProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
