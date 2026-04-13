/*
 * XREFs of ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x180048F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180084408 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIAppManager@ContentManagement@@@WRL@Microsoft@@@012@AEAPEAUIUser@System@Windows@@@Z @ 0x180085024 (--$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_AppManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IAppManager **a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // rcx
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // [rsp+38h] [rbp+18h] BYREF
  __int64 v17; // [rsp+40h] [rbp+20h] BYREF

  *a2 = 0LL;
  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", (const unsigned __int16 *)&v16, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 113LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v6);
    v8 = 1000LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !(_BYTE)v16 )
  {
    v5 = -2147024891;
    v6 = 2147942405LL;
    v7 = 114LL;
    goto LABEL_5;
  }
  v17 = 0LL;
  v16 = 0LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppManager,ContentManagement::IAppManager,Windows::System::IUser * &>(
          &v16,
          &v17);
  v5 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v10);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IAppManager **)))(*v11)[2])(v11);
    }
LABEL_14:
    v8 = 1002LL;
    goto LABEL_6;
  }
  v12 = (**v16)(v16, &GUID_8c1d35c6_1c6c_4e16_9799_12b4f4b195b2, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x207,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v12);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IAppManager **)))(*v13)[2])(v13);
    }
    goto LABEL_14;
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IAppManager **)))(*v14)[2])(v14);
  }
  return 0LL;
}
