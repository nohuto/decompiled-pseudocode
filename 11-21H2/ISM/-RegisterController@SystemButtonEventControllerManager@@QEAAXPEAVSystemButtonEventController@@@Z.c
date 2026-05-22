/*
 * XREFs of ?RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180152C10
 * Callers:
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180152480 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013DA08 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventController@@@Z @ 0x180152B2C (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventContr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemButtonEventControllerManager::RegisterController(
        SystemButtonEventControllerManager *this,
        struct SystemButtonEventController *a2)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD))a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v5);
    v4 = (_QWORD *)((char *)this + 8);
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(*v4 + 48LL), &v5);
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)a2 + 7, v4);
    if ( a2 )
      (*(void (__fastcall **)(struct SystemButtonEventController *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  else
  {
    Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(this, (__int64 (__fastcall ***)(_QWORD))a2);
    v4 = (_QWORD *)((char *)this + 8);
  }
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v4, (__int64 (__fastcall ***)(_QWORD))a2);
}
