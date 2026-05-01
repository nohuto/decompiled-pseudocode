/*
 * XREFs of ?GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z @ 0x1800BFC68
 * Callers:
 *     ?UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BD598 (-UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800BFD6C (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 *     ??$MDMBoolPolicyValueUpdated@AEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEA_N@Z @ 0x1800C01A4 (--$MDMBoolPolicyValueUpdated@AEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEA_.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmBoolPolicyValue(const unsigned __int16 *a1)
{
  char v1; // bl
  int v2; // eax
  _DWORD v4[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v5; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v7; // [rsp+40h] [rbp+10h] BYREF
  bool v8; // [rsp+48h] [rbp+18h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp+20h] BYREF

  v9 = L"AllowTextInputSuggestionUpdate";
  v1 = 1;
  v8 = 1;
  v4[0] = 1;
  v4[1] = 2;
  v5 = 0LL;
  v7 = 0LL;
  v2 = ((__int64 (__fastcall *)(const wchar_t *, const wchar_t *, _DWORD *, __int64 *))PolicyManager_GetPolicy)(
         L"TextInput",
         L"AllowTextInputSuggestionUpdate",
         v4,
         &v7);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\textinputmdmpolicyhelper.cpp",
      (const char *)(unsigned int)v2);
  }
  else if ( *(_DWORD *)(v7 + 4) )
  {
    v8 = *(_DWORD *)(v7 + 16) != 0;
    v1 = v8;
  }
  TouchKeyboardExperienceTelemetryLogger::MDMBoolPolicyValueUpdated<unsigned short const * &,bool &>(&v9, &v8);
  wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v7);
  return v1;
}
