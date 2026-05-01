/*
 * XREFs of ?GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z @ 0x1800A336C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18019AB28 (-UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801AECBC (-UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmIntPolicyValue(
        const unsigned __int16 *a1,
        unsigned int a2)
{
  int PolicyInt; // eax
  unsigned int v4; // ecx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  PolicyInt = PolicyManager_GetPolicyInt(L"TextInput", a1, &v6);
  v4 = v6;
  if ( PolicyInt < 0 )
    return a2;
  return v4;
}
