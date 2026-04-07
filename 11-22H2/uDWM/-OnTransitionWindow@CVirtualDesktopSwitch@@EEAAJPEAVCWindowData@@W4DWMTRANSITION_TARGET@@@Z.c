/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DC000
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B6818 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD658 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800DE434 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  signed int v3; // ebx
  int DesktopThumbnail; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // ebp
  unsigned int v11; // eax
  signed int LastError; // eax
  unsigned int v14; // [rsp+20h] [rbp-48h]
  CBaseObject *v15; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-28h] BYREF
  CBaseObject *v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v15 = 0LL;
  v17 = 0LL;
  if ( (a3 & 0xFFFu) - 75 > 1 )
    return (unsigned int)v3;
  SetLastError(0);
  if ( !EnumDisplayMonitors(0LL, 0LL, CVirtualDesktopSwitch::s_MonitorEnumCallback, a1) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0x120Eu);
    goto LABEL_26;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
  v3 = DesktopThumbnail;
  if ( DesktopThumbnail >= 0 )
  {
    v7 = 0;
    if ( *(_DWORD *)(a1 + 184) )
    {
      while ( 1 )
      {
        v16 = *(struct tagRECT *)(*(_QWORD *)(a1 + 160) + 16LL * v7);
        DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v16, 1, &v17);
        v3 = DesktopThumbnail;
        if ( DesktopThumbnail < 0 )
          break;
        v8 = *(_DWORD *)(a1 + 152);
        v9 = v8 + 1;
        if ( v8 + 1 < v8 )
        {
          v3 = -2147024362;
          v11 = 181;
          v10 = -2147024362;
          goto LABEL_19;
        }
        if ( v9 > *(_DWORD *)(a1 + 148) )
        {
          v10 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 128, 8, 1, &v17);
          v3 = v10;
          if ( v10 < 0 )
          {
            v11 = 192;
LABEL_19:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v11);
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v10,
              0x1217u);
            goto LABEL_15;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * v8) = v17;
          *(_DWORD *)(a1 + 152) = v9;
        }
        v17 = 0LL;
        if ( ++v7 >= *(_DWORD *)(a1 + 184) )
          goto LABEL_12;
      }
      v14 = 4630;
    }
    else
    {
LABEL_12:
      DesktopThumbnail = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 6)
                                                                         + 24LL)
                                                           + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 6)
                                                                              + 24LL));
      v3 = DesktopThumbnail;
      if ( DesktopThumbnail >= 0 )
        goto LABEL_15;
      v14 = 4636;
    }
  }
  else
  {
    v14 = 4623;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    DesktopThumbnail,
    v14);
LABEL_15:
  if ( v15 )
    CBaseObject::Release(v15);
LABEL_26:
  if ( v17 )
    CBaseObject::Release(v17);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
