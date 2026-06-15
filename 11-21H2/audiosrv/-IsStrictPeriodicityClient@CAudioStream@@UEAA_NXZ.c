/*
 * XREFs of ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18000F7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsStrictPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 100) == 1;
}
