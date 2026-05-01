/*
 * XREFs of IsOleInitializePresent @ 0x18018C1B8
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1800E0F20 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18018EEA0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOleInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1807B3118 == 1 )
    return 1;
  if ( dword_1807B3118 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_1807B3118 = 2 - (v1 != 0);
  return result;
}
