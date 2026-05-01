/*
 * XREFs of ?IsEqualByFrame@FrameWrapper@@UEAAHPEAUIApplicationFrame@@@Z @ 0x18022AFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FrameWrapper::IsEqualByFrame(struct IUnknown **this, struct IUnknown *a2)
{
  return SHIsSameObject(a2, this[2]);
}
