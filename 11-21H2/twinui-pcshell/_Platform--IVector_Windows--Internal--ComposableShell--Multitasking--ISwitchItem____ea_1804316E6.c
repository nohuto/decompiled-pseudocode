/*
 * XREFs of _Platform::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::[Windows::Foundation::Collections::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___]::Append_::_1_::catch$5 @ 0x1804316E6
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn Platform::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::_Windows::Foundation::Collections::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____::Append_::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 64) = Exception;
  v4 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
  *(_QWORD *)(a2 + 64) = v4;
  *(_QWORD *)(a2 + 32) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::OutOfMemoryException **)(a2 + 32);
}
