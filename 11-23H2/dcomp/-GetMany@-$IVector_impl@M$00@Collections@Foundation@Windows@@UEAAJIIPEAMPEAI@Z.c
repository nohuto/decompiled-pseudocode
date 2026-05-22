/*
 * XREFs of ?GetMany@?$IVector_impl@M$00@Collections@Foundation@Windows@@UEAAJIIPEAMPEAI@Z @ 0x180170BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVector_impl<float,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVector_impl<float,1>,float>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
