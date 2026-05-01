/*
 * XREFs of ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800A33AC
 * Callers:
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F04F0 (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F05B4 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F074C (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiButtonAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0810 (-UpdateEmojiButtonAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0EC0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F119C (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F1338 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18020BF60 (-UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(__int64 a1)
{
  unsigned int v1; // ebx
  int Policy; // eax
  __int64 v3; // rcx
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v5[0] = 1;
  v1 = 0;
  v5[1] = 2;
  v7 = 0LL;
  Policy = PolicyManager_GetPolicy(L"TextInput", a1, v5, &v7);
  if ( Policy < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\textinputmdmpolicyhelper.cpp",
      (const char *)(unsigned int)Policy,
      v5[0]);
    v3 = v7;
  }
  else
  {
    v3 = v7;
    if ( *(_DWORD *)(v7 + 4) )
      v1 = *(_DWORD *)(v7 + 16);
  }
  if ( v3 )
    PolicyManager_FreeGetPolicyData(v3);
  return v1;
}
