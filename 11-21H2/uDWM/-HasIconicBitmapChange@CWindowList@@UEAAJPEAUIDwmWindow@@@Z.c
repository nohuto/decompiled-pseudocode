/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010A90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001F274 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180023AEC (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  char v6; // di
  char *v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-10h] BYREF
  CWindowData *v13; // [rsp+70h] [rbp+30h] BYREF
  CWindowData **v14; // [rsp+78h] [rbp+38h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x18C0u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
    if ( v13 && !CWindowData::IsImmersiveWindow(v13) )
    {
      if ( (*((_BYTE *)v13 + 666) & 2) != 0 )
      {
        if ( !v6 )
          DynArray<CWindowData *,0>::Remove((char *)this + 496, &v13);
      }
      else if ( v6 )
      {
        v7 = (char *)this + 496;
        v8 = *((_DWORD *)v7 + 6);
        v9 = v8 + 1;
        if ( v8 + 1 < v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else if ( v9 <= *((_DWORD *)v7 + 5) )
        {
          *(_QWORD *)(*(_QWORD *)v7 + 8LL * *((unsigned int *)v7 + 6)) = v13;
          *((_DWORD *)v7 + 6) = v9;
        }
        else
        {
          v14 = &v13;
          v10 = DynArrayImpl<0>::Grow((_DWORD)v7, 8, 1, 0, (__int64)&v14);
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
          else
            *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v7 + 6))++) + *(_QWORD *)v7) = *v14;
        }
      }
      *((_BYTE *)v13 + 666) ^= (*((_BYTE *)v13 + 666) ^ (2 * v6)) & 2;
      CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
        v13);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}
