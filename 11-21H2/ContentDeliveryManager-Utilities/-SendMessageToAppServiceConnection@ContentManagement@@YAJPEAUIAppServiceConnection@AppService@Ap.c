/*
 * XREFs of ?SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180064298
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180063B30 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180053BEC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::SendMessageToAppServiceConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v3; // eax
  signed int v4; // edx
  void **v5; // r8
  unsigned int v6; // ebx
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rcx
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // rcx
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v17; // rcx
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  char *v19; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char *v21; // [rsp+50h] [rbp+20h] BYREF
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v23; // [rsp+68h] [rbp+38h] BYREF

  v22 = 0LL;
  v3 = (*(__int64 (__fastcall **)(ContentManagement *, struct Windows::ApplicationModel::AppService::IAppServiceConnection *, _QWORD))(*(_QWORD *)this + 88LL))(
         this,
         a2,
         &v22);
  v6 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    v7 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
    }
    return v6;
  }
  v23 = 0LL;
  v8 = v22;
  v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>(
         v22,
         v4,
         v5);
  if ( (v6 & 0x80000000) != 0
    || (v6 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v8)[8])(v8, &v23),
        (v6 & 0x80000000) != 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v6);
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v18)[2])(v18);
    }
    return v6;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v23 + 56LL))(v23, &v21);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v9);
    v10 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
    }
    return v6;
  }
  if ( (_DWORD)v21 )
  {
    LODWORD(v19) = (_DWORD)v21;
    v6 = -2147023269;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xEE,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)0x8007065BLL,
      (int)"AppServiceResponseStatus: %d",
      v19);
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[2])(v13);
    }
    return v6;
  }
  v14 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v15)[2])(v15);
  }
  return 0LL;
}
