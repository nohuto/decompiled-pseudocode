/*
 * XREFs of ?QueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C280
 * Callers:
 *     ?QueryInterface@EndpointCollection@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C4A0 (-QueryInterface@EndpointCollection@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointCollection::QueryInterface(EndpointCollection *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(EndpointCollection *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((EndpointCollection *)((char *)this + 8), a2, a3);
}
