/*
 * XREFs of RIMSetContactBoundary @ 0x1C0198678
 * Callers:
 *     RIMAddSimulatedPointerDeviceData @ 0x1C018F340 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMApplyTransforms @ 0x1C0197E64 (RIMApplyTransforms.c)
 * Callees:
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00E64A4 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0198FAC (RIMTransformPhysicalPointToScreen.c)
 *     ApiSetApplyMagInputTransform @ 0x1C0205B14 (ApiSetApplyMagInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetContactBoundary(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v5; // esi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v15; // [rsp+50h] [rbp+30h] BYREF
  int v16; // [rsp+54h] [rbp+34h]
  int v17; // [rsp+58h] [rbp+38h] BYREF
  int v18; // [rsp+5Ch] [rbp+3Ch]
  __int64 v19; // [rsp+60h] [rbp+40h] BYREF

  v19 = a3;
  v5 = 0;
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3);
    a3 = v19;
  }
  if ( !a1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    LODWORD(a3) = v19;
  }
  v15 = a3 - (a4 >> 1);
  v17 = a3 + (a4 >> 1);
  v16 = HIDWORD(v19) - (a5 >> 1);
  v18 = HIDWORD(v19) + (a5 >> 1);
  v9 = *(_DWORD *)(a1 + 360);
  if ( (v9 & 8) == 0 || (v9 & 0x2000) != 0 )
  {
    RIMTransformPointerDevicePointToPhysical(a1, v15, &v19);
    v5 = RIMTransformPhysicalPointToScreen(a1, &v19, &v15);
    if ( v5 < 0 )
      return (unsigned int)v5;
    RIMTransformPointerDevicePointToPhysical(a1, v17, &v19);
    v5 = RIMTransformPhysicalPointToScreen(a1, &v19, &v17);
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  else
  {
    ApiSetApplyMagInputTransform(&v15, &v17);
  }
  v10 = v15;
  v11 = v17;
  v12 = v16;
  v13 = v18;
  *a2 = v15;
  a2[2] = v11;
  a2[1] = v12;
  a2[3] = v13;
  if ( v10 == v11 && a4 )
    a2[2] = v10 + 1;
  if ( v12 == v13 && a5 )
    a2[3] = v12 + 1;
  return (unsigned int)v5;
}
