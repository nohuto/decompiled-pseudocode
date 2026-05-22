/*
 * XREFs of ?AcquireLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ @ 0x180005530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::AcquireLock(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 48LL))(this);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 144));
}
