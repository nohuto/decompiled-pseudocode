/*
 * XREFs of ?RuntimeClassInitialize@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUHWND__@@@Z @ 0x18008FCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Private::TransformInformation::RuntimeClassInitialize(
        Windows::UI::Composition::Private::TransformInformation *this,
        HWND a2)
{
  *((_QWORD *)this + 8) = a2;
  return 0LL;
}
