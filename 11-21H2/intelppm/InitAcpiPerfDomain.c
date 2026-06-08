/*
 * XREFs of InitAcpiPerfDomain @ 0x1C0025018
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C0024F24 (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     Display_xSD @ 0x1C0025094 (Display_xSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C0025244 (ValidateAcpi_PSD_TSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C0025B3C (AcpiEval_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = AcpiEval_PSD_TSD(a1, 1146310751LL, &v6);
  if ( v3 < 0 )
  {
    v4 = 0LL;
    if ( v3 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xDu,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xEu,
        (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
        v3);
    }
  }
  else
  {
    v4 = v6;
    LOBYTE(v2) = 1;
    v3 = ValidateAcpi_PSD_TSD(v6, v2);
    if ( v3 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x200u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v3);
      v4 = v6;
    }
    else
    {
      v3 = 0;
      Display_xSD(v4, "_PSD");
    }
  }
  *(_QWORD *)(a1 + 472) = v4;
  return (unsigned int)v3;
}
