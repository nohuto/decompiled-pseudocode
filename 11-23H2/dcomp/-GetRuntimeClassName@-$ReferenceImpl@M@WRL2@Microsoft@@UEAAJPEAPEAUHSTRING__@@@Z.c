/*
 * XREFs of ?GetRuntimeClassName@?$ReferenceImpl@M@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180139760
 * Callers:
 *     ?GetRuntimeClassName@?$ReferenceImpl@M@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF7A0 (-GetRuntimeClassName@-$ReferenceImpl@M@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::ReferenceImpl<float>::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.IReference`1<Single>", 0x27u, a2);
}
