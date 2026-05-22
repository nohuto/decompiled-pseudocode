/*
 * XREFs of ??$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEAVBamoActivationControllerProxy@@@Z @ 0x18004CD18
 * Callers:
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18004CDE4 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::Bamo::BaseBamoConnection::TryGetProxy<BamoActivationControllerProxy>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v7; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct Microsoft::BamoImpl::BamoProxyImpl *v11; // rbx
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+30h] [rbp+8h] BYREF

  v7 = (struct Microsoft::BamoImpl::ConnectionIndirector **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a4 = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, v7[12]);
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v7,
            a2,
            a3);
  v11 = Proxy;
  if ( Proxy )
  {
    *a4 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)Proxy + 56LL))(Proxy);
    (**(void (__fastcall ***)(struct Microsoft::BamoImpl::BamoProxyImpl *))v11)(v11);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v12, v9, v10);
}
