/*
 * XREFs of ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x1800B1068
 * Callers:
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x1800B2070 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 * Callees:
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18000B4A0 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800B1030 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800B1174 (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1800B11C8 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Dispose(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rbp
  const char *v6; // r9
  unsigned int v7; // edx
  _QWORD *i; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *j; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(v5, a2, a3, a4);
  v7 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 6) = 0;
  if ( *((_QWORD *)v5 + 8) && v7 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(v5, v7);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i; i = (_QWORD *)i[5] )
  {
    v9 = i[4];
    v10 = 0LL;
    for ( j = *(_QWORD **)(v9 + 56); j; j = (_QWORD *)j[6] )
    {
      if ( j == i )
      {
        v12 = i[6];
        if ( v10 )
          v10[6] = v12;
        else
          *(_QWORD *)(v9 + 56) = v12;
        i[6] = 0LL;
        break;
      }
      v10 = j;
    }
    if ( !j )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x101,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPeer.inl",
        v6);
    Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal((__int64)i, 1, 0LL);
  }
  v13 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(v5);
  if ( v13 )
  {
    do
    {
      v14 = (_QWORD *)v13[5];
      v13[5] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
      v13 = v14;
    }
    while ( v14 );
  }
}
