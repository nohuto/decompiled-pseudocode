/*
 * XREFs of _MPCInputRouter::GetMPCTarget_::_1_::dtor$2 @ 0x180109438
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MPCInputRouter::GetMPCTarget_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 128) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 128) &= ~1u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 32));
  }
  return result;
}
