/*
 * XREFs of InitAcpiCStates @ 0x1C0036BC0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     Display_CST @ 0x1C002AC68 (Display_CST.c)
 *     InitAcpi1CStates @ 0x1C00367C0 (InitAcpi1CStates.c)
 *     InitAcpi2CStates @ 0x1C0036A68 (InitAcpi2CStates.c)
 */

__int64 __fastcall InitAcpiCStates(__int64 a1)
{
  __int64 v2; // rax
  unsigned int **v3; // rdi
  int inited; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = *(_QWORD *)(a1 + 280);
  v3 = (unsigned int **)(a1 + 528);
  inited = -1073741823;
  if ( (v2 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates(a1, v3);
    if ( inited >= 0 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFF80F8FuLL;
    v2 = *(_QWORD *)(a1 + 280);
  }
  if ( (v2 & 7) != 0 )
  {
    inited = InitAcpi1CStates(a1);
    if ( inited < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_8;
    }
LABEL_7:
    inited = 0;
    Display_CST((int *)*v3, v5, v6, v7);
  }
LABEL_8:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
