/*
 * XREFs of HUBPDO_GetPortPath @ 0x1C0019EE4
 * Callers:
 *     HUBPDO_HandlePLDRRecovery @ 0x1C0019F3C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBPDO_ReportDeviceFailure @ 0x1C001B478 (HUBPDO_ReportDeviceFailure.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007BF50 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C007FB98 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x1C0080384 (HUBPDO_UnregisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C00807C8 (HUBPDO_InvokePortPLDRRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_GetPortPath(__int64 a1, _WORD *a2)
{
  _WORD *v2; // r8
  __int64 v3; // r9
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rcx

  v2 = a2 + 1;
  v3 = *(_QWORD *)(a1 + 16) + 304LL;
  v5 = 5LL;
  v6 = *(_WORD *)(v3 + 16);
  v7 = v3 - (_QWORD)a2;
  *a2 = v6;
  do
  {
    *v2 = *(_WORD *)((char *)v2 + v7 + 16);
    ++v2;
    --v5;
  }
  while ( v5 );
  result = *(_QWORD *)(a1 + 16);
  v9 = *(unsigned __int8 *)(result + 240);
  if ( (unsigned __int8)v9 < 6u )
  {
    result = *(unsigned __int16 *)(a1 + 48);
    a2[v9] = result;
  }
  return result;
}
