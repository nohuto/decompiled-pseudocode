/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x180046A50
 * Callers:
 *     ?IsCaptureStream@CAudioStream@@W7EAA_NXZ @ 0x1800771F0 (-IsCaptureStream@CAudioStream@@W7EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  return (unsigned int)(*((_DWORD *)this + 105) - 1) <= 1;
}
