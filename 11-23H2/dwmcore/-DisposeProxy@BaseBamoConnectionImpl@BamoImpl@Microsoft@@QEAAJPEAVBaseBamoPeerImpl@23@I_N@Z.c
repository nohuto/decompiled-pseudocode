/*
 * XREFs of ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x1801B9354
 * Callers:
 *     ?Thunk_DisposeProxy_37@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801BB440 (-Thunk_DisposeProxy_37@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diagnosti.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1800D65D8 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B7200 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1801B8FB8 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801BB710 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3,
        char a4)
{
  int *Proxy; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  const char *v13; // r9
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Proxy = (int *)Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(this, *((_DWORD *)a2 + 9), a3);
  if ( Proxy )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 40LL))(
            *((_QWORD *)this + 8),
            *((unsigned int *)a2 + 9),
            a3,
            0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1692LL,
        (__int64)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v12,
        v14);
    if ( !a4 && Proxy[2] > 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6A4,
        (int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v13);
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect((Microsoft::BamoImpl::BamoProxyImpl *)Proxy, 0);
    if ( a4 && !*((_BYTE *)a2 + 49) )
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a3);
    return 0LL;
  }
  else
  {
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, -2018375668, 0);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x699,
        (int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v9);
    return v10;
  }
}
