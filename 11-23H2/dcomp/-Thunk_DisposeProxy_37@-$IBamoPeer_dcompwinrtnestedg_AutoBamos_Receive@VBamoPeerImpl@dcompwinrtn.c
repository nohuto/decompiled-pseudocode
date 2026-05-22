/*
 * XREFs of ?Thunk_DisposeProxy_37@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive<BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl>::Thunk_DisposeProxy_37(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        __int64 a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
           a1,
           **(_DWORD **)a2,
           **(_BYTE **)(a2 + 8));
}
