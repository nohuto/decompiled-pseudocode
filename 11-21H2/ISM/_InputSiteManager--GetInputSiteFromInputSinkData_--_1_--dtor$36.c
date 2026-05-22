/*
 * XREFs of _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$36 @ 0x180057560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18004C860 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor_36(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 4);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 32));
  }
  return result;
}
