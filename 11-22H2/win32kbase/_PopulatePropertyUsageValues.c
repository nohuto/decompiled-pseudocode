/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C01858C8
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C01897E0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     _IsValidParallelValue @ 0x1C00D3DE4 (_IsValidParallelValue.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage @ 0x1C00D3EF4 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01852B0 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbp
  unsigned __int16 v10; // r13
  unsigned int v11; // ebx
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // esi
  int SpecificValueCaps; // r14d
  unsigned __int16 i; // r15
  __int64 v20; // r14
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // eax
  int v24; // eax

  v9 = a8;
  v10 = a5;
  v11 = 0;
  if ( !a8 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3662);
  }
  v14 = a9;
  if ( !a9 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3663);
  }
  if ( !a1 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3664);
  }
  v15 = a6;
  if ( !a6 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3665);
  }
  if ( !a2 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3666);
  }
  if ( !v10 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3667);
  }
  v16 = a7;
  if ( !a7 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3668);
  }
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3671);
  }
  if ( !v10 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= a3 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3677);
  }
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 0LL, a4, 0LL, v15, (__int64)&a5, v14);
  if ( a5 != v10 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3686);
  }
  if ( SpecificValueCaps >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v17 >= v16 || i >= v10 )
      {
        v11 = 1;
        *a2 = v17;
        return v11;
      }
      v20 = a6 + 72LL * i;
      if ( *(_BYTE *)(a1 + 824) == *(_BYTE *)(v20 + 2)
        && v17 < a3
        && (!(unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage()
         || (*(_DWORD *)(a1 + 360) & 2) == 0
         || a4 != *(_WORD *)(*(_QWORD *)(a1 + 760) + 4LL)
         || (unsigned int)IsValidParallelValue(a1, (unsigned __int16 *)v20, a9)) )
      {
        break;
      }
LABEL_44:
      ;
    }
    v21 = 28LL * v17;
    *(_WORD *)(v21 + v9 + 24) = *(_WORD *)v20;
    *(_WORD *)(v21 + v9 + 26) = *(_WORD *)(v20 + 56);
    *(_DWORD *)(v21 + v9) = *(_DWORD *)(v20 + 40);
    *(_DWORD *)(v21 + v9 + 4) = *(_DWORD *)(v20 + 44);
    if ( *(_WORD *)v20 == 1 )
    {
      v22 = *(_WORD *)(v20 + 56);
      if ( v22 == 48 && *(_DWORD *)(a8 + 1336) )
      {
        *(_DWORD *)(v21 + v9 + 8) = 0;
        if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
        {
LABEL_36:
          v23 = *(_DWORD *)(a1 + 188);
LABEL_37:
          *(_DWORD *)(v21 + v9 + 12) = v23;
          v24 = 13;
          *(_DWORD *)(v21 + v9 + 16) = 17;
LABEL_43:
          *(_DWORD *)(v21 + v9 + 20) = v24;
          ++v17;
          goto LABEL_44;
        }
LABEL_41:
        v23 = *(_DWORD *)(a1 + 184);
        goto LABEL_37;
      }
      if ( v22 == 49 && *(_DWORD *)(a8 + 1336) )
      {
        *(_DWORD *)(v21 + v9 + 8) = 0;
        if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) == 0 )
          goto LABEL_36;
        goto LABEL_41;
      }
    }
    *(_DWORD *)(v21 + v9 + 8) = *(_DWORD *)(v20 + 48);
    *(_DWORD *)(v21 + v9 + 12) = *(_DWORD *)(v20 + 52);
    *(_DWORD *)(v21 + v9 + 16) = *(_DWORD *)(v20 + 36);
    v24 = *(_DWORD *)(v20 + 32);
    goto LABEL_43;
  }
  return v11;
}
