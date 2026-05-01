/*
 * XREFs of ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180520F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ??$As@UICoverWindowAcc@@@?$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@@Details@12@@Z @ 0x180520A98 (--$As@UICoverWindowAcc@@@-$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x180520BF0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeCoverWindow::DisplaySettingsChanged(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int128 v7; // xmm6
  int *v8; // rdx
  int DesktopThumbnail; // eax
  int v10; // eax
  RTL_SRWLOCK *v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v12, (RTL_SRWLOCK *)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 || !*(_QWORD *)(a1 + 24) )
    goto LABEL_15;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_10:
    if ( *(_QWORD *)(a1 + 104) && (a2 & 1) != 0 )
    {
      *(_QWORD *)&v14 = 0LL;
      v10 = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 104),
              (__int64 *)&v14);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA3,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
        goto LABEL_16;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 32LL))(v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    }
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 88LL))(v4, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v14;
    v13 = v14;
    if ( !Geometry::operator==(&v13, (_DWORD *)(a1 + 124)) )
    {
      *(_OWORD *)v8 = v7;
      SetWindowPos(
        *(HWND *)(a1 + 24),
        0LL,
        *v8,
        *(_DWORD *)(a1 + 128),
        v8[2] - *v8,
        *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
        0x14u);
      if ( *(_BYTE *)(a1 + 120) )
      {
        DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail((TabletModeCoverWindow *)(a1 - 80));
        if ( DesktopThumbnail < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
            (const char *)(unsigned int)DesktopThumbnail);
          *(_BYTE *)(a1 + 120) = 0;
          ShowWindow(*(HWND *)(a1 + 24), 0);
        }
      }
    }
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x93,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v5);
LABEL_16:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v12);
  return v6;
}
