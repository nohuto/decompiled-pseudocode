/*
 * XREFs of ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18004B790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsLazyPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 106) == 2;
}
