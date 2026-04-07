/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031990
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001DAC4 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x18009A9AC (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E5CFC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4Re.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180107AFC (-IsVailContainer@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DPIChange(CAcrylicSheet **this, struct IDwmWindow *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // r15d
  int v9; // esi
  double v10; // xmm6_8
  bool v11; // dl
  BOOL v12; // r14d
  CTopLevelWindow *v13; // rcx
  int updated; // eax
  int v15; // r8d
  CWindowData *v17; // rax
  CWindowData *v18; // rax
  CAcrylicSheet *v19; // rcx
  int v20; // eax
  int v21; // [rsp+30h] [rbp-99h] BYREF
  int v22; // [rsp+38h] [rbp-91h] BYREF
  int v23; // [rsp+40h] [rbp-89h] BYREF
  int v24; // [rsp+48h] [rbp-81h] BYREF
  CWindowData *v25; // [rsp+50h] [rbp-79h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+58h] [rbp-71h] BYREF
  char v27[16]; // [rsp+60h] [rbp-69h] BYREF
  struct _RTL_CRITICAL_SECTION **v28; // [rsp+70h] [rbp-59h]
  __int64 v29; // [rsp+78h] [rbp-51h]
  int *v30; // [rsp+80h] [rbp-49h]
  __int64 v31; // [rsp+88h] [rbp-41h]
  int *v32; // [rsp+90h] [rbp-39h]
  __int64 v33; // [rsp+98h] [rbp-31h]
  int *v34; // [rsp+A0h] [rbp-29h]
  __int64 v35; // [rsp+A8h] [rbp-21h]
  int *v36; // [rsp+B0h] [rbp-19h]
  __int64 v37; // [rsp+B8h] [rbp-11h]
  CWindowData **v38; // [rsp+C0h] [rbp-9h]
  __int64 v39; // [rsp+C8h] [rbp-1h]

  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v17 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           840LL);
    v25 = v17;
    if ( !v17 || (v18 = CWindowData::CWindowData(v17), (v5 = (__int64)v18) == 0) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x820u);
LABEL_30:
      v6 = v4;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x179Fu);
      goto LABEL_20;
    }
    *((_QWORD *)v18 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v18);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v4 = CWindowList::SyncWindowData((CWindowList *)this, a2, (struct CWindowData *)v5);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x824u);
      goto LABEL_30;
    }
  }
  v6 = v4;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
    v8 = *(_DWORD *)(v7 + 12);
    v9 = *(_DWORD *)(v7 + 8);
    v10 = *(double *)v7;
    if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 && IsVailContainer() )
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailUnifiedDpi>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_VailUnifiedDpi>::GetImpl'::`2'::impl,
        0LL);
    v11 = *(double *)(v5 + 336) != v10 || *(_DWORD *)(v5 + 344) != v9 || *(_DWORD *)(v5 + 348) != v8;
    v12 = *(_DWORD *)(v5 + 352) != *(_DWORD *)(v7 + 16)
       || *(_DWORD *)(v5 + 356) != *(_DWORD *)(v7 + 20)
       || *(_DWORD *)(v5 + 360) != *(_DWORD *)(v7 + 24)
       || *(_DWORD *)(v5 + 364) != *(_DWORD *)(v7 + 28)
       || ((*(_BYTE *)(v7 + 36) ^ *(_BYTE *)(v5 + 372)) & 1) != 0
       || *(_DWORD *)(v5 + 368) != *(_DWORD *)(v7 + 32);
    *(_OWORD *)(v5 + 336) = *(_OWORD *)v7;
    *(_OWORD *)(v5 + 352) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(v5 + 368) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(v5 + 384) = *(_OWORD *)(v7 + 48);
    *(_QWORD *)(v5 + 400) = *(_QWORD *)(v7 + 64);
    *(_DWORD *)(v5 + 348) = v8;
    *(_DWORD *)(v5 + 344) = v9;
    *(double *)(v5 + 336) = v10;
    v13 = *(CTopLevelWindow **)(v5 + 440);
    if ( v13
      && v11
      && (CTopLevelWindow::OnSettingsUpdated(v13, 1),
          (v19 = this[70]) != 0LL
       && this[88] == (CAcrylicSheet *)v5
       && (v20 = CAcrylicSheet::SetDpi(v19, v8), v6 = v20, v20 < 0)) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x17D3u);
    }
    else
    {
      updated = CWindowList::UpdateWindowScale(this, (struct CWindowData *)v5, v12);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x17D7u);
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        LODWORD(v25) = *(_DWORD *)(v5 + 364);
        v24 = *(_DWORD *)(v5 + 360);
        v23 = *(_DWORD *)(v5 + 356);
        v22 = *(_DWORD *)(v5 + 352);
        v21 = *(_DWORD *)(v5 + 344);
        v26 = *(struct _RTL_CRITICAL_SECTION **)(v5 + 40);
        v28 = &v26;
        v29 = 8LL;
        v30 = &v21;
        v31 = 4LL;
        v32 = &v22;
        v33 = 4LL;
        v34 = &v23;
        v35 = 4LL;
        v36 = &v24;
        v37 = 4LL;
        v38 = &v25;
        v39 = 4LL;
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmWindowDPI_Change,
          v15,
          7,
          (__int64)v27);
      }
    }
  }
LABEL_20:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
