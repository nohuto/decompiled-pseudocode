/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700___::_CTaskWrapper__lambda_731699364cbddcd54af95a8546718700___ @ 0x18019BA2C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700___::_scalar_deleting_destructor_ @ 0x18019D410 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_731699364cbddcd54af95a8546718700___--_scala.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700___::_CTaskWrapper__lambda_731699364cbddcd54af95a8546718700___(
        __int64 a1)
{
  __int64 result; // rax

  result = std::vector<Geometry::CRect>::_Tidy(a1 + 40);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
