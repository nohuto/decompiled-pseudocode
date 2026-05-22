/*
 * XREFs of ?CreateDelegatedInkTrail@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionDelegatedInkTrail@@@Z @ 0x1800FF730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateDelegatedInkTrail(
        DirectComposition::CDevice *this,
        struct IDCompositionDelegatedInkTrail **a2)
{
  return (*(__int64 (__fastcall **)(DirectComposition::CDevice *, _QWORD, struct IDCompositionDelegatedInkTrail **))(*(_QWORD *)this + 32LL))(
           this,
           0LL,
           a2);
}
