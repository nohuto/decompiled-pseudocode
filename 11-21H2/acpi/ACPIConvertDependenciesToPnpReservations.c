/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C0021E88
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0006354 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     ACPIReserveDependencies @ 0x1C0021F38 (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004B8F4 (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  unsigned int v8; // r14d
  __int64 i; // rdi
  __int64 v10; // rbp
  int v11; // edx
  int v13; // r9d
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  v14 = 0LL;
  v8 = **(_DWORD **)(a3 + 32);
  if ( v8 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v10 = *(_QWORD *)(a3 + 32);
      v3 = AMLIGetNameSpaceObject(*(_BYTE **)(i + v10 + 40), a2, &v14, 0);
      if ( v3 < 0 )
        break;
      v3 = ACPIReserveDependencies(a1);
      if ( v3 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v3;
        v13 = 22;
        goto LABEL_11;
      }
      if ( ++v4 >= v8 )
        return (unsigned int)v3;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v3;
    v13 = 21;
LABEL_11:
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      21,
      v13,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      *(_QWORD *)(i + v10 + 40),
      v3);
  }
  return (unsigned int)v3;
}
