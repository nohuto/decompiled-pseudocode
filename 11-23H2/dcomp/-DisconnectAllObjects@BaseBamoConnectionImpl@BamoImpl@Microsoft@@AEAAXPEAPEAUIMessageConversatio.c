/*
 * XREFs of ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x18016BEBC
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016CE4C (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18016A878 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016AC8C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016BE4C (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016C334 (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x18016D27C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 i; // rdi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v23; // [rsp+80h] [rbp+18h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v23,
    *((struct Microsoft::BamoImpl::ConnectionIndirector **)this + 12));
  v9 = *((_QWORD *)this + 8);
  *a2 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *((_QWORD *)this + 14);
  *a4 = 0LL;
  *a3 = v10;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(this, v11, v12, v13);
  v15 = *((_QWORD *)this + 14);
  for ( i = 0LL; v15; i = v22 )
  {
    v17 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 14) = *(_QWORD *)(v15 + 64);
    LOBYTE(v14) = 1;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 72LL))(
            v17,
            *(unsigned int *)(v15 + 36),
            0LL,
            v14);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        985LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v18,
        (int)Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown);
    LOBYTE(v19) = 1;
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(v15, v19, a5, (unsigned int)&v21, (__int64)&v22);
    if ( *a4 )
      *(_QWORD *)(i + 48) = v21;
    else
      *a4 = v21;
    v15 = *((_QWORD *)this + 14);
  }
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(this);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v23);
}
