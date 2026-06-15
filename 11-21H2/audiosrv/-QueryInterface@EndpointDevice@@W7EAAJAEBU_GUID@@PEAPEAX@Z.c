/*
 * XREFs of ?QueryInterface@EndpointDevice@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return EndpointDevice::QueryInterface((EndpointDevice *)(a1 - 8), a2, a3);
}
