/*
 * XREFs of ZwImpersonateClientOfPort @ 0x14041B140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwImpersonateClientOfPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
