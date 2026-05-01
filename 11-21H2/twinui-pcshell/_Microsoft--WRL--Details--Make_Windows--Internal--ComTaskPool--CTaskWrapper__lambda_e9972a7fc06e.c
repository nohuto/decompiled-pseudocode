/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_____lambda_e9972a7fc06ea41c4e23ae797ec0a7d8____::_1_::dtor$0 @ 0x180199786
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&___::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&___ @ 0x18019BB44 (Microsoft--WRL--ComPtr_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd4539b3655cc22a40f9.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_____lambda_e9972a7fc06ea41c4e23ae797ec0a7d8____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299______::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299______(*(_QWORD *)(a2 + 80));
  }
  return result;
}
