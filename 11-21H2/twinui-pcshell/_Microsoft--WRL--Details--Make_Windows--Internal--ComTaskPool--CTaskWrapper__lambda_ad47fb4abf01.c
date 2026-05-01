/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad47fb4abf013fdcb1f378688d8640ff__&___lambda_ad47fb4abf013fdcb1f378688d8640ff__&__::_1_::dtor$0 @ 0x180582AA2
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&___::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&___ @ 0x18019BB44 (Microsoft--WRL--ComPtr_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd4539b3655cc22a40f9.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad47fb4abf013fdcb1f378688d8640ff______lambda_ad47fb4abf013fdcb1f378688d8640ff_____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *result; // rax

  result = (volatile signed __int32 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299______::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299______(*(volatile signed __int32 ***)(a2 + 80));
  }
  return result;
}
