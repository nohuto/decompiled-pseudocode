/*
 * XREFs of ?GetMany@?$IVectorView_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInspectable@@PEAI@Z @ 0x1800C8AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVectorView_impl<IInspectable *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<IInspectable *,1>,IInspectable *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
