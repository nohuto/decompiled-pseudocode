/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800177C4
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18003F928 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040370 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18005D128 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x1800150C0 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180015960 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180018DCC (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v2; // r8
  struct CVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  char v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h]
  unsigned int v17; // [rsp+3Ch] [rbp-1Ch]
  __int16 v18; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 10);
  v17 = -1;
  v18 = 0;
  v15 = v2 + 32;
  v16 = *(_DWORD *)(v2 + 80);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v15) )
  {
    v5 = *(struct CVisual **)(*(_QWORD *)(v15 + 16) + 8LL * v17);
    if ( v5 != a2 && v5 != *((struct CVisual **)this + 11) )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 104LL))(v5);
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 104LL))(a2);
  v6 = CVisual::MoveToFront(a2, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x5B1u);
  }
  else
  {
    v8 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5B2u);
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
        0,
        v9,
        v10);
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5B7u);
      }
      else
      {
        v14 = 0;
        LOBYTE(v12) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 5)
                                                                                    + 16LL)
                                                                      + 160LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
          v12,
          0LL,
          0LL,
          v14);
      }
    }
  }
  return v7;
}
