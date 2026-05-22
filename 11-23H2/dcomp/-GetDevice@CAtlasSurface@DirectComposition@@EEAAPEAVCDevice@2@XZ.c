/*
 * XREFs of ?GetDevice@CAtlasSurface@DirectComposition@@EEAAPEAVCDevice@2@XZ @ 0x18008E9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DirectComposition::CDevice *__fastcall DirectComposition::CAtlasSurface::GetDevice(
        DirectComposition::CAtlasSurface *this)
{
  return *(struct DirectComposition::CDevice **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 144LL) + 128LL) + 24LL);
}
