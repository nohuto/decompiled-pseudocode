/*
 * XREFs of ?RealClose@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180087780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::RealClose(
        Windows::UI::Composition::InteropCompositor::Api *this)
{
  return Microsoft::WRL2::ContextRuntimeClass::Close(
           (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1248),
           1);
}
