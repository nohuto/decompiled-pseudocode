/*
 * XREFs of ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x1800436F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180041174 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180041888 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLoginTransition::OnAnimationComplete(CLoginTransition *this, int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  CDesktopManager *v5; // rax
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 == *((_DWORD *)this + 16) )
  {
    v4 = CLoginTransition::StopAnimation(this);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xD4u, 0LL);
    }
    else
    {
      v5 = CDesktopManager::s_pDesktopManagerInstance;
      *((_DWORD *)this + 16) = -1;
      v6 = CWindowList::DesktopSwitchImmediately(*((CLoginTransition ***)v5 + 54), *((_QWORD *)this + 10));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xD7u, 0LL);
      }
      else
      {
        *((_QWORD *)this + 10) = 0LL;
        *((_DWORD *)this + 18) = -1;
        v10 = 0;
        v7 = RtlPublishWnfStateData(WNF_IMSN_LOGIN_TRANSITION, 0LL, &v10, 4LL) | 0x10000000;
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDB,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\logintransition.cpp",
            (const char *)(unsigned int)v7,
            0);
      }
    }
  }
  return v2;
}
