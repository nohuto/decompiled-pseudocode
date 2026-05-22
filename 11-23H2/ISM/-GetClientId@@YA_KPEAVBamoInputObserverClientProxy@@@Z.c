/*
 * XREFs of ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x180148C68
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180148D90 (-RegisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180148ED0 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetClientId(struct BamoInputObserverClientProxy *a1)
{
  __int64 v1; // rbx

  v1 = *((unsigned int *)a1 + 10);
  return (v1 << 32) | *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 4) + 16LL)
                                                                          + 8LL))(*(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL))
                                      + 36);
}
