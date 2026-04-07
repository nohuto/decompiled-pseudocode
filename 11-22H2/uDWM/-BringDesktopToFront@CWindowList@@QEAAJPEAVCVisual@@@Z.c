/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800413E0
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040960 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180041174 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180056258 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002C750 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180041510 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v2; // r8
  struct CVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  char v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]
  unsigned int v15; // [rsp+3Ch] [rbp-1Ch]
  __int16 v16; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 10);
  v15 = -1;
  v16 = 0;
  v13 = v2 + 32;
  v14 = *(_DWORD *)(v2 + 80);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v13) )
  {
    v5 = *(struct CVisual **)(*(_QWORD *)(v13 + 16) + 8LL * v15);
    if ( v5 != a2 && v5 != *((struct CVisual **)this + 11) )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 112LL))(v5);
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 112LL))(a2);
  v6 = CVisual::MoveToFront(a2, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x621u, 0LL);
  }
  else
  {
    v8 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x622u, 0LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x627u, 0LL);
      }
      else
      {
        v12 = 0;
        LOBYTE(v10) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 6)
                                                                                    + 24LL)
                                                                      + 160LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL),
          v10,
          0LL,
          0LL,
          v12);
      }
    }
  }
  return v7;
}
