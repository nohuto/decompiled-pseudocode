/*
 * XREFs of ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x1800C9A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMeterHardware::ProviderFinalRelease(CMeterHardware *this)
{
  __int64 v2; // rcx

  ATL::CComPtrBase<IPart>::Release((char *)this + 32);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
