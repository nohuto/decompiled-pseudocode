/*
 * XREFs of ?QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800267B0
 * Callers:
 *     ?QueryInterface@EndpointDevice@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077F10 (-QueryInterface@EndpointDevice@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDevice::QueryInterface(EndpointDevice *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61.Data4;
    if ( v4 )
      return CUnknown::QueryInterface((EndpointDevice *)((char *)this + 8), a2, a3);
    *a3 = this;
    (*(void (__fastcall **)(EndpointDevice *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
