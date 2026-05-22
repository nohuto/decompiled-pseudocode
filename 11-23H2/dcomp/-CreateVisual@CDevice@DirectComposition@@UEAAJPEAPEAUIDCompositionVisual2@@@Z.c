/*
 * XREFs of ?CreateVisual@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180012D30
 * Callers:
 *     ?CreateVisual@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x1800A8B70 (-CreateVisual@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateVisual(
        DirectComposition::CDevice *this,
        struct IDCompositionVisual2 **a2)
{
  return (*(__int64 (__fastcall **)(char *, struct IDCompositionVisual2 **))(*((_QWORD *)this - 1) + 56LL))(
           (char *)this - 8,
           a2);
}
