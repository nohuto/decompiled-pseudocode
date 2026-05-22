/*
 * XREFs of _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$4 @ 0x18010B829
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 208) & 2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 208) &= ~2u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 88));
  }
  return result;
}
