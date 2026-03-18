/*
 * XREFs of ZwLoadEnclaveData @ 0x14041C840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadEnclaveData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
