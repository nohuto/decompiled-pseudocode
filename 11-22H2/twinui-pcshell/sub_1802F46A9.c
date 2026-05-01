/*
 * XREFs of sub_1802F46A9 @ 0x1802F46A9
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall sub_1802F46A9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        std::_Ref_count_base *a10,
        LPVOID pv,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        HSTRING string)
{
  if ( pv )
    CoTaskMemFree(pv);
  if ( string )
    WindowsDeleteString(string);
  if ( a10 )
    std::_Ref_count_base::_Decref(a10);
  JUMPOUT(0x18009BEA2LL);
}
