/*
 * XREFs of ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x1800985D0
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180098DF0 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800879B0 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180087A2C (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z @ 0x180099C5C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::BamoImpl::ConnectionIndirector **a2,
        _QWORD *a3,
        struct Microsoft::BamoImpl::BamoStubImpl **a4)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  struct Microsoft::BamoImpl::BamoStubImpl *v15; // rdi
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rbx
  int v17; // eax
  struct Microsoft::BamoImpl::ConnectionIndirector *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct Microsoft::BamoImpl::BamoStubImpl *v22; // [rsp+70h] [rbp+8h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v23; // [rsp+78h] [rbp+10h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v24; // [rsp+80h] [rbp+18h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v24, this[12]);
  v8 = this[8];
  *a2 = v8;
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v8 + 8LL))(v8);
  *a3 = this[14];
  *a4 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
    v9,
    v10,
    v11);
  v15 = 0LL;
  for ( i = this[14]; i; i = this[14] )
  {
    this[14] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 8);
    LOBYTE(v14) = 1;
    v17 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *, _QWORD, _QWORD, const char *))(*(_QWORD *)this[8] + 72LL))(
            this[8],
            *((unsigned int *)i + 9),
            0LL,
            v14);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B5,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v17,
        (int)Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown);
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(i, 1, &v22, &v23);
    if ( *a4 )
      *((_QWORD *)v15 + 7) = v22;
    else
      *a4 = v22;
    v15 = v23;
  }
  v18 = this[8];
  this[8] = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v18 + 16LL))(v18);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
    v12,
    v13,
    v14);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v24, v19, v20);
}
