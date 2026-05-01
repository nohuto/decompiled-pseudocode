/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::_CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___ @ 0x1801E511C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::_scalar_deleting_destructor_ @ 0x1801E5580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___--_scala.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::_CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___(
        __int64 a1)
{
  __int64 result; // rax

  result = std::wstring::_Tidy_deallocate(a1 + 24);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
