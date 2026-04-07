/*
 * XREFs of ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x180054560
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180015960 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisual(struct CVisual **this)
{
  _QWORD *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v1 = this + 10;
  v2 = CVisual::Create(this + 10);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x68Eu);
  }
  else
  {
    v4 = *v1;
    v11 = 0x7FFFFFFF;
    v12 = 0x7FFFFFFF;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 96LL))(v4, &v11);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x691u);
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
        0,
        v6,
        v7);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x69Au);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 16LL)
                                               + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 16LL));
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x69Cu);
      }
    }
  }
  return v3;
}
