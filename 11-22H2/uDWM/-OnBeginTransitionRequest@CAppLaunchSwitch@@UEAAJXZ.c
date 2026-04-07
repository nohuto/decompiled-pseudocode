/*
 * XREFs of ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800DB580
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000D750 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000F520 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnBeginTransitionRequest(CAppLaunchSwitch *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  const struct _GUID *v6; // r8
  CBaseObject *v7; // rdi
  char v8; // cl
  bool v9; // zf
  CAnimationScheduler *v10; // rcx
  int v11; // eax
  int v12; // eax
  CBaseObject *v14; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v15, a3) )
  {
    v5 = CImmersiveState::Create(&v14, v15);
    v7 = v14;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v8 = *((_BYTE *)v14 + 56);
      *((_BYTE *)this + 128) = v8 == 0;
      v9 = v8 == 0;
      v10 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      if ( v9 )
      {
        v11 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v10, 0x3Bu, v6, this, 0LL);
        v4 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180128C88, 1LL, v11, 0x9FFu);
      }
      else
      {
        v12 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v10, 0x3Au, v6, this, 0LL);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180128C88, 1LL, v12, 0xA03u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180128C88, 1LL, v5, 0x9FBu);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180128C88, 1LL, -2147467259, 0x9F9u);
  }
  return v4;
}
