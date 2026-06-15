/*
 * XREFs of ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002D184
 * Callers:
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z @ 0x18002C834 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEAVCApplication@@AEAPEAU__POSITION@@@Z @ 0x18000BC10 (-GetNext@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18002F440 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

void __fastcall CApplicationManager::MuteAllAppsInSession(CApplicationManager *this, int a2)
{
  PVOID v4; // rcx
  struct CApplication **Next; // rax
  struct CApplication *v6; // rdx
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2);
  }
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v7 )
  {
    Next = (struct CApplication **)ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::GetNext(
                                     (__int64)v4,
                                     &v7);
    v6 = *Next;
    if ( *((_DWORD *)*Next + 53) == a2 && !*((_DWORD *)v6 + 164) )
      CApplicationManager::SilenceAndRevokePLMExemption(this, v6);
  }
}
