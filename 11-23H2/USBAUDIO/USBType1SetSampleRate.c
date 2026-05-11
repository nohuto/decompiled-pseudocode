/*
 * XREFs of USBType1SetSampleRate @ 0x1C00381D0
 * Callers:
 *     USBCaptureStateChangePin @ 0x1C0004610 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x1C0004AB0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C000A9A0 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x1C000B0D0 (USBCaptureChangePowerState.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C0038404 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBType1SetSampleRate(__int64 a1, int a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rbx
  int SetProperty; // edx
  int v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(v2 + 144);
  if ( (*(_BYTE *)(v3[20] + 3LL) & 1) != 0
    || (SetProperty = 0, *(_DWORD *)(a1 + 116) == 2) && *(_BYTE *)(v3[19] + 7LL) > 1u )
  {
    SetProperty = USBHwGetSetProperty(
                    *(_QWORD *)(v2 + 16),
                    28,
                    0,
                    1,
                    1,
                    0,
                    0,
                    *(unsigned __int8 *)(v3[21] + 2LL),
                    (__int64)&v6,
                    3);
    if ( SetProperty < 0 && *(_BYTE *)(v3[19] + 7LL) == 1 )
      return 0;
  }
  return (unsigned int)SetProperty;
}
