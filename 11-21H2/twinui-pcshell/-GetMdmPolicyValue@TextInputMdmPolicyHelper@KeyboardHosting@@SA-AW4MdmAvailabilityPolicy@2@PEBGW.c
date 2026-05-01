/*
 * XREFs of ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800BFD00
 * Callers:
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC2D0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC638 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BCC14 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BD314 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BD670 (-UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801650D8 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180173734 (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180174344 (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800BFD6C (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v4[0] = 1;
  v4[1] = 2;
  v1 = 0;
  v6 = 0LL;
  v2 = ((__int64 (__fastcall *)(const wchar_t *, __int64, _DWORD *, __int64 *))PolicyManager_GetPolicy)(
         L"TextInput",
         a1,
         v4,
         &v6);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\textinputmdmpolicyhelper.cpp",
      (const char *)(unsigned int)v2);
  }
  else if ( *(_DWORD *)(v6 + 4) )
  {
    v1 = *(_DWORD *)(v6 + 16);
  }
  wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v6);
  return v1;
}
