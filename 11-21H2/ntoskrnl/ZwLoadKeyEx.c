/*
 * XREFs of ZwLoadKeyEx @ 0x14041D960
 * Callers:
 *     PiDrvDbLoadHive @ 0x1407F3F88 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
