/*
 * XREFs of ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x180169F90
 * Callers:
 *     ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180169EB0 (-CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x1803A9A3C (Windows--Internal--ComTaskPool--QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CRotationManagerSync::_CheckForInitialSuppression(CRotationManagerSync *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  int v4; // ebx
  CRotationManagerSync *v5; // [rsp+20h] [rbp-28h] BYREF
  HANDLE hObject; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]
  CRotationManagerSync *v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = (char *)OpenMutexW(0x100000u, 0, L"ShellRMSM");
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *((_BYTE *)this + 128) = 1;
    v8 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v5 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
    hObject = v2;
    v7 = 0;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___(v3, &v5);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v5 )
      (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 < 0 )
      *((_BYTE *)this + 128) = 0;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 16LL))(this);
  }
}
