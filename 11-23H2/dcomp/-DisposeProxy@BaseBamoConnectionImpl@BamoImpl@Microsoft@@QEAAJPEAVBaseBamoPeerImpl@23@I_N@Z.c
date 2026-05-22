/*
 * XREFs of ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x18016C214
 * Callers:
 *     ?Thunk_DisposeProxy_37@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016E960 (-Thunk_DisposeProxy_37@-$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18016BE84 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18016EEF4 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3,
        char a4)
{
  int v8; // edx
  int *Proxy; // rdi
  unsigned int v10; // r8d
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // eax
  const char *v15; // r9
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Proxy = (int *)Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(this, *((_DWORD *)a2 + 9), a3);
  if ( Proxy )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 40LL))(
            *((_QWORD *)this + 8),
            *((unsigned int *)a2 + 9),
            a3,
            0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1692LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v14,
        v16);
    if ( !a4 && Proxy[2] > 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1700LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v15);
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect((Microsoft::BamoImpl::BamoProxyImpl *)Proxy, 0);
    if ( a4 && !*((_BYTE *)a2 + 49) )
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, a3);
    return 0LL;
  }
  else
  {
    v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, v8, v10);
    v12 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x699,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11);
    return v12;
  }
}
