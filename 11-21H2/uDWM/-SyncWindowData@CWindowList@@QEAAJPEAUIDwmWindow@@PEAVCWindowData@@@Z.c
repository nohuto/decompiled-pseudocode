/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000C820 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000CEA0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001F330 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180021790 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800223E0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F9E0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031990 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032710 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180011F40 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001F274 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180023AEC (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180035D2C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  char v6; // al
  __int64 v7; // rax
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  bool v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  int SyncedWindowData; // eax
  char v24; // si
  struct CWindowData *v25; // r8
  int v26; // eax
  char v27; // si
  bool v28; // bp
  char v29; // r15
  char v30; // si
  unsigned __int8 v31; // si
  HWND v32; // rcx
  unsigned int PropW; // eax
  char v34; // al
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *i; // r14
  _QWORD *v38; // r14
  unsigned int v39; // eax
  unsigned int v40; // edx
  int v41; // eax
  struct CWindowData *v42; // [rsp+30h] [rbp-68h] BYREF
  struct CWindowData **Buffer; // [rsp+38h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+40h] [rbp-58h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 216);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 232);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 104LL))(a2, (char *)a3 + 248);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 120LL))(a2, (char *)a3 + 80);
  *((_DWORD *)a3 + 29) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 30) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 31) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_DWORD *)a3 + 33) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
  *((_BYTE *)a3 + 664) &= ~1u;
  *((_BYTE *)a3 + 664) |= v6 & 1;
  *((_QWORD *)a3 + 17) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *((_OWORD *)a3 + 21) = *(_OWORD *)v7;
  *((_OWORD *)a3 + 22) = *(_OWORD *)(v7 + 16);
  *((_OWORD *)a3 + 23) = *(_OWORD *)(v7 + 32);
  *((_OWORD *)a3 + 24) = *(_OWORD *)(v7 + 48);
  *((_QWORD *)a3 + 50) = *(_QWORD *)(v7 + 64);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  *((_BYTE *)a3 + 664) &= ~2u;
  *((_BYTE *)a3 + 664) |= 2 * (v8 & 1);
  *((_BYTE *)a3 + 408) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 216LL))(a2);
  *((_BYTE *)a3 + 665) &= ~1u;
  *((_BYTE *)a3 + 665) |= v9 & 1;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
  *((_BYTE *)a3 + 668) &= ~8u;
  *((_BYTE *)a3 + 668) |= 8 * (v10 & 1);
  *(_OWORD *)((char *)a3 + 168) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)a2 + 224LL))(
                                               a2,
                                               &v44);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  *((_BYTE *)a3 + 664) &= ~0x10u;
  *((_BYTE *)a3 + 664) |= 16 * (v11 & 1);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2);
  *((_BYTE *)a3 + 666) &= ~0x40u;
  *((_BYTE *)a3 + 666) |= (v12 & 1) << 6;
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  *((_BYTE *)a3 + 668) &= ~1u;
  *((_BYTE *)a3 + 668) |= v13 & 1;
  v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 668) &= ~0x20u;
  *((_BYTE *)a3 + 668) |= 32 * (v14 & 1);
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
  *((_BYTE *)a3 + 668) &= ~0x40u;
  *((_BYTE *)a3 + 668) |= v15 < 0 ? 0x40 : 0;
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
  *((_BYTE *)a3 + 668) &= ~0x80u;
  *((_BYTE *)a3 + 668) |= (v16 & 0x40) != 0 ? 0x80 : 0;
  v17 = ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2) & 0x1000) != 0;
  *((_BYTE *)a3 + 669) &= ~1u;
  *((_BYTE *)a3 + 669) |= v17;
  v18 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 392LL))(a2);
  *((_BYTE *)a3 + 669) &= ~4u;
  *((_BYTE *)a3 + 669) |= 4 * (v18 & 1);
  *((_DWORD *)a3 + 46) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 400LL))(a2);
  *((_DWORD *)a3 + 47) = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 408LL))(a2, 0LL);
  *((_DWORD *)a3 + 48) = (*(__int64 (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 408LL))(a2, 1LL);
  *((_DWORD *)a3 + 49) = (*(__int64 (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 408LL))(a2, 2LL);
  v19 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 416LL))(a2);
  *((_BYTE *)a3 + 670) &= ~2u;
  *((_BYTE *)a3 + 670) |= 2 * (v19 & 1);
  *((_DWORD *)a3 + 51) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 424LL))(a2);
  v20 = *((_BYTE *)a3 + 668);
  if ( (v20 & 9) == 0 )
    *((_BYTE *)a3 + 668) = v20 & 0xEF;
  v21 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2);
  *((_BYTE *)a3 + 667) &= ~0x10u;
  *((_BYTE *)a3 + 667) |= 16 * (v21 & 1);
  v22 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 288LL))(a2);
  *((_BYTE *)a3 + 668) &= ~4u;
  *((_BYTE *)a3 + 668) |= 4 * (v22 & 1);
  v44 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v42 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v42);
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x18C0u);
    goto LABEL_10;
  }
  v24 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  v25 = v42;
  if ( v42 )
  {
    v26 = *((_DWORD *)v42 + 33);
    if ( v26 < 8 || v26 > 11 )
    {
      if ( *((char *)v42 + 668) < 0 )
      {
        if ( !GetPropW(*((HWND *)v42 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
          goto LABEL_10;
        v25 = v42;
      }
      if ( (*((_BYTE *)v25 + 666) & 2) != 0 )
      {
        if ( v24 )
          goto LABEL_9;
        DynArray<CWindowData *,0>::Remove((__int64 *)this + 62, &v42);
      }
      else
      {
        if ( !v24 )
        {
LABEL_9:
          *((_BYTE *)v25 + 666) ^= (*((_BYTE *)v25 + 666) ^ (2 * v24)) & 2;
          CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(
            *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
            v42);
          goto LABEL_10;
        }
        v38 = (_QWORD *)((char *)this + 496);
        v39 = *((_DWORD *)this + 130);
        v40 = v39 + 1;
        if ( v39 + 1 >= v39 )
        {
          if ( v40 > *((_DWORD *)this + 129) )
          {
            Buffer = &v42;
            v41 = DynArrayImpl<0>::Grow((int)this + 496, 8, 1, 0, (__int64)&Buffer);
            if ( v41 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0xC0u);
            else
              *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 130))++) + *v38) = *Buffer;
          }
          else
          {
            *(_QWORD *)(*v38 + 8LL * *((unsigned int *)this + 130)) = v25;
            *((_DWORD *)this + 130) = v40;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
      }
      v25 = v42;
      goto LABEL_9;
    }
  }
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v27 = *((_BYTE *)a3 + 665);
  v28 = (*((_DWORD *)a3 + 29) & 0x11000000) == 0x11000000 && *((_QWORD *)a3 + 4);
  v29 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  *((_BYTE *)a3 + 665) &= ~2u;
  *((_BYTE *)a3 + 665) |= 2 * v28;
  if ( v28 )
  {
    v30 = v27 & 2;
    if ( !v30 )
    {
      CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 424), (__int64)a3);
      goto LABEL_15;
    }
  }
  else
  {
    v30 = v27 & 2;
  }
  if ( v30 && !v28 )
  {
    Buffer = (struct CWindowData **)a3;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 424), &Buffer);
  }
LABEL_15:
  v31 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  if ( v29 != v31 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this);
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v31;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[41].Blink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v31, 0LL);
      }
    }
  }
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 216);
  v32 = (HWND)*((_QWORD *)a3 + 5);
  if ( v32 )
    PropW = (unsigned int)GetPropW(v32, (LPCWSTR)0xA914);
  else
    PropW = 0;
  *((_DWORD *)a3 + 103) = PropW;
  v34 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 352LL))(a2);
  *((_BYTE *)a3 + 668) &= ~2u;
  *((_BYTE *)a3 + 668) |= 2 * (v34 & 1);
  return 0LL;
}
