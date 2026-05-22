/*
 * XREFs of ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x1801719A0
 * Callers:
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x180171400 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180171500 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CB78 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemButtonEventControllerManager::UnregisterController(
        SystemButtonEventControllerManager *this,
        struct SystemButtonEventController *a2)
{
  __int64 (__fastcall ***v4)(_QWORD); // rdi
  __int64 (__fastcall ***v5)(_QWORD); // rbx
  __int64 *v6; // rcx
  __int64 *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD); // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+40h] [rbp+18h] BYREF

  v8 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 7);
  v4 = v8;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v8);
  v5 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 6);
  v9 = v5;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v9);
  v6 = (__int64 *)(v4 + 6);
  if ( !v4 )
    v6 = (__int64 *)this;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=(v6, &v9);
  v7 = (__int64 *)(v5 + 7);
  if ( !v5 )
    v7 = (__int64 *)((char *)this + 8);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=(v7, &v8);
  if ( v5 )
    (*v5)[1](v5);
  if ( v4 )
    (*v4)[1](v4);
}
