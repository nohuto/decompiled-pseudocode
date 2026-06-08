/*
 * XREFs of PccCapWorker @ 0x1C000BB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     RegisterKernelCap @ 0x1C001F010 (RegisterKernelCap.c)
 *     ProcLibCapChange @ 0x1C002C608 (ProcLibCapChange.c)
 */

void __fastcall PccCapWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rdi
  unsigned int *v3; // rbx
  unsigned int v4; // esi
  char v5; // bl

  do
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C0012B18);
    v2 = qword_1C0012558;
    LOBYTE(word_1C0012B2C) = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C0012B18);
    do
    {
      v3 = *(unsigned int **)(v2 - 40);
      v4 = *(_DWORD *)(v2 + 40);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00124D8,
        0LL);
      if ( v4 != v3[185] )
      {
        ProcLibCapChange(v3, v3[116], v3[128], v4);
        RegisterKernelCap(v3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C00124D8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        qword_1C0012B18);
      v2 = *(_QWORD *)v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
        WdfDriverGlobals,
        qword_1C0012B18);
    }
    while ( (__int64 *)v2 != &qword_1C0012558 );
    v5 = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C0012B18);
    if ( !(_BYTE)word_1C0012B2C )
    {
      word_1C0012B2C = 0;
      v5 = 0;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C0012B18);
  }
  while ( v5 );
}
