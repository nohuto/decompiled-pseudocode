/*
 * XREFs of ?QueryInterface@CRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18048AA70
 * Callers:
 *     ?QueryInterface@CDuiRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18048AA10 (-QueryInterface@CDuiRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefThread::QueryInterface(CRefThread *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_853513c1_37ae_4cec_b347_ec9ead33065a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_853513c1_37ae_4cec_b347_ec9ead33065a.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_853513c1_37ae_4cec_b347_ec9ead33065a.Data4;
  if ( v3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
      return 2147500034LL;
  }
  *a3 = this;
  (*(void (__fastcall **)(CRefThread *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
