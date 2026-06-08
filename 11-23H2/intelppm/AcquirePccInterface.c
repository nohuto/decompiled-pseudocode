/*
 * XREFs of AcquirePccInterface @ 0x1C003A86C
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C004461C (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     ValidatePccHeader @ 0x1C0038E08 (ValidatePccHeader.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  if ( qword_1C001F5E0 )
  {
    v3 = 0;
  }
  else
  {
    dword_1C001F5B8 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v2,
           &GUID_PCC_INTERFACE_STANDARD,
           &unk_1C001F598,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = ValidatePccHeader(qword_1C001F5E0);
      if ( v3 < 0 )
      {
        ((void (__fastcall *)(__int64))qword_1C001F5B0)(qword_1C001F5A0);
        memset(&unk_1C001F598, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
  return (unsigned int)v3;
}
