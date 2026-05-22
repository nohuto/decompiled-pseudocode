/*
 * XREFs of ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DFB10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x180182C8C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 *     ?SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z @ 0x180182D2C (-SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1801DFCE0 (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::OnInput(
        TapProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  const char *v7; // r9
  __int64 v8; // r8
  InputModalityManager *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)a4 + 2) = 4;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)a4 + 10);
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 8)) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      v7);
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( (*((_BYTE *)a2 + 94) & 1) != 0
      && (*((_WORD *)a2 + 30) == 3 || !*((_WORD *)a2 + 30) || *((_WORD *)a2 + 30) >= 7u)
      && (unsigned __int16)(*((_WORD *)a2 + 28) + 3) > 1u
      && *((_BYTE *)this + 64) )
    {
      InputModalityManager::SetLastUserInputModality((_DWORD *)this + 18, 4, 0, 0, *((_DWORD *)a2 + 1));
      InputModalityManager::SendInputModalityToInputService(v9, *((struct IInputServiceProxy **)this + 6));
    }
  }
  else
  {
    v8 = *((unsigned int *)a2 + 79);
    if ( (unsigned int)v8 > 1
      || (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 7), 1LL, v8, (char *)a2 + 320) < 0
      || *((_DWORD *)this + 17) == 1 )
    {
      *((_DWORD *)a4 + 2) = 0;
      TapProcessor::ResetAndInitializeInteractionContext(this);
    }
  }
  return 0LL;
}
