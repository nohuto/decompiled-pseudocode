/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x1C005BD3C
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005B8FC (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0031440 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004B644 (WPP_RECORDER_SF_DD.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005B8FC (AcpiConvertMethodArgumentsToObjData.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005CFE8 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  __int64 v5; // r8
  unsigned __int16 *v6; // rbp
  unsigned __int64 v7; // r10
  unsigned int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int16 *v10; // rcx
  unsigned __int16 v11; // dx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int *Pool2; // rax
  int v17; // ebx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d

  *a2 = 0;
  *a3 = 0LL;
  if ( a1 && (unsigned __int16)(a1[1] - 1) > 6u && (unsigned __int16)(*a1 - 3) <= 1u )
  {
    v5 = (unsigned __int16)a1[1];
    v6 = a1 + 2;
    v7 = (unsigned __int64)a1 + v5 + 4;
    v8 = 0;
    v9 = 0LL;
    v10 = v6;
    if ( (unsigned __int64)v6 >= v7 )
    {
LABEL_15:
      v15 = 40 * v8 + 8;
      *a2 = v15;
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, v15, 1315988289LL);
      *a3 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v8;
        v17 = AcpiConvertMethodArgumentsToObjData(v6, v9, v8, (__int64)*a3 + 8);
        if ( v17 >= 0 )
          return (unsigned int)v17;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20);
      }
      else
      {
        v17 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x1Cu,
            (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
            *a2,
            -1073741670);
        *a2 = 0;
      }
    }
    else
    {
      while ( *v10 <= 4u )
      {
        v11 = v10[1];
        if ( v11 > (unsigned __int16)v5 )
          break;
        v12 = 4LL;
        if ( v11 >= 4u )
          v12 = v10[1];
        v13 = v10[1];
        if ( (unsigned __int64)v10 + v12 + 4 > v7 )
          break;
        ++v8;
        v14 = v10[1];
        if ( v11 < 4u )
          v14 = 4LL;
        v9 += v14 + 4;
        if ( v11 < 4u )
          v13 = 4LL;
        v10 = (unsigned __int16 *)((char *)v10 + v13 + 4);
        if ( (unsigned __int64)v10 >= v7 )
          goto LABEL_15;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0x1Bu,
          (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
          *v10,
          v10[1],
          v5);
      v17 = -1073741788;
    }
  }
  else
  {
    v17 = -1073741811;
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x4E706341u);
    *a2 = 0;
    *a3 = 0LL;
  }
  return (unsigned int)v17;
}
