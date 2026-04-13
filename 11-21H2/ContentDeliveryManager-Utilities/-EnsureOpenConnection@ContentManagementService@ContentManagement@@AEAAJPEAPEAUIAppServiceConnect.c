/*
 * XREFs of ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18005B130
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180063B30 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d___ @ 0x180052E84 (_anonymous_namespace_--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Applic.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180060BA4 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ContentManagement::ContentManagementService::EnsureOpenConnection(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *Ptr; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection **v5; // rdx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v6; // rcx
  int v7; // eax
  int v8; // ebx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v9; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v11; // rbx
  __int64 (__fastcall *v12)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *, _QWORD, RTL_SRWLOCK *); // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v15; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v16; // rdx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v17; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v18; // rbx
  PVOID v19; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+30h]
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v21; // [rsp+60h] [rbp+38h] BYREF
  __int64 v22; // [rsp+68h] [rbp+40h] BYREF
  RTL_SRWLOCK *v23; // [rsp+70h] [rbp+48h] BYREF
  RTL_SRWLOCK *v24; // [rsp+78h] [rbp+50h]

  Ptr = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    Ptr = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  }
  *a2 = Ptr;
  if ( Ptr )
    return 0LL;
  AcquireSRWLockExclusive(this + 15);
  v24 = this + 15;
  v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v6 + 8LL))(v6);
    v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  }
  *a2 = v6;
  if ( v6 )
  {
LABEL_28:
    if ( this != (RTL_SRWLOCK *)-120LL )
      ReleaseSRWLockExclusive(this + 15);
    return 0LL;
  }
  v21 = 0LL;
  v7 = ContentManagement::OpenAndValidateConnection((ContentManagement *)&v21, v5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = v21;
    v12 = *(__int64 (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *, _QWORD, RTL_SRWLOCK *))(*(_QWORD *)v21 + 112LL);
    v23 = this;
    v13 = anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d___(
            &v22,
            &v23);
    v8 = v12(v11, *v13, this + 17);
    v14 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v8);
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_10;
    }
    v16 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
    v17 = v21;
    if ( v16 != v21 )
    {
      v18 = v21;
      v19 = this[16].Ptr;
      if ( v21 )
      {
        (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *, struct Windows::ApplicationModel::AppService::IAppServiceConnection *, PVOID))(*(_QWORD *)v21 + 8LL))(
          v21,
          v16,
          v19);
        v19 = this[16].Ptr;
        v17 = v21;
      }
      this[16].Ptr = v18;
      v16 = v18;
      if ( v19 )
      {
        (*(void (__fastcall **)(PVOID, struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v19 + 16LL))(
          v19,
          v18);
        v16 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
        v17 = v21;
      }
    }
    if ( v16 )
    {
      (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v16 + 8LL))(v16);
      v16 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
      v17 = v21;
    }
    *a2 = v16;
    if ( v17 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x291,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v7);
  v9 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_10:
  if ( this != (RTL_SRWLOCK *)-120LL )
    ReleaseSRWLockExclusive(this + 15);
  return (unsigned int)v8;
}
