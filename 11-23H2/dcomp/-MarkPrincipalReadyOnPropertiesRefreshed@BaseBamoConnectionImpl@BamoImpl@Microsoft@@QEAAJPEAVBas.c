/*
 * XREFs of ?MarkPrincipalReadyOnPropertiesRefreshed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x18016D0F0
 * Callers:
 *     ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_34@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016E990 (-Thunk_MarkPrincipalReadyOnPropertiesRefreshed_34@-$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receiv.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18016EEA4 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::MarkPrincipalReadyOnPropertiesRefreshed(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *i; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(this, a3);
  if ( Principal )
  {
    for ( i = (__int64 *)*((_QWORD *)Principal + 4); i; i = (__int64 *)i[5] )
    {
      if ( *(_DWORD *)(i[4] + 36) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Principal + 2) + 32LL) + 32LL) )
        break;
    }
    v11 = *i;
    *((_BYTE *)i + 57) = 1;
    v12 = (*(__int64 (__fastcall **)(__int64 *))(v11 + 64))(i);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        263LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)(unsigned int)v12,
        v13);
    return 0LL;
  }
  else
  {
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, v5, v6);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x604,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7);
    return v8;
  }
}
