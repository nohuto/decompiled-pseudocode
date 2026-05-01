/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cdce16f825702c0a1c57b181431f22d2_____lambda_cdce16f825702c0a1c57b181431f22d2____::_1_::dtor$0 @ 0x1801E634A
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___ @ 0x1801E87F4 (Microsoft--WRL--ComPtr_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cdce16f825702c0a1c57b181431f22d2_____lambda_cdce16f825702c0a1c57b181431f22d2____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36______::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36______(*(_QWORD *)(a2 + 80));
  }
  return result;
}
