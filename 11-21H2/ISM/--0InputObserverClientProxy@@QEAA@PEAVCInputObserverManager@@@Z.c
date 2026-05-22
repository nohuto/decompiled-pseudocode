/*
 * XREFs of ??0InputObserverClientProxy@@QEAA@PEAVCInputObserverManager@@@Z @ 0x18012CBD8
 * Callers:
 *     ?CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientProxy@@@Z @ 0x18012CD18 (-CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverCli.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
InputObserverClientProxy *__fastcall InputObserverClientProxy::InputObserverClientProxy(
        InputObserverClientProxy *this,
        struct CInputObserverManager *a2)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputObserverClientProxyImpl::`vftable';
  *(_QWORD *)this = &InputObserverClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &InputObserverClientProxy::`vftable'{for `IInputObserverClientProxy'};
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (**((void (__fastcall ***)(char *))a2 + 2))((char *)a2 + 16);
  *((_DWORD *)this + 14) = 1;
  return this;
}
