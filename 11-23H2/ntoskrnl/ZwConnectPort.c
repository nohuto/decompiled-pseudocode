/*
 * XREFs of ZwConnectPort @ 0x14041C1A0
 * Callers:
 *     DifZwConnectPortWrapper @ 0x1405EE080 (DifZwConnectPortWrapper.c)
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
