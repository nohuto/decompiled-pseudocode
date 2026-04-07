/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013490
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800056C0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180034310 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800C3260 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C3C28 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1801072B4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // r15d
  char v5; // si
  _QWORD *v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rbx
  CWindowData *v12; // rsi
  char v13; // al
  __int64 v14; // rax
  int v15; // eax
  CWindowIconic *v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-10h] BYREF
  CWindowData *v21; // [rsp+80h] [rbp+40h] BYREF
  CWindowData **v22; // [rsp+88h] [rbp+48h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v21);
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1923u, 0LL);
    goto LABEL_4;
  }
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  if ( v21 && !CWindowData::IsImmersiveWindow(v21) )
  {
    if ( (*((_BYTE *)v21 + 674) & 2) != 0 )
    {
      if ( !v5 )
        DynArray<CWindowData *,0>::Remove((__int64 *)this + 62, &v21);
    }
    else if ( v5 )
    {
      v7 = (_QWORD *)((char *)this + 496);
      v8 = *((_DWORD *)this + 130);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v9 <= *((_DWORD *)this + 129) )
      {
        *(_QWORD *)(*v7 + 8LL * *((unsigned int *)this + 130)) = v21;
        *((_DWORD *)this + 130) = v9;
      }
      else
      {
        v22 = &v21;
        v10 = DynArrayImpl<0>::Grow((int)this + 496, 8, 1, 0, (__int64)&v22);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u, 0LL);
        else
          *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 130))++) + *v7) = *v22;
      }
    }
    *((_BYTE *)v21 + 674) ^= (*((_BYTE *)v21 + 674) ^ (2 * v5)) & 2;
    v11 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
    v12 = v21;
    v13 = *((_BYTE *)v21 + 674);
    if ( (v13 & 2) != 0 )
      goto LABEL_12;
    *((_BYTE *)v21 + 674) = v13 & 0xEB;
    CWindowData::SetIconicBitmap(v12, 0LL);
    v15 = CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v11, v12, 0);
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x38Fu, 0LL);
    CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v11, v12);
    v16 = (CWindowIconic *)*((_QWORD *)v12 + 61);
    if ( !v16 || (v17 = CWindowIconic::OnRepresentationTypeUpdated(v16), v17 >= 0) )
    {
LABEL_12:
      v14 = *(_QWORD *)(v11 + 96);
      if ( !v14 || *(CWindowData **)(v14 + 72) != v12 )
        goto LABEL_4;
      *(_WORD *)(v11 + 89) = 0;
      *(_BYTE *)(v11 + 88) = 0;
      v18 = CIconicBitmapRegistry::RequestBitmap(
              (CIconicBitmapRegistry *)v11,
              (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL,
              0);
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x39Cu, 0LL);
      CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v11, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL);
      v17 = CWindowIconic::OnRepresentationTypeUpdated(*(CWindowIconic **)(v11 + 96));
      if ( v17 >= 0 )
        goto LABEL_4;
      v19 = 926;
    }
    else
    {
      v19 = 915;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v19, 0LL);
  }
LABEL_4:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return (unsigned int)SyncedWindowData;
}
