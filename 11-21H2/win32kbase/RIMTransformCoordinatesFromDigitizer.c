/*
 * XREFs of RIMTransformCoordinatesFromDigitizer @ 0x1C0198DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00438D8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0043DEC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00E64A4 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMTransformCoordinates @ 0x1C0198AA4 (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0198FAC (RIMTransformPhysicalPointToScreen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMTransformCoordinatesFromDigitizer(__int64 a1, int *a2, _DWORD *a3, __int64 a4)
{
  unsigned __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-10h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v10 = 0;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && *(_QWORD *)(a1 + 560) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v9,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 424) + 104LL));
    if ( a2 )
    {
      RIMTransformCoordinates(*(_QWORD *)(a1 + 560), 0, a2, &v8, &v10);
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 560), *(_QWORD *)a2, a3);
    }
    RIMTransformPhysicalPointToScreen(*(_QWORD *)(a1 + 560), a3, a4);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v9);
  }
}
