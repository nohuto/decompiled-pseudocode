/*
 * XREFs of InitAcpiCStates @ 0x1C00289B0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     InitAcpi2CStates @ 0x1C0028A60 (InitAcpi2CStates.c)
 *     Display_CST @ 0x1C002C1F8 (Display_CST.c)
 *     InitAcpi1CStates @ 0x1C0037B18 (InitAcpi1CStates.c)
 */

__int64 __fastcall InitAcpiCStates(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  int inited; // esi

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    a1[26],
    0LL);
  v2 = a1[35];
  v3 = a1 + 66;
  inited = -1073741823;
  if ( (v2 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates(a1, v3);
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
  Display_CST(*v3);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
  return (unsigned int)inited;
}
