/*
 * XREFs of ?GetOutputDataPointer@CBridgeSourceEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140026B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CBridgeSourceEndpoint::GetOutputDataPointer(
        CBridgeSourceEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 7);
  *(struct AE_CURRENT_POSITION *)((char *)this + 64) = *a3;
  return result;
}
