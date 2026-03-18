/*
 * XREFs of ZwQuerySystemInformationEx @ 0x14041D420
 * Callers:
 *     PopCheckShutdownMarker @ 0x140B37D6C (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformationEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
