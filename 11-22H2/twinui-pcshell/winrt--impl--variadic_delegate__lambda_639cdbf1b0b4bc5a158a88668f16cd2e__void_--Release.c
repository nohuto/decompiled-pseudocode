/*
 * XREFs of winrt::impl::variadic_delegate__lambda_639cdbf1b0b4bc5a158a88668f16cd2e__void_::Release @ 0x1806AE2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::variadic_delegate__lambda_639cdbf1b0b4bc5a158a88668f16cd2e__void_::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // esi

  v2 = winrt::impl::atomic_ref_count::operator--(Block + 6);
  if ( !v2 && Block )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    if ( *((_QWORD *)Block + 2) )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(Block + 4));
    if ( *((_QWORD *)Block + 1) )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(Block + 2));
    operator delete((void *)Block);
  }
  return v2;
}
