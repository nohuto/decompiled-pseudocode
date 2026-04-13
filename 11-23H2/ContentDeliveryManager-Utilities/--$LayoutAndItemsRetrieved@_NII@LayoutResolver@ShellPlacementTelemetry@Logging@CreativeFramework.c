/*
 * XREFs of ??$LayoutAndItemsRetrieved@_NII@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEA_N$$QEAI1@Z @ 0x1800C572C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CAB98 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001D54 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18005C1DC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::LayoutAndItemsRetrieved<bool,unsigned int,unsigned int>(
        __int64 a1,
        char *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // r9d
  int v10; // edx
  __int64 v11; // r8
  char v13; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+34h] [rbp-25h] BYREF
  int v15; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-19h] BYREF
  char *v17; // [rsp+60h] [rbp+7h]
  __int64 v18; // [rsp+68h] [rbp+Fh]
  int *v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+78h] [rbp+1Fh]
  int *v21; // [rsp+80h] [rbp+27h]
  __int64 v22; // [rsp+88h] [rbp+2Fh]

  v8 = CreativeFramework::Logging::ShellPlacementLogging::Provider(a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a4;
    v10 = *a3;
    v11 = *(_QWORD *)(a1 + 48);
    v13 = *a2;
    v14 = v9;
    v21 = &v14;
    v15 = v10;
    v19 = &v15;
    v22 = 4LL;
    v17 = &v13;
    v20 = 4LL;
    v18 = 1LL;
    LODWORD(v8) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v8,
                    (unsigned __int8 *)dword_18017E0AD,
                    (const GUID *)(v11 + 8),
                    0LL,
                    5u,
                    &v16);
  }
  return (int)v8;
}
