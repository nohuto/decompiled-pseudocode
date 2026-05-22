/*
 * XREFs of ?TailButtonEventsEnabledChanged@BamoPenEventsClientProxy@@UEAAJ_N@Z @ 0x180032500
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TailButtonEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180031E84 (-TailButtonEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

__int64 __fastcall BamoPenEventsClientProxy::TailButtonEventsEnabledChanged(BamoPenEventsClientProxy *this, char a2)
{
  BamoPenEventsClientProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOBYTE(v4) = a2;
  LODWORD(v3) = BamoImpl::BamoPenEventsClientProxyImpl::TailButtonEventsEnabledChanged(
                  (BamoPenEventsClientProxy *)((char *)v3 + 8),
                  v4,
                  v5,
                  v6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10, v7, v8);
  return (unsigned int)v3;
}
