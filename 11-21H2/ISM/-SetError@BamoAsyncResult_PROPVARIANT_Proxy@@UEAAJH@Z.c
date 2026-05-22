/*
 * XREFs of ?SetError@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJH@Z @ 0x18015E3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetError@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJH@Z @ 0x18015E40C (-SetError@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJH@Z.c)
 */

__int64 __fastcall BamoAsyncResult_PROPVARIANT_Proxy::SetError(BamoAsyncResult_PROPVARIANT_Proxy *this, int a2)
{
  BamoAsyncResult_PROPVARIANT_Proxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl::SetError(
                  (BamoAsyncResult_PROPVARIANT_Proxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7, v4, v5);
  return (unsigned int)v3;
}
