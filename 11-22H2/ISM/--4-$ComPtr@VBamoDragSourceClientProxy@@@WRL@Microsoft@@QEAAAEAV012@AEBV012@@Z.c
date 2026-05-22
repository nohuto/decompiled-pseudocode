/*
 * XREFs of ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016ADF8
 * Callers:
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180052220 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18016E140 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18016E72C (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18016EC50 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x18017F7B0 (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD); // rdi
  __int64 v4; // rcx
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD))*a2;
  if ( *a1 != *a2 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD))*a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v6);
    v4 = *a1;
    *a1 = (__int64)v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return a1;
}
