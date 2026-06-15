/*
 * XREFs of ?GetInitializationData@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAU_GUID@@PEAPEAXPEAI@Z @ 0x14009A200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetInitializationData(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct _GUID *a2,
        void **a3,
        unsigned int *a4)
{
  if ( !a2 || !a4 || !a3 )
    return 2147942487LL;
  *a2 = *(struct _GUID *)((char *)this + 1368);
  *a4 = *((_DWORD *)this + 346);
  *a3 = (void *)*((_QWORD *)this + 174);
  return 0LL;
}
