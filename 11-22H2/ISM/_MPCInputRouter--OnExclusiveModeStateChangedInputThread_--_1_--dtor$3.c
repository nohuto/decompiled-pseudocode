/*
 * XREFs of _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$3 @ 0x18011923C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 144) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 144) &= ~1u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 168));
  }
  return result;
}
