/*
 * XREFs of ?IsCaptureStream@CVirtualAudioStream@@UEAA_NXZ @ 0x18010F4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualAudioStream::IsCaptureStream(CVirtualAudioStream *this)
{
  return *((_DWORD *)this + 10) == 1;
}
