/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173118
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0188C5C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02EA660 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0005234 (-PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0008248 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001651C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0016EA4 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01719BC (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0173348 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0173DFC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE3C8 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E7138 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BF624 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r12
  PRKPROCESS *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rbx
  DXGADAPTER *v13; // rsi
  __int64 v14; // rax
  struct _ETHREAD *CurrentThread; // r14
  DXGADAPTER *v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rsi
  unsigned int i; // esi
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  bool v23; // zf
  int v24; // eax
  struct DXGPROCESS *Current; // rax
  int v26; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rbx
  _BYTE v35[8]; // [rsp+60h] [rbp-69h] BYREF
  DXGADAPTER *v36; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v37; // [rsp+70h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-49h] BYREF
  char v39; // [rsp+B0h] [rbp-19h]
  __int128 v40; // [rsp+B8h] [rbp-11h] BYREF

  v40 = 0LL;
  v9 = 0;
  SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !SessionDataForSpecifiedSession
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                          (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                          CurrentProcessSessionId)) == 0LL) )
  {
    WdLogSingleEntry1(1LL, 2618LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 2618LL, 0LL, 0LL, 0LL, 0LL);
  }
  v39 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2331]);
  v12 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, v12) )
      {
        v20 = *((_QWORD *)this + 16);
        v21 = (unsigned int)v12;
        v22 = 4000LL * (unsigned int)v12;
        if ( *(_QWORD *)(v22 + v20 + 728) )
        {
          v23 = *(_DWORD *)(v22 + v20 + 736) == 3;
        }
        else
        {
          Current = DXGPROCESS::GetCurrent();
          v23 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 304LL))(0LL) == 0;
        }
        *((_BYTE *)&v40 + v12) = v23;
        if ( v23 )
        {
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v12, 0)
            || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, v12) )
          {
            v9 = 1;
            v26 = DmmEnablePathsFromVidPnSource(a2, v12, 1u, a3, a6);
            if ( v26 < 0 )
            {
              v28 = (unsigned int)v12;
              v29 = v26;
              WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v28, v26);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to restore CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
                *((_QWORD *)this + 2),
                v21,
                v29,
                0LL,
                0LL);
LABEL_40:
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
              goto LABEL_25;
            }
            Global = DXGGLOBAL::GetGlobal();
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0);
          }
        }
        else
        {
          v9 = 1;
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *((_DWORD *)this + 24) );
    if ( !v9 )
      goto LABEL_24;
    v13 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v14 = *((_QWORD *)a2 + 2);
    CurrentThread = KeGetCurrentThread();
    v36 = v13;
    v16 = *(DXGADAPTER **)(v14 + 16);
    v37 = v16;
    if ( v13 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v36, CurrentThread);
    if ( v16 && v13 != v16 )
      DXGADAPTER::PushWorkerThreadOfExclusiveOwner(v37, CurrentThread);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 184LL))(
            *((_QWORD *)this + 2),
            &v40,
            *((unsigned int *)this + 24),
            a5) )
      WdLogSingleEntry4(4LL, a2, (unsigned __int8)v40, BYTE1(v40), *((unsigned int *)this + 24));
    v17 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      while ( 1 )
      {
        v18 = v17;
        if ( !*((_BYTE *)&v40 + v17) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v17, 1u) )
          {
            v24 = DmmDisablePathsFromVidPnSource(a2, v17);
            if ( v24 < 0 )
              break;
          }
        }
        if ( ++v17 >= *((_DWORD *)this + 24) )
          goto LABEL_18;
      }
      v30 = v17;
      v31 = v24;
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v30, v24);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to disable CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
        *((_QWORD *)this + 2),
        v18,
        v31,
        0LL,
        0LL);
      ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v35);
      goto LABEL_40;
    }
LABEL_18:
    if ( v39 )
    {
      KeUnstackDetachProcess(&ApcState);
      v39 = 0;
    }
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    {
      if ( *((_BYTE *)&v40 + i) )
      {
        v32 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)this, i);
        if ( v32 < 0 )
        {
          v33 = v32;
          WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), i, v32);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in restoring copy protection on adapter 0x%I64x VidPnSourceId 0x%I64x %08I64x (Status = 0x%I64x)",
            *((_QWORD *)this + 2),
            i,
            v33,
            0LL,
            0LL);
        }
      }
    }
    ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER((ADAPTEROWNERTRACKER *)v35);
  }
LABEL_24:
  *a4 = v9;
LABEL_25:
  if ( v39 )
    KeUnstackDetachProcess(&ApcState);
}
