/*
 * XREFs of EvtDeviceD0Entry @ 0x1C00020D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0029F64 (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x1C003A024 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C003A540 (AcpiEval_TPC.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0015018);
  v2 = *(_QWORD *)(v1 + 280);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 76) )
    {
      *(_BYTE *)(v1 + 76) = 0;
      v4 = 0;
      v11 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v7 = AcpiEval_PPC(v1, &v11);
        if ( v7 >= 0 )
        {
          v4 = v11;
        }
        else if ( v7 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 4;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v8,
              2,
              18,
              (__int64)&WPP_082f97d46ed83e9d2e2c8b74db8b7ab2_Traceguids);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            3,
            19,
            (__int64)&WPP_082f97d46ed83e9d2e2c8b74db8b7ab2_Traceguids,
            v7);
        }
      }
      v5 = *(_DWORD *)(v1 + 280);
      v11 = 0;
      if ( (v5 & 0x3000000) != 0 )
      {
        v9 = AcpiEval_TPC(v1, &v11);
        if ( v9 >= 0 )
        {
          v3 = v11;
        }
        else if ( v9 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v10,
              2,
              20,
              (__int64)&WPP_082f97d46ed83e9d2e2c8b74db8b7ab2_Traceguids);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            3,
            21,
            (__int64)&WPP_082f97d46ed83e9d2e2c8b74db8b7ab2_Traceguids,
            v9);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001DCF8,
        0LL);
      if ( v4 != *(_DWORD *)(v1 + 464) || v3 != *(_DWORD *)(v1 + 512) )
      {
        ProcLibCapChange(v1, v4, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C001E1F8)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001DCF8);
    }
  }
  return 0LL;
}
