/*
 * XREFs of InitAcpiPerfStates @ 0x1C0035F04
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCT_PTC @ 0x1C0027750 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C0027F10 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0028724 (AcpiEval_XPSS.c)
 *     Display_PCT_PTC @ 0x1C002B348 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C002B4B4 (Display_PSS.c)
 *     ValidateAcpi2PStates @ 0x1C002E4E8 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C0030678 (ValidateXPssPStates.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // [rsp+28h] [rbp-30h]
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 208);
  v18 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = 0;
  v4 = AcpiEval_PCT_PTC(a1, 1413697631, a1 + 424);
  v7 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
        v4);
    }
    v3 = v7;
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
  {
    v8 = AcpiEval_XPSS(a1, (_QWORD *)(a1 + 456));
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xCu,
            (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v8;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
          v17);
      }
      *(_QWORD *)(a1 + 280) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0 )
  {
    v9 = AcpiEval_PSS(a1, (_QWORD *)(a1 + 448));
    v7 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xEu,
            (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v9;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
          v17);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 280) & 0x40000000LL) != 0 )
        v7 = 0;
    }
  }
  if ( v3 >= 0 )
  {
    if ( v7 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
      {
        v10 = *(unsigned int **)(a1 + 456);
        v18 = 0;
        v7 = ValidateXPssPStates(a1 + 424, v10, &v18);
        if ( v7 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v18);
          *(_QWORD *)(a1 + 280) &= ~0x40000000uLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = v7;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x10u,
              (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
              v17);
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 448);
        v18 = 0;
        v7 = ValidateAcpi2PStates(a1 + 424, v11, &v18);
        if ( v7 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v18);
          *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = v7;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x11u,
              (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
              v17);
          }
        }
      }
      v12 = *(_QWORD *)(a1 + 280);
      if ( (v12 & 0x40000000) != 0 )
      {
        v13 = *(unsigned int **)(a1 + 456);
LABEL_39:
        Display_PCT_PTC((unsigned __int8 *)(a1 + 424), "_PCT", v5, v6);
        Display_PSS(v13, v14, v15);
        goto LABEL_41;
      }
      if ( (v12 & 0x30000000) != 0 )
      {
        v13 = *(unsigned int **)(a1 + 448);
        goto LABEL_39;
      }
    }
    v3 = v7;
  }
LABEL_41:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
