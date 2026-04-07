/*
 * XREFs of ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180027CA0
 * Callers:
 *     ?SetOpacity@CImage@@UEAAXN@Z @ 0x1800BF010 (-SetOpacity@CImage@@UEAAXN@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800C9A00 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800E5F88 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180026110 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180027C54 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180027DD8 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::SendSetOpacity(CVisualProxy **this, double a2)
{
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // edi
  struct CResourceProxy *v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct CResourceProxy *v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 >= 1.0 )
  {
    v9 = CVisualProxy::SetEffect(this[2], 0LL);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x374u);
  }
  else
  {
    v11 = 0LL;
    v3 = CCompositor::CreateProxy<CEffectGroupProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (__int64 *)&v11);
    v5 = v3;
    if ( v3 >= 0 )
    {
      v6 = v11;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)v11 + 2) + 16LL)
                                                                              + 816LL))(
             *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)v11 + 2) + 24LL),
             v4,
             0LL,
             0);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v8 = CVisualProxy::SetEffect(this[2], v6);
        v5 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x370u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x36Du);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x36Au);
    }
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
  }
  return v5;
}
