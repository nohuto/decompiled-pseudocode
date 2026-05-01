/*
 * XREFs of ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x18010724C
 * Callers:
 *     ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180173570 (-CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x1802F1150 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CRotationManagerSync::_CheckForInitialSuppression(CRotationManagerSync *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  int v4; // edi
  char *v5; // [rsp+20h] [rbp-30h] BYREF
  char v6; // [rsp+28h] [rbp-28h]
  CRotationManagerSync *v7; // [rsp+30h] [rbp-20h] BYREF
  char *v8; // [rsp+38h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp-10h]
  CRotationManagerSync *v10; // [rsp+68h] [rbp+18h] BYREF

  v2 = (char *)OpenMutexW(0x100000u, 0, L"ShellRMSM");
  v5 = v2;
  v10 = 0LL;
  v6 = 0;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v10);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *((_BYTE *)this + 128) = 1;
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v7 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    v8 = v2;
    v5 = 0LL;
    v9 = 0;
    v6 = 1;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___(v3, &v7);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v8);
    if ( v7 )
      (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v4 < 0 )
      *((_BYTE *)this + 128) = 0;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 16LL))(this);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v5);
}
