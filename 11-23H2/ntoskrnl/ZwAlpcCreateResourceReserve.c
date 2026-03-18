/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x14041BD00
 * Callers:
 *     DifZwAlpcCreateResourceReserveWrapper @ 0x1405ED310 (DifZwAlpcCreateResourceReserveWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateResourceReserve(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
