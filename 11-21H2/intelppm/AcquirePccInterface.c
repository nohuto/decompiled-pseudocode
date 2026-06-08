/*
 * XREFs of AcquirePccInterface @ 0x1C003957C
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C00433EC (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     ValidatePccHeader @ 0x1C0037924 (ValidatePccHeader.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001DCF8,
    0LL);
  if ( qword_1C001E290 )
  {
    v3 = 0;
  }
  else
  {
    dword_1C001E268 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v2,
           &GUID_PCC_INTERFACE_STANDARD,
           &unk_1C001E248,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = ValidatePccHeader(qword_1C001E290);
      if ( v3 < 0 )
      {
        ((void (__fastcall *)(__int64))qword_1C001E260)(qword_1C001E250);
        memset(&unk_1C001E248, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001DCF8);
  return (unsigned int)v3;
}
