/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700_____lambda_731699364cbddcd54af95a8546718700____::_1_::dtor$0 @ 0x1801993B7
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&___::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&___ @ 0x18019BB44 (Microsoft--WRL--ComPtr_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd4539b3655cc22a40f9.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700_____lambda_731699364cbddcd54af95a8546718700____::_1_::dtor_0(
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
