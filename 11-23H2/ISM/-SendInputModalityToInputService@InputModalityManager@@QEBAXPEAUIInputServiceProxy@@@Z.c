/*
 * XREFs of ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x180174E7C
 * Callers:
 *     ?SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x180173B60 (-SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z.c)
 *     ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D22A0 (-OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z.c)
 *     ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D2590 (-s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x180057408 (IsGetMPCInputPostProcessorPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800B6BBC (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 */

void __fastcall InputModalityManager::SendInputModalityToInputService(
        InputModalityManager *this,
        struct IInputServiceProxy *a2)
{
  unsigned int v4; // esi
  MPCHolographicInputManager *Instance; // rax
  int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)this == 4 )
  {
    v4 = *((_DWORD *)this + 3);
    if ( IsGetMPCInputPostProcessorPresent() )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      MPCHolographicInputManager::OnKeyboardKeyPress(Instance, v4);
    }
  }
  if ( a2 )
  {
    v6 = *((_DWORD *)this + 2);
    v7 = *(_QWORD *)a2;
    *(_QWORD *)v9 = *(_QWORD *)this;
    v10 = v6;
    v8 = (*(__int64 (__fastcall **)(struct IInputServiceProxy *, int *))(v7 + 32))(a2, v9);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputmodalitymanager.cpp",
        (const char *)(unsigned int)v8,
        v9[0]);
  }
}
