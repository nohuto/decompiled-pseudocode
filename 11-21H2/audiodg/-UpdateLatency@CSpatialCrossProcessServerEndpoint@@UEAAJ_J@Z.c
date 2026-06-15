/*
 * XREFs of ?UpdateLatency@CSpatialCrossProcessServerEndpoint@@UEAAJ_J@Z @ 0x14002EE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::UpdateLatency(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2)
{
  *((_QWORD *)this + 7) += a2;
  return 0LL;
}
