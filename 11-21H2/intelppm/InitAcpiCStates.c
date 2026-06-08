/*
 * XREFs of InitAcpiCStates @ 0x1C00252A4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     Display_CST @ 0x1C002534C (Display_CST.c)
 *     InitAcpi2CStates @ 0x1C0025730 (InitAcpi2CStates.c)
 *     InitAcpi1CStates @ 0x1C003D064 (InitAcpi1CStates.c)
 */

__int64 __fastcall InitAcpiCStates(_QWORD *a1)
{
  __int64 v2; // rax
  int inited; // edi

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    a1[26],
    0LL);
  v2 = a1[35];
  inited = -1073741823;
  if ( (v2 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates(a1, a1 + 66);
    if ( inited >= 0 )
      goto LABEL_3;
    a1[35] &= 0xFFFFFFFFFFF80F8FuLL;
    v2 = a1[35];
  }
  if ( (v2 & 7) == 0 )
    goto LABEL_4;
  inited = InitAcpi1CStates(a1);
  if ( inited < 0 )
  {
    a1[35] &= 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_4;
  }
LABEL_3:
  inited = 0;
  Display_CST(a1[66]);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
  return (unsigned int)inited;
}
