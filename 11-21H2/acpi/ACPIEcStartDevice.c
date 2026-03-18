/*
 * XREFs of ACPIEcStartDevice @ 0x1C00530C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     AMLIIsEqualHandle @ 0x1C000C8F0 (AMLIIsEqualHandle.c)
 *     ACPIEcCreateEcData @ 0x1C0052F28 (ACPIEcCreateEcData.c)
 */

__int64 __fastcall ACPIEcStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // r8
  __int64 EcData; // rax
  __int64 result; // rax
  __int64 v10; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(_QWORD **)(DeviceExtension + 184);
  if ( !v7 )
  {
    if ( !gECDTContext || !AMLIIsEqualHandle(*(_QWORD **)(DeviceExtension + 760), *(_QWORD **)(gECDTContext + 56)) )
    {
      EcData = ACPIEcCreateEcData();
      v7 = (_QWORD *)EcData;
      if ( !EcData )
        return 3221225626LL;
      v10 = *(_QWORD *)(v6 + 760);
      *(_QWORD *)(EcData + 56) = v10;
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    *(_QWORD *)(v6 + 184) = v7;
  }
  *v7 = a1;
  result = ACPIInitStartDevice(
             a1,
             v5,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))&ACPIEcStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
