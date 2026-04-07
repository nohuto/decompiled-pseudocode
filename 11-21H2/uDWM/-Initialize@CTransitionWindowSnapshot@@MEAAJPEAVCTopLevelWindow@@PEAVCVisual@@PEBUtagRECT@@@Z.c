/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800F0360
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800F0138 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180011304 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18001BDD8 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18004ECFC (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18004EEDC (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x1800EA120 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180107258 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  float ScalingFactorForCVI; // xmm0_4
  struct tagRECT v13; // xmm0
  CBaseObject *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  CBaseObject *v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  v8 = CVisual::Initialize(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180123BC8, 1LL, v8, 0x57u);
    return v9;
  }
  v10 = CWindowSnapshot::Create(a2, &v17);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v11 = *((_QWORD *)a2 + 94);
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot((const struct CWindowData *)v11)
      && (int)CWindowSnapshot::GetCVI(
                *(CWindowSnapshot **)(v11 + 480),
                a4,
                (struct CCachedVisualImageProxy **)this + 37,
                (float *)this + 90) >= 0 )
    {
      v10 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
      v9 = v10;
      if ( v10 < 0 )
      {
        v16 = 95;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
      {
        v9 = -2147023434;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180123BC8, 1LL, -2147023434, 0x64u);
        goto LABEL_23;
      }
      *((_QWORD *)this + 40) = a3;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      if ( (*(_DWORD *)(v11 + 672) & 0xFFF) == 0x17 )
        ScalingFactorForCVI = FLOAT_1_0;
      else
        ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a4);
      *((float *)this + 90) = ScalingFactorForCVI;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 64LL))(*((_QWORD *)this + 40));
      v9 = v10;
      if ( v10 < 0 )
      {
        v16 = 116;
        goto LABEL_5;
      }
      v10 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a4);
      v9 = v10;
      if ( v10 < 0 )
      {
        v16 = 119;
        goto LABEL_5;
      }
    }
    v13 = *a4;
    v14 = v17;
    *((_QWORD *)this + 36) = v17;
    *(struct tagRECT *)((char *)this + 344) = v13;
    *(struct tagRECT *)((char *)this + 328) = v13;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
    CVisual::SetDirtyFlags(this, 4096);
    goto LABEL_23;
  }
  v16 = 90;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180123BC8, 1LL, v10, v16);
LABEL_23:
  if ( v17 )
    CBaseObject::Release(v17);
  return v9;
}
