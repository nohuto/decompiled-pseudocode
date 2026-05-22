/*
 * XREFs of ?GetRuntimeClassName@?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180139790
 * Callers:
 *     ?GetRuntimeClassName@?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF7C0 (-GetRuntimeClassName@-$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>", 0x44u, a2);
}
