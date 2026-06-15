/*
 * XREFs of ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800CAB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

void __fastcall CMuteHardware::ProviderFinalRelease(CMuteHardware *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) && *((_DWORD *)this + 16) )
  {
    v3 = *v1;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_c3ad8c7f2ffb3e627dd5155130aa6484_Traceguids,
        this);
      v3 = *v1;
    }
    (*(void (__fastcall **)(__int64, CMuteHardware *))(*(_QWORD *)v3 + 120LL))(v3, this);
    *((_DWORD *)this + 16) = 0;
  }
  ATL::CComPtrBase<IPart>::Release(v1);
}
