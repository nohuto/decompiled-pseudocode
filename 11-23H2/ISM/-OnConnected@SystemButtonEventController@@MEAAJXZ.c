/*
 * XREFs of ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180051940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180051990 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventController@@@Z @ 0x1800519C4 (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventContr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CB78 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemButtonEventController::OnConnected(SystemButtonEventController *this)
{
  struct SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  struct SystemButtonEventControllerManager *v3; // rdi
  _QWORD *v4; // rdi
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+38h] [rbp+10h] BYREF

  SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
  v3 = SystemButtonEventControllerManager;
  if ( *(_QWORD *)SystemButtonEventControllerManager )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD))this;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v6);
    v4 = (_QWORD *)((char *)v3 + 8);
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=(*v4 + 48LL, &v6);
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((char *)this + 56, v4);
    if ( this )
      (*(void (__fastcall **)(SystemButtonEventController *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(SystemButtonEventControllerManager, this);
    v4 = (_QWORD *)((char *)v3 + 8);
  }
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v4, this);
  return 0LL;
}
