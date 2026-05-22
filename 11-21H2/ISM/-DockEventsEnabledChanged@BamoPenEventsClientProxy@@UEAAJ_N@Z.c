/*
 * XREFs of ?DockEventsEnabledChanged@BamoPenEventsClientProxy@@UEAAJ_N@Z @ 0x18003EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DockEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x18003E820 (-DockEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

__int64 __fastcall BamoPenEventsClientProxy::DockEventsEnabledChanged(BamoPenEventsClientProxy *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r8
  const char *v10; // r9
  Microsoft::BamoImpl::BamoImplObject *v11; // rcx
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOBYTE(v4) = a2;
  v8 = BamoImpl::BamoPenEventsClientProxyImpl::DockEventsEnabledChanged(
         (BamoPenEventsClientProxy *)((char *)this + 8),
         v4,
         v5,
         v6);
  v11 = v13;
  if ( v13 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v13 + 4));
    v11 = v13;
  }
  if ( v11 )
    Microsoft::BamoImpl::BamoImplObject::Release(v11, v7, v9, v10);
  return v8;
}
