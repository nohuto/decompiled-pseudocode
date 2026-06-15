/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseClientEndpoint@@MEAAJXZ @ 0x1400921D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::IsProperlyInitialized(CCrossProcessBaseClientEndpoint *this)
{
  if ( (*((_DWORD *)this + 44) & 0x40000) != 0 && *(_WORD *)(*((_QWORD *)this + 10) + 4LL) )
    return *((_DWORD *)this + 112) != 0 ? 1 : -2005139378;
  else
    return 1LL;
}
