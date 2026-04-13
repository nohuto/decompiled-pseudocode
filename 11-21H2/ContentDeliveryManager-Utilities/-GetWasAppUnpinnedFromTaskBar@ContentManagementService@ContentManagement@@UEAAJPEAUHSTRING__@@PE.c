/*
 * XREFs of ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18005F590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18005DFC4 (-GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::GetWasAppUnpinnedFromTaskBar(
        RTL_SRWLOCK *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  int LocalTilePropertiesForApp; // ebx
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v5; // rcx
  int v7; // eax
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v8; // rcx
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  v11 = 0LL;
  LocalTilePropertiesForApp = ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
                                this - 12,
                                a2,
                                &v11);
  if ( LocalTilePropertiesForApp < 0 )
  {
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)LocalTilePropertiesForApp;
  }
  v7 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *, unsigned __int8 *))(*(_QWORD *)v11 + 80LL))(
         v11,
         a3);
  LocalTilePropertiesForApp = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return (unsigned int)LocalTilePropertiesForApp;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
