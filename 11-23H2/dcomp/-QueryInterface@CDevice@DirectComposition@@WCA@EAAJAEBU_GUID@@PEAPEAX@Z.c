/*
 * XREFs of ?QueryInterface@CDevice@DirectComposition@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DirectComposition::CDevice::QueryInterface((DirectComposition::CDevice *)(a1 - 32), a2, a3);
}
