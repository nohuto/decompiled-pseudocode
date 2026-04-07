/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x18004EC20
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004EB64 (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180011304 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18004ECFC (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CVisual *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT v8; // xmm0
  CDesktopManager *v9; // rcx
  int v10; // eax
  int v11; // eax

  v6 = CVisual::Initialize(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x86u);
  }
  else
  {
    *((_QWORD *)this + 36) = 0LL;
    v8 = *a2;
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    *(struct tagRECT *)((char *)this + 344) = *a2;
    *(struct tagRECT *)((char *)this + 328) = v8;
    *((float *)this + 90) = CDesktopManager::GetScalingFactorForCVI(v9, a2);
    *((_QWORD *)this + 40) = a3;
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      a3 = (struct CVisual *)*((_QWORD *)this + 40);
    }
    v10 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a3 + 64LL))(a3);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x8Eu);
    }
    else
    {
      v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a2);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x91u);
      else
        CVisual::SetDirtyFlags(this, 4096);
    }
  }
  return v7;
}
