/*
 * XREFs of USBType1SetSampleRate @ 0x1C003A3D0
 * Callers:
 *     USBType1ChangePowerState @ 0x1C0004640 (USBType1ChangePowerState.c)
 *     USBType1StateChangePin @ 0x1C0005490 (USBType1StateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00060B0 (USBCaptureChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0006D10 (USBCaptureStateChangePin.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C0033E28 (USBHwGetSetProperty.c)
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
                    0x1Cu,
                    0,
                    1u,
                    1,
                    0,
                    0,
                    *(unsigned __int8 *)(v3[21] + 2LL),
                    &v6,
                    3u);
    if ( SetProperty < 0 && *(_BYTE *)(v3[19] + 7LL) == 1 )
      return 0;
  }
  return (unsigned int)SetProperty;
}
