/*
 * XREFs of ?QueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006AF0
 * Callers:
 *     ?QueryInterface@EndpointIterator@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077EC0 (-QueryInterface@EndpointIterator@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E5160 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall EndpointIterator::QueryInterface(EndpointIterator *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(EndpointIterator *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((EndpointIterator *)((char *)this + 8), a2, a3);
}
