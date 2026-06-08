/*
 * XREFs of InitAcpiPerfDomain @ 0x1C002D180
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C002D2D0 (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     AcpiEval_PSD_TSD @ 0x1C0026FD4 (AcpiEval_PSD_TSD.c)
 *     Display_xSD @ 0x1C002ACB0 (Display_xSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C002E028 (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // ebx
  unsigned int *v5; // rdi
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = AcpiEval_PSD_TSD(a1, 1146310751, &v9);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = v9;
    LOBYTE(v3) = 1;
    v4 = ValidateAcpi_PSD_TSD(v9, v3);
    if ( v4 >= 0 )
    {
      v4 = 0;
      Display_xSD(v5, "_PSD");
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x200u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = v4;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
          v8);
      }
      v5 = v9;
    }
  }
  else
  {
    v5 = 0LL;
    if ( v2 == -1073741772 )
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
      v7 = v2;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xEu,
        (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
        v7);
    }
  }
  *(_QWORD *)(a1 + 472) = v5;
  return (unsigned int)v4;
}
