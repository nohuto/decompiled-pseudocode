/*
 * XREFs of ZwLoadKeyEx @ 0x14041CF80
 * Callers:
 *     PiDrvDbLoadHive @ 0x140867268 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
