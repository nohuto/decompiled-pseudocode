/*
 * XREFs of ?OnComponentWindowActivated@BamoCUIHostInputObjectProxy@@UEAAJ_N@Z @ 0x180140E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnComponentWindowActivated@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180140E6C (-OnComponentWindowActivated@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

__int64 __fastcall BamoCUIHostInputObjectProxy::OnComponentWindowActivated(BamoCUIHostInputObjectProxy *this, bool a2)
{
  BamoCUIHostInputObjectProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoCUIHostInputObjectProxyImpl::OnComponentWindowActivated(
                  (BamoCUIHostInputObjectProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
