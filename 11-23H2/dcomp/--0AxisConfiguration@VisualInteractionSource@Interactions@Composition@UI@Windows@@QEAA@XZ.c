/*
 * XREFs of ??0AxisConfiguration@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18008FD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

Windows::UI::Composition::Interactions::VisualInteractionSource::AxisConfiguration *__fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::AxisConfiguration::AxisConfiguration(
        Windows::UI::Composition::Interactions::VisualInteractionSource::AxisConfiguration *this)
{
  Windows::UI::Composition::Interactions::VisualInteractionSource::AxisConfiguration *result; // rax

  *(_BYTE *)this &= 0xFCu;
  result = this;
  *(_BYTE *)this |= 4u;
  *((_DWORD *)this + 1) = 0;
  return result;
}
