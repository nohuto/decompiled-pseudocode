/*
 * XREFs of ?RealClose@Api@InteropVisual@Composition@UI@Windows@@UEAAJXZ @ 0x1800877A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::Api::RealClose(
        Windows::UI::Composition::InteropVisual::Api *this)
{
  return Microsoft::WRL2::ContextRuntimeClass::Close(
           (Windows::UI::Composition::InteropVisual::Api *)((char *)this - 296),
           1);
}
