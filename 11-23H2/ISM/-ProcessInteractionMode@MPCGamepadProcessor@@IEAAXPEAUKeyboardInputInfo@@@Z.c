/*
 * XREFs of ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801E5284
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801E4F90 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B1718 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800B575C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$MPCGamepadProcessor_KeyboardInputEvent@AEAGAEAG@ISMTracing@@SAXAEAG0@Z @ 0x1801E2C60 (--$MPCGamepadProcessor_KeyboardInputEvent@AEAGAEAG@ISMTracing@@SAXAEAG0@Z.c)
 */

void __fastcall MPCGamepadProcessor::ProcessInteractionMode(MPCGamepadProcessor *this, struct KeyboardInputInfo *a2)
{
  MPCHolographicInputManager *Instance; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9

  if ( *((_BYTE *)this + 4189)
    || (Instance = MPCHolographicInputManager::GetInstance(),
        (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(Instance, v5, v6, v7)) )
  {
    ISMTracing::MPCGamepadProcessor_KeyboardInputEvent<unsigned short &,unsigned short &>(
      (unsigned __int16 *)a2 + 30,
      (unsigned __int16 *)a2 + 47);
    if ( *((_WORD *)a2 + 30) == 7 && (*((_BYTE *)a2 + 94) & 1) != 0 && !*((_BYTE *)this + 473) )
      MPCManager::SendHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 7),
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL),
        *((_QWORD *)a2 + 2),
        0,
        2u);
  }
}
