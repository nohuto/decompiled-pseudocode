/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C00B713C
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C00B6F70 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C004A6A4 (rimOnPnpRemoveComplete.c)
 *     RIMFreeSpecificDev @ 0x1C00A0F40 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00C2EBC (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r8

  v3 = (__int64 *)(a1 + 424);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48)) & a2) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 184);
      if ( (v9 & 0x2000) == 0 )
      {
        *(_DWORD *)(v8 + 184) = v9 | 8;
        rimOnPnpRemoveComplete(a1, *v6, v8);
        v13 = *v6;
        if ( *(_QWORD *)(*v6 + 248) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
          v13 = *v6;
        }
        *v6 = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v13);
        rimDoRimDevChange(a1, v13, 3LL);
        RIMFreeSpecificDev(a1, v13, v14);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v8 + 40);
    v5 = *(_QWORD *)(v8 + 40);
  }
  return 0LL;
}
