/*
 * XREFs of ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x18016E420
 * Callers:
 *     ?Thunk_SetBootstrapProxy_34@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016EBD0 (-Thunk_SetBootstrapProxy_34@-$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompw.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18016BE84 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18016EEF4 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v5; // edx
  unsigned int v6; // r8d
  struct Microsoft::BamoImpl::BamoProxyImpl *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64); // rbx
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(this, *((_DWORD *)a2 + 9), a3);
  v7 = Proxy;
  if ( Proxy )
  {
    v11 = *((_QWORD *)this + 2);
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL);
    v13 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)Proxy + 56LL))(Proxy);
    v14 = v12(v11, v13);
    v9 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -2018375668 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1842LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v14,
          v17);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, v15, v16);
    }
    else if ( *((_BYTE *)v7 + 30) )
    {
      Microsoft::BamoImpl::BamoProxyImpl::Disconnect(v7, 0);
    }
    else if ( !*((_BYTE *)v7 + 29) )
    {
      LOBYTE(v16) = *((_DWORD *)v7 + 2) > 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 2) + 64LL))(
        *((_QWORD *)v7 + 2),
        *((unsigned int *)v7 + 6),
        v16);
    }
  }
  else
  {
    v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, v5, v6);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x703,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v8);
  }
  return v9;
}
