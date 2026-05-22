/*
 * XREFs of _wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4f55a452e____::_1_::dtor$0 @ 0x18017729D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4f55a452e____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
