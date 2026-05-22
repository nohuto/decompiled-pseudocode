/*
 * XREFs of ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18009A30C
 * Callers:
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x18009A430 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@@Z @ 0x180098D2C (-InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerIm.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z @ 0x180099C5C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
        char **this,
        __int64 a2,
        char *a3,
        char a4)
{
  __int64 v7; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *v8; // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *v9; // rbx
  __int64 v10; // r8
  int v11; // eax
  const char *v12; // r9
  char *v13; // rax
  char *v14; // rcx
  char *v15; // rdx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::BamoImpl::BamoStubImpl *v19; // [rsp+40h] [rbp+8h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v20; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected((Microsoft::BamoImpl::BaseBamoPeerImpl *)a3, 0, &v19, &v20);
  v8 = v19;
  if ( v19 )
  {
    do
    {
      v9 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v8 + 7);
      *((_QWORD *)v8 + 7) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)v8 + 8LL))(v8);
      v8 = v9;
    }
    while ( v9 );
  }
  Microsoft::BamoImpl::BamoAsyncOperationCoordinator::InvalidateAllRequests(
    (Microsoft::BamoImpl::BamoAsyncOperationCoordinator *)(a3 + 72),
    (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)a3,
    v7);
  LOBYTE(v10) = a4;
  v11 = (*((__int64 (__fastcall **)(char **, char *, __int64))*this + 7))(this, a3, v10);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x78C,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      v17);
  v13 = this[14];
  v14 = 0LL;
  while ( 1 )
  {
    if ( !v13 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2087LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v12);
    if ( v13 == a3 )
      break;
    v14 = v13;
    v13 = (char *)*((_QWORD *)v13 + 8);
  }
  v15 = (char *)*((_QWORD *)a3 + 8);
  if ( v14 )
    *((_QWORD *)v14 + 8) = v15;
  else
    this[14] = v15;
  *((_QWORD *)a3 + 8) = 0LL;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3);
  return 0LL;
}
