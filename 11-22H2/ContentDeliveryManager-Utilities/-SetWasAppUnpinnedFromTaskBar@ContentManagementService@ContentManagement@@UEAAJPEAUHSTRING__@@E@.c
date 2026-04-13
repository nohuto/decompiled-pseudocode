/*
 * XREFs of ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x18005E440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x1800589E4 (-GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementService::SetWasAppUnpinnedFromTaskBar(
        ContentManagement::ContentManagementService *this,
        HSTRING a2,
        char a3)
{
  ContentManagement::ContentManagementService *v5; // rbx
  __int64 v6; // rdx
  int LocalTilePropertiesForApp; // ebx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v5 = (ContentManagement::ContentManagementService *)((char *)this - 96);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  LocalTilePropertiesForApp = ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(v5, a2, &v11);
  if ( LocalTilePropertiesForApp >= 0 )
  {
    LOBYTE(v6) = a3;
    v8 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *, __int64))(*(_QWORD *)v11 + 88LL))(
           v11,
           v6);
    LocalTilePropertiesForApp = v8;
    if ( v8 >= 0 )
      LocalTilePropertiesForApp = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return (unsigned int)LocalTilePropertiesForApp;
}
