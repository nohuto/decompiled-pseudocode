/*
 * XREFs of ZwQueryInformationByName @ 0x14041D780
 * Callers:
 *     SdbpGetFileTimestamp @ 0x140A4E934 (SdbpGetFileTimestamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationByName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
