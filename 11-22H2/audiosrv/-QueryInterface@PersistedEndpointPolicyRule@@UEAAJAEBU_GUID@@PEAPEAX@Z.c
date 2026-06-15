/*
 * XREFs of ?QueryInterface@PersistedEndpointPolicyRule@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013FC60
 * Callers:
 *     ?QueryInterface@PersistedEndpointPolicyRule@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800776A0 (-QueryInterface@PersistedEndpointPolicyRule@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PersistedEndpointPolicyRule::QueryInterface(
        PersistedEndpointPolicyRule *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(PersistedEndpointPolicyRule *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((PersistedEndpointPolicyRule *)((char *)this + 8), a2, a3);
}
