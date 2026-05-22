/*
 * XREFs of ?SetBootstrapProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x18009B124
 * Callers:
 *     ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009BA50 (-Thunk_SetBootstrapProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBam.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
           this,
           a2);
}
