/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D8390
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B2884 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA3E8 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800DB704 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  int v3; // ebx
  int DesktopThumbnail; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // eax
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-48h]
  CBaseObject *v14; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-28h] BYREF
  CBaseObject *v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v14 = 0LL;
  v16 = 0LL;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0x1268u);
    goto LABEL_26;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v14);
  v3 = DesktopThumbnail;
  if ( DesktopThumbnail >= 0 )
  {
    v7 = 0;
    if ( *(_DWORD *)(a1 + 184) )
    {
      while ( 1 )
      {
        v15 = *(struct tagRECT *)(*(_QWORD *)(a1 + 160) + 16LL * v7);
        DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v15, 1, &v16);
        v3 = DesktopThumbnail;
        if ( DesktopThumbnail < 0 )
          break;
        v8 = *(_DWORD *)(a1 + 152);
        v9 = v8 + 1;
        if ( v8 + 1 < v8 )
        {
          v3 = -2147024362;
          v10 = 181;
          goto LABEL_19;
        }
        if ( v9 > *(_DWORD *)(a1 + 148) )
        {
          v3 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 128, 8u, 1, &v16);
          if ( v3 < 0 )
          {
            v10 = 192;
LABEL_19:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v10);
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v3,
              0x1271u);
            goto LABEL_15;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * v8) = v16;
          *(_DWORD *)(a1 + 152) = v9;
        }
        v16 = 0LL;
        if ( ++v7 >= *(_DWORD *)(a1 + 184) )
          goto LABEL_12;
      }
      v13 = 4720;
    }
    else
    {
LABEL_12:
      DesktopThumbnail = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 5)
                                                                         + 16LL)
                                                           + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 5)
                                                                              + 16LL));
      v3 = DesktopThumbnail;
      if ( DesktopThumbnail >= 0 )
        goto LABEL_15;
      v13 = 4726;
    }
  }
  else
  {
    v13 = 4713;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    DesktopThumbnail,
    v13);
LABEL_15:
  if ( v14 )
    CBaseObject::Release(v14);
LABEL_26:
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
