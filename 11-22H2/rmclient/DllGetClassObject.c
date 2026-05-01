/*
 * XREFs of DllGetClassObject @ 0x180019AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009498 @ 0x180009498 (sub_180009498.c)
 *     sub_1800190B0 @ 0x1800190B0 (sub_1800190B0.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  int v4; // edi
  __int64 *v6; // rax
  __int64 v7; // rdx

  v4 = (int)riid;
  v6 = sub_180009498();
  return sub_1800190B0((__int64)v6, v7, rclsid, v4, ppv);
}
