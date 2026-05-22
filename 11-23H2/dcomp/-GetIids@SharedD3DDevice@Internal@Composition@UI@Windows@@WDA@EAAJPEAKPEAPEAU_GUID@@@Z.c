/*
 * XREFs of ?GetIids@SharedD3DDevice@Internal@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Windows::UI::Composition::Internal::SharedD3DDevice::GetIids(
           (Windows::UI::Composition::Internal::SharedD3DDevice *)(a1 - 48),
           a2,
           a3);
}
