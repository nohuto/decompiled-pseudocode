/*
 * XREFs of ?wil_details_FeatureReporting_IncrementUsageInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1800C6010
 * Callers:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18000CD4C (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  signed __int32 v4; // r8d
  BOOL v7; // ebx
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // r10d
  unsigned __int64 v11; // rdx
  __int64 result; // rax

  v4 = *a1;
  v7 = a2 == 4;
  while ( 1 )
  {
    a4[1] = 0;
    v8 = v4 | 1;
    if ( (((v4 | 1u) >> 14) & 1) != v7 )
    {
      if ( ((v8 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v8 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v8 = v4 & 0xFFFFC01E | 1;
      }
      v9 = 0;
      if ( a2 == 4 )
        v9 = 0x4000;
      v8 = v8 & 0xFFFFBFFF | v9;
    }
    v10 = (v8 >> 5) & 0x1FF;
    v11 = (unsigned int)(v10 + 1);
    if ( v11 > 0x1FF || v11 < (((unsigned __int64)v8 >> 5) & 0x1FF) )
    {
      LOWORD(v11) = 1;
      a4[2] = a2;
      a4[1] = v10;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             ((unsigned __int16)v8 ^ (unsigned __int16)(32 * v11)) & 0x3FE0 ^ v8,
                             v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}
