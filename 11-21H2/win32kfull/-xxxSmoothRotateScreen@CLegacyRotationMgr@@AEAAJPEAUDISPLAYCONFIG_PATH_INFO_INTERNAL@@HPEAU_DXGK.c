/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01CE29C
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01CDCF8 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C009D460 (IsCurrentDesktopComposed.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C00D14C0 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01CD538 (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C0272938 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v7; // r15d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  int v12; // esi
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *v19; // rax
  unsigned int v21; // [rsp+60h] [rbp-69h] BYREF
  int v22; // [rsp+64h] [rbp-65h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v24[4]; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v26; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+A8h] [rbp-21h]
  int *v28; // [rsp+B0h] [rbp-19h]
  __int64 v29; // [rsp+B8h] [rbp-11h]
  int *v30; // [rsp+C0h] [rbp-9h]
  __int64 v31; // [rsp+C8h] [rbp-1h]
  int *v32; // [rsp+D0h] [rbp+7h]
  __int64 v33; // [rsp+D8h] [rbp+Fh]

  v7 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a2 + 26));
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v24, gRotationProcessLock);
  if ( grpdeskRitInput && (v8 = *(_QWORD *)(grpdeskRitInput + 248LL)) != 0 )
    v9 = *(_DWORD *)(v8 + 56);
  else
    v9 = 0;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v24);
  EtwTraceSmoothRotationStart(v7, a3, v9);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v12 = IsCurrentDesktopComposed();
  if ( v12 && !v10 )
  {
    v13 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncNotifyRotationModeChange(v13);
    v15 = UserReferenceDwmApiPort(v14);
    UserSessionSwitchLeaveCrit(v16);
    DwmSyncFlushAndWaitForBatch(v15);
    EnterCrit(1LL, 0LL);
  }
  v18 = xxxUserSetDisplayConfig(1LL, a2, 672LL, v12 != 0 ? 24 : 8, 0LL, 0, 0LL, 0LL, 0LL, a4, 0LL);
  if ( v12 && !v10 )
  {
    v19 = (void *)ReferenceDwmApiPort(v17);
    DwmAsyncNotifyRotationModeChange(v19);
  }
  EtwTraceSmoothRotationStop(v7, a3);
  if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x200000000001LL) )
  {
    v21 = v18;
    v32 = (int *)&v21;
    v22 = v12;
    v30 = &v22;
    v23 = a3;
    v28 = (int *)&v23;
    v24[0] = v7;
    v26 = v24;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 4LL;
    v27 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03263F8, (unsigned __int8 *)dword_1C02EDA75, 0LL, 0LL, 6u, &v25);
  }
  return v18;
}
