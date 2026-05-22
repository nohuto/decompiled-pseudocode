/*
 * XREFs of ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800B6128
 * Callers:
 *     ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B8450 (-OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x1800B8400 (-GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ.c)
 */

void __fastcall ForegroundManager::UnregisterActivationController(
        ForegroundManager *this,
        struct ActivationControllerBamoProxy *a2)
{
  char *v2; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 Cookie; // rdi
  const struct _LUID *v6; // rbx
  unsigned __int64 v7; // rax

  v2 = (char *)a2 + 8;
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  Cookie = ActivationControllerBamoProxy::GetCookie(a2);
  v6 = (const struct _LUID *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 48LL))(v2);
  v7 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
  InputTraceLogging::ForegroundManagerServer::UnregisterActivationController(v7, v6, Cookie, v4);
}
