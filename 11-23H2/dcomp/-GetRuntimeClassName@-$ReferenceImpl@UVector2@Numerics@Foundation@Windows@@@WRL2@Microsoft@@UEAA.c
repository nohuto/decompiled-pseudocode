/*
 * XREFs of ?GetRuntimeClassName@?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180168080
 * Callers:
 *     ?GetRuntimeClassName@?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B0E40 (-GetRuntimeClassName@-$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector2>", 0x44u, a2);
}
