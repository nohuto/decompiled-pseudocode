/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::_CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___ @ 0x1801E8C7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::_scalar_deleting_destructor_ @ 0x1801E8CE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::_CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
