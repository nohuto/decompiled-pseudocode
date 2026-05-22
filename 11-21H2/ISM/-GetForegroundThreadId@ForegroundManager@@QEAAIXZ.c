/*
 * XREFs of ?GetForegroundThreadId@ForegroundManager@@QEAAIXZ @ 0x18008ABA4
 * Callers:
 *     ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x1801542F0 (-DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ForegroundManager::GetForegroundThreadId(ForegroundManager *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 67) + 8LL) + 48LL))(*((_QWORD *)this + 67) + 8LL);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 8) + 88LL))(v1 + 8);
  return result;
}
