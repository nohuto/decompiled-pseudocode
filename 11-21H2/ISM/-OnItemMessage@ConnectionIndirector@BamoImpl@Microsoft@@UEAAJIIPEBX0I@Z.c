/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1800197F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004662C (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // rax
  _DWORD *v13; // rcx
  void (__fastcall ***v14)(_QWORD); // rax
  void (__fastcall ***v15)(_QWORD); // rbx
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 v18; // r8
  const char *v19; // r9
  Microsoft::BamoImpl::BamoImplObject *v20; // rcx
  void (__fastcall ***v22)(_QWORD); // [rsp+20h] [rbp-28h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v23; // [rsp+50h] [rbp+8h] BYREF

  v9 = *((_QWORD *)this + 2);
  v22 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v23,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v9 + 96));
  v12 = *(_DWORD **)(v9 + 192);
  v13 = *(_DWORD **)(v9 + 200);
  if ( v12 == v13 )
  {
LABEL_2:
    v14 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(const void *))(*(_QWORD *)a4 + 40LL))(a4);
    v15 = v14;
    v22 = v14;
    if ( v14 )
      (**v14)(v14);
    *(_DWORD *)(v9 + 32) = a2;
    v17 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 32LL))(a4, a5, a6);
    *(_DWORD *)(v9 + 32) = 0;
    v20 = v23;
    if ( v23 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v23 + 4));
      v20 = v23;
    }
    if ( v20 )
      Microsoft::BamoImpl::BamoImplObject::Release(v20, v16, v18, v19);
    if ( v15 )
      (*v15)[1](v15);
    return v17;
  }
  else
  {
    while ( *v12 != a3 )
    {
      if ( ++v12 == v13 )
        goto LABEL_2;
    }
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v23, v10, v11);
    wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>(&v22);
    return 0LL;
  }
}
