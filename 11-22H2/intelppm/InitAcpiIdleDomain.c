/*
 * XREFs of InitAcpiIdleDomain @ 0x1C00294D4
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C002930C (InitAcpiProcessorDomains.c)
 *     AcpiCStateNotifyWorker @ 0x1C002F450 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     AcpiEval_CSD @ 0x1C002A368 (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C0037F40 (ValidateAcpiIdleDomain.c)
 *     Display_CSD @ 0x1C003D33C (Display_CSD.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  void *v10; // rdi
  int v11; // eax
  void *v12; // rcx
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = AcpiEval_CSD(a1, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v13;
    v11 = ValidateAcpiIdleDomain(v13, v9);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v7 = 0;
      Display_CSD(v10);
      v12 = 0LL;
      *a2 = v10;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v11);
      v12 = v13;
    }
    if ( v12 )
      ExFreePoolWithTag(v12, (ULONG)0);
  }
  else if ( v6 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
      v6);
  }
  return v7;
}
