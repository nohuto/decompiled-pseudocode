/*
 * XREFs of ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D2590
 * Callers:
 *     <none>
 * Callees:
 *     ?SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z @ 0x180174F1C (-SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z.c)
 */

void __fastcall TapProcessor::s_InteractionOutputCallback(_BYTE *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  int v3; // edx
  bool v4; // zf
  __int64 v5; // r10
  InputModalityManager *v6; // rcx

  v3 = 2;
  if ( *(_DWORD *)a2 == 2 )
  {
    v4 = a1[64] == 0;
    *((_DWORD *)a1 + 17) = 3;
    if ( !v4 )
    {
      if ( *((_DWORD *)a2 + 2) != 1 && *((_DWORD *)a2 + 2) != 2 )
      {
        if ( *((_DWORD *)a2 + 2) == 3 )
          v3 = 16;
        else
          v3 = *((_DWORD *)a2 + 2) == 4;
      }
      InputModalityManager::SetLastUserInputModality(
        (_DWORD *)a1 + 18,
        v3,
        (int)*((float *)a2 + 3),
        (int)*((float *)a2 + 4),
        0);
      InputModalityManager::SendInputModalityToInputService(v6, *(struct IInputServiceProxy **)(v5 + 48));
    }
  }
  else
  {
    *((_DWORD *)a1 + 17) = 1;
  }
}
