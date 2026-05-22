/*
 * XREFs of ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009B7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18009BC48 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5(
        __int64 a1,
        unsigned int **a2)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  __int64 *i; // rdx
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
                *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
                **a2);
  if ( Principal )
  {
    for ( i = (__int64 *)*((_QWORD *)Principal + 4); i; i = (__int64 *)i[6] )
    {
      if ( *(_DWORD *)(i[5] + 36) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Principal + 2) + 32LL) + 32LL) )
        break;
    }
    v4 = *i;
    *((_BYTE *)i + 33) = 1;
    v5 = (*(__int64 (__fastcall **)(__int64 *))(v4 + 64))(i);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xEC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)(unsigned int)v5,
        v7);
  }
  return 0LL;
}
