/*
 * XREFs of ?Thunk_AckProxyReference_37@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016E730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@_N@Z @ 0x18016B1F0 (-AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18016EEA4 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive<BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_37(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        __int64 a2)
{
  char v3; // si
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v6; // edx
  unsigned int v7; // r8d
  const char *v8; // r9
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // edx
  unsigned int v13; // r8d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = **(_BYTE **)(a2 + 8);
  v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v4, **(_DWORD **)a2);
  if ( Principal )
  {
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AckProxyReference(Principal, a1, v3, v8) )
      return 0;
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v4, v12, v13);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 1613LL;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v4, v6, v7);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 1604LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v9);
    }
  }
  return v10;
}
