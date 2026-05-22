/*
 * XREFs of ?Thunk_AckProxyReference_14@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@_N@Z @ 0x1800981E0 (-AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@_N@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18009BC48 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall IBamoPeer_MPCManagerBamo_AutoBamos_Receive<BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_14(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        __int64 a2)
{
  char v3; // di
  Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax

  v3 = **(_BYTE **)(a2 + 8);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
                *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
                **(_DWORD **)a2);
  if ( Principal )
    Microsoft::BamoImpl::BamoPrincipalImpl::AckProxyReference(Principal, a1, v3);
  return 0LL;
}
