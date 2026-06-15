/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x18000AEB0
 * Callers:
 *     ?IsCaptureStream@CAudioStream@@W7EAA_NXZ @ 0x18006B020 (-IsCaptureStream@CAudioStream@@W7EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  return (unsigned int)(*((_DWORD *)this + 99) - 1) <= 1;
}
