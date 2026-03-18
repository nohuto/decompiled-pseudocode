/*
 * XREFs of MI_PFN_IS_PROTO @ 0x1402A2E70
 * Callers:
 *     MmChangeImageProtection @ 0x140723E40 (MmChangeImageProtection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_PFN_IS_PROTO(__int64 a1)
{
  return *(__int64 *)(a1 + 40) < 0;
}
