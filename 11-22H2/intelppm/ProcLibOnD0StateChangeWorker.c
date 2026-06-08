/*
 * XREFs of ProcLibOnD0StateChangeWorker @ 0x1C0002380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0027608 (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x1C003B314 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C003B830 (AcpiEval_TPC.c)
 */

void __fastcall ProcLibOnD0StateChangeWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _DWORD *DeviceExtension; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = 0;
  v11 = 0;
  v5 = 0;
  if ( (DeviceExtension[70] & 0x70000000) != 0 )
  {
    v7 = AcpiEval_PPC(DeviceExtension, &v11);
    if ( v7 >= 0 )
    {
      v5 = v11;
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
          (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids);
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
        (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
        v7);
    }
  }
  v6 = DeviceExtension[70];
  v11 = 0;
  if ( (v6 & 0x3000000) != 0 )
  {
    v9 = AcpiEval_TPC(DeviceExtension, &v11);
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
          (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids);
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
        (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
        v9);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  if ( v5 != DeviceExtension[116] || v3 != DeviceExtension[128] )
  {
    ProcLibCapChange(DeviceExtension, v5, v3, 100LL);
    ((void (__fastcall *)(_DWORD *))qword_1C001F538)(DeviceExtension);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
  IoFreeWorkItem(Context);
}
