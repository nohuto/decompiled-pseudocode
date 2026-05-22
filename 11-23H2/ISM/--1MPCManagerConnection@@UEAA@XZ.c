/*
 * XREFs of ??1MPCManagerConnection@@UEAA@XZ @ 0x1800AE740
 * Callers:
 *     ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x1800AE970 (--_EMPCManagerConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCManagerConnection::~MPCManagerConnection(MPCManagerConnection *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 8LL))(v2 + 16);
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 8LL))(v3 + 16);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((MPCManagerConnection *)((char *)this + 8));
}
