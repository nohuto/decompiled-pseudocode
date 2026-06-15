/*
 * XREFs of ?QueryInterface@TelephonyController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801678E0
 * Callers:
 *     ?QueryInterface@TelephonyController@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077FE0 (-QueryInterface@TelephonyController@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyController::QueryInterface(TelephonyController *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e659ba9b_1b36_4ce9_b6af_cefe7db93b05.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(TelephonyController *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((TelephonyController *)((char *)this + 8), a2, a3);
}
