/*
 * XREFs of ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D78A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800BFC10 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnBeginTransitionRequest(CAppLaunchSwitch *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  const struct _GUID *v4; // r8
  CBaseObject *v5; // rdi
  char v6; // cl
  bool v7; // zf
  CAnimationScheduler *v8; // rcx
  int v9; // eax
  int v10; // eax
  CBaseObject *v12; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v13) )
  {
    v3 = CImmersiveState::Create(&v12, v13);
    v5 = v12;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v6 = *((_BYTE *)v12 + 56);
      *((_BYTE *)this + 128) = v6 == 0;
      v7 = v6 == 0;
      v8 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      if ( v7 )
      {
        v9 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v8, 0x3Bu, v4, this, 0LL);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801226F8, 1LL, v9, 0xA5Eu);
      }
      else
      {
        v10 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v8, 0x3Au, v4, this, 0LL);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801226F8, 1LL, v10, 0xA62u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801226F8, 1LL, v3, 0xA5Au);
    }
    if ( v5 )
      CBaseObject::Release(v5);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801226F8, 1LL, -2147467259, 0xA58u);
  }
  return v2;
}
