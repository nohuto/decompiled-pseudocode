/*
 * XREFs of ?QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall NonPointerProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return NonPointerProcessor::QueryInterface((NonPointerProcessor *)(a1 - 8), a2, a3);
}
