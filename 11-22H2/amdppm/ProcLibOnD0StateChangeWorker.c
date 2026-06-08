/*
 * XREFs of ProcLibOnD0StateChangeWorker @ 0x1C0004760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C0027A54 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C00282B8 (AcpiEval_TPC.c)
 *     ProcLibCapChange @ 0x1C002C608 (ProcLibCapChange.c)
 */

void __fastcall ProcLibOnD0StateChangeWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _DWORD *DeviceExtension; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = 0;
  v11 = 0;
  v5 = 0;
  if ( (DeviceExtension[70] & 0x70000000) != 0 )
  {
    v6 = AcpiEval_PPC(DeviceExtension, &v11);
    if ( v6 >= 0 )
    {
      v5 = v11;
    }
    else if ( v6 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x12u,
          (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        19,
        (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
        v6);
    }
  }
  v8 = DeviceExtension[70];
  v11 = 0;
  if ( (v8 & 0x3000000) != 0 )
  {
    v9 = AcpiEval_TPC(DeviceExtension, &v11);
    if ( v9 >= 0 )
    {
      v3 = v11;
    }
    else if ( v9 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x14u,
          (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(
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
    qword_1C00124D8,
    0LL);
  if ( v5 != DeviceExtension[116] || v3 != DeviceExtension[128] )
  {
    ProcLibCapChange(DeviceExtension, v5, v3, 100LL);
    ((void (__fastcall *)(_DWORD *))qword_1C00129F8)(DeviceExtension);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  IoFreeWorkItem(Context);
}
