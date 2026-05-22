/*
 * XREFs of _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor$0 @ 0x1800DD543
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VSpatialRimDeviceCollectionHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DDE08 (--1-$ComPtr@VSpatialRimDeviceCollectionHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<SpatialRimDeviceCollectionHeadEventHandler>::~ComPtr<SpatialRimDeviceCollectionHeadEventHandler>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
