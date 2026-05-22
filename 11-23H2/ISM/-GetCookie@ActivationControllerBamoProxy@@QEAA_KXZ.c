/*
 * XREFs of ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x1800A5960
 * Callers:
 *     ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800A36A8 (-UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall ActivationControllerBamoProxy::GetCookie(ActivationControllerBamoProxy *this)
{
  return *((unsigned int *)this + 10)
       + ((unsigned __int64)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4)
                                                                                              + 16LL)
                                                                                + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4)
                                                                                                  + 16LL))
                                            + 36) << 32);
}
