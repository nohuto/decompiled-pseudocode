/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x18016D390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18016A878 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016AC8C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z @ 0x18016CAE0 (-IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  Microsoft::BamoImpl::BamoImplObject *v14; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v14,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  v10 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)*((_QWORD *)this + 2);
  v11 = 0;
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::IsPendingRemovalFromItemTable(v10, a3) )
  {
    *((_DWORD *)v10 + 8) = a2;
    v12 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 32LL))(a4, a5, a6);
    *((_DWORD *)v10 + 8) = 0;
    v11 = v12;
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v14);
  return v11;
}
