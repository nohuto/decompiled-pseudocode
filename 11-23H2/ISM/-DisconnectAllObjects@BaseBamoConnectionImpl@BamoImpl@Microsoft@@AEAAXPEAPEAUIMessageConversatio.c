/*
 * XREFs of ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1800AED24
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800AF55C (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18009EAE0 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18009EC24 (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x1800B072C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::BamoImpl::ConnectionIndirector **a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v16; // rdi
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rbx
  int v18; // eax
  int v19; // edx
  struct Microsoft::BamoImpl::ConnectionIndirector *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v26; // [rsp+80h] [rbp+18h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v26, this[12]);
  v9 = this[8];
  *a2 = v9;
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v9 + 8LL))(v9);
  *a3 = this[14];
  *a4 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
    v10,
    v11,
    v12);
  v16 = 0LL;
  for ( i = this[14]; i; i = this[14] )
  {
    this[14] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 8);
    LOBYTE(v15) = 1;
    v18 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *, _QWORD, _QWORD, const char *))(*(_QWORD *)this[8] + 72LL))(
            this[8],
            *((unsigned int *)i + 9),
            0LL,
            v15);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3D9,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v18,
        (int)Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown);
    LOBYTE(v19) = 1;
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected((_DWORD)i, v19, a5, (unsigned int)&v24, (__int64)&v25);
    if ( *a4 )
      *(_QWORD *)(v16 + 48) = v24;
    else
      *a4 = v24;
    v16 = v25;
  }
  v20 = this[8];
  this[8] = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v20 + 16LL))(v20);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
    v13,
    v14,
    v15);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v26, v21, v22);
}
