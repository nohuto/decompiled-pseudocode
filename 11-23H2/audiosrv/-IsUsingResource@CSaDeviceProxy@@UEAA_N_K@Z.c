/*
 * XREFs of ?IsUsingResource@CSaDeviceProxy@@UEAA_N_K@Z @ 0x180108690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsUsingResource(CSaDeviceProxy *this, __int64 a2)
{
  return a2 == *((_QWORD *)this + 7);
}
