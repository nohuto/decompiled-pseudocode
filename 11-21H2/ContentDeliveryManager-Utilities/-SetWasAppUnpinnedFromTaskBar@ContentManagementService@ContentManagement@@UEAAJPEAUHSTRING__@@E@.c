/*
 * XREFs of ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x180064A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18005DFC4 (-GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::SetWasAppUnpinnedFromTaskBar(
        RTL_SRWLOCK *this,
        HSTRING a2,
        char a3)
{
  __int64 v4; // rdx
  int LocalTilePropertiesForApp; // ebx
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v6; // rcx
  int v8; // eax
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v9; // rcx
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  LocalTilePropertiesForApp = ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
                                this - 12,
                                a2,
                                &v12);
  if ( LocalTilePropertiesForApp < 0 )
  {
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)LocalTilePropertiesForApp;
  }
  LOBYTE(v4) = a3;
  v8 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *, __int64))(*(_QWORD *)v12 + 88LL))(
         v12,
         v4);
  LocalTilePropertiesForApp = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return (unsigned int)LocalTilePropertiesForApp;
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
