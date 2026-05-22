/*
 * XREFs of ?Thunk_ProxyDisposed_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B2530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800506C8 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?ProxyDisposed@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@@Z @ 0x1800B1020 (-ProxyDisposed@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@@Z.c)
 */

__int64 __fastcall IBamoPeer_MPCManagerBamo_AutoBamos_Receive<BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl>::Thunk_ProxyDisposed_11(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  __int64 v5; // r8
  const char *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v3, **a2);
  if ( Principal )
  {
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::ProxyDisposed(Principal, a1, v5, v6) )
      return 0;
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)v3,
           0x87B2080C,
           0);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1758LL;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)v3,
           0x87B2080C,
           0);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1749LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7);
    }
  }
  return v8;
}
