/*
 * XREFs of ZwLoadKeyEx @ 0x14041C8C0
 * Callers:
 *     PiDrvDbLoadHive @ 0x140867738 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
