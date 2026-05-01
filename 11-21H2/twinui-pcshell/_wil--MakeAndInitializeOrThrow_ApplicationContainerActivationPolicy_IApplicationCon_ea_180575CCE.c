/*
 * XREFs of _wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___bool_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::dtor$0 @ 0x180575CCE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ @ 0x1805714E4 (--1-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_ApplicationContainerActivationPolicy_IApplicationContainerActivationComponent___bool___std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::~ComPtr<ApplicationContainerActivationPolicy>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
