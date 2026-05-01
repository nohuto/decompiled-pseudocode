/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___::_CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___ @ 0x180197EE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___::_scalar_deleting_destructor_ @ 0x180198370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___::_CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
