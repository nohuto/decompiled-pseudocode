/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___ @ 0x1801AF568
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_scalar_deleting_destructor_ @ 0x1801B0D60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___--_scala.c)
 * Callees:
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::__lambda_3f7c4ca579c2955647d5fca56c9af8c5_ @ 0x1801AF3B8 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--__lambda_3f7c4ca579c2955647d5fca56c9af8c5_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = lambda_3f7c4ca579c2955647d5fca56c9af8c5_::__lambda_3f7c4ca579c2955647d5fca56c9af8c5_(
             (__int64 *)(a1 + 16),
             a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
