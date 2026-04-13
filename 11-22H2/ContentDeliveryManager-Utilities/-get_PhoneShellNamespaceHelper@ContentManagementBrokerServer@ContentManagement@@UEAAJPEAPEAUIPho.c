/*
 * XREFs of ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x1800447B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VPhoneShellNamespaceHelper@ContentManagement@@UIPhoneShellNamespaceHelper@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIPhoneShellNamespaceHelper@ContentManagement@@@Z @ 0x180027684 (--$MakeAndInitialize@VPhoneShellNamespaceHelper@ContentManagement@@UIPhoneShellNamespaceHelper@2.c)
 *     ?EnforceCapability@ContentManagement@@YAJXZ @ 0x18003153C (-EnforceCapability@ContentManagement@@YAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_PhoneShellNamespaceHelper(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IPhoneShellNamespaceHelper **a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ContentManagement::IPhoneShellNamespaceHelper **); // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = ContentManagement::EnforceCapability(this, (__int64)a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::PhoneShellNamespaceHelper,ContentManagement::IPhoneShellNamespaceHelper,>(&v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v6 = (**v10)(v10, &GUID_66fbdb55_757a_4e3a_975d_ad5f9afbd372, a2);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 1212LL;
    }
    else
    {
      v7 = 1211LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
