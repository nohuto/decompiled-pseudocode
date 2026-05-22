/*
 * XREFs of ?QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004F800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DWMInputTarget::QueryInterface((DWMInputTarget *)(a1 - 32), a2, a3);
}
