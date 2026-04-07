/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180036A6C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180030280 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036BA4 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x180036F30 (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18005B2A8 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B688 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6848 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E5660 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E6BCC (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x180105B74 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x1801087A4 (CWindowList--ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  bool v5; // dl
  const char *v6; // r9
  wil::details::in1diag3 *v7; // rcx
  struct CWindowData *v8; // rax
  struct CTopLevelWindow3D *v9; // rcx
  struct CWindowData *v10; // rcx
  char v11; // al
  CBaseObject *v12; // rcx
  __int64 v14; // rdx
  CTopLevelWindow *v15; // rbx
  void *v16; // rax
  int WindowTarget; // eax
  CBaseObject *v18; // rcx
  int v19; // [rsp+20h] [rbp-20h]
  struct CWindowData **v20; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct CWindowData *v22; // [rsp+68h] [rbp+28h] BYREF
  struct CTopLevelWindow3D *v23; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v24; // [rsp+78h] [rbp+38h] BYREF

  v22 = a2;
  if ( *((_QWORD *)a2 + 55) )
    return 0LL;
  v24 = 0LL;
  updated = CTopLevelWindow::CreateWindowWithNotify(a2, &v24);
  v4 = updated;
  if ( updated < 0 )
  {
    v14 = 1627LL;
    goto LABEL_30;
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v24);
  v4 = updated;
  if ( updated < 0 )
  {
    v14 = 1628LL;
    goto LABEL_30;
  }
  v23 = 0LL;
  updated = CTopLevelWindow3D::Create(&v23);
  v4 = updated;
  v7 = retaddr;
  if ( updated >= 0 )
  {
    v8 = v22;
    if ( *((_QWORD *)v22 + 56) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x665,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        v6);
    v9 = v23;
    *((_QWORD *)v23 + 42) = v22;
    if ( v8 )
      *((_OWORD *)v9 + 20) = *((_OWORD *)v8 + 3);
    *((_QWORD *)v22 + 56) = v9;
    v10 = v22;
    if ( (*((_BYTE *)v22 + 675) & 2) != 0 )
    {
      updated = CVisual::SetIsMagnifier(v24, v5);
      v4 = updated;
      if ( updated < 0 )
      {
        v14 = 1644LL;
        goto LABEL_30;
      }
      *((_BYTE *)v22 + 675) &= ~2u;
      v10 = v22;
    }
    if ( (*((_BYTE *)v10 + 675) & 0x40) != 0 )
    {
      CTopLevelWindow::SetVisualProtectContent(v24, 1);
      v10 = v22;
    }
    if ( (*((_BYTE *)v10 + 676) & 2) == 0 )
      goto LABEL_12;
    updated = CVisual::SetIsCursor(v24, 1);
    v4 = updated;
    if ( updated >= 0 )
    {
      v20 = &v22;
      CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(this, &v20);
      v10 = v22;
LABEL_12:
      v11 = *((_BYTE *)v10 + 677);
      if ( (v11 & 8) == 0 )
        goto LABEL_13;
      *((_BYTE *)v10 + 677) = v11 & 0xF7;
      updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 58)
                                                                          + 80LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                  *(_QWORD *)(*((_QWORD *)v22 + 82) + 40LL),
                  *((_QWORD *)v22 + 5),
                  0LL);
      v4 = updated;
      if ( updated >= 0 )
      {
        v10 = v22;
LABEL_13:
        if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 3) + 432LL))(*((_QWORD *)v10 + 3)) )
        {
          v15 = v24;
          v16 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v22 + 3) + 432LL))(*((_QWORD *)v22 + 3));
          WindowTarget = CTopLevelWindow::CreateWindowTarget(v15, v16);
          v4 = WindowTarget;
          if ( WindowTarget < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x68C,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
              (const char *)(unsigned int)WindowTarget,
              v19);
            v18 = v24;
            if ( v24 )
            {
              v24 = 0LL;
              CBaseObject::Release(v18);
            }
            return v4;
          }
        }
        v12 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(CBaseObject *, __int64))v12)(v12, 1LL);
        }
        return 0LL;
      }
      v14 = 1671LL;
      goto LABEL_30;
    }
    v14 = 1655LL;
LABEL_30:
    v7 = retaddr;
    goto LABEL_31;
  }
  v14 = 1631LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    v7,
    (void *)v14,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)updated,
    v19);
  Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v24);
  return v4;
}
