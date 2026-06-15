/*
 * XREFs of ??1?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@wil@@QEAA@XZ @ 0x1800D4578
 * Callers:
 *     ?ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z @ 0x1800D4620 (-ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z.c)
 *     ?ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z @ 0x1800D47D0 (-ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z.c)
 *     ?HostedApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBG_KW4AppInteractivity@@@Z @ 0x1800D4B50 (-HostedApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBG_KW4AppInteractivity@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::unique_call<long (*)(void),&long CoRevertToSelf(void),0>::~unique_call<long (*)(void),&long CoRevertToSelf(void),0>(
        char *a1)
{
  char result; // al

  result = *a1;
  *a1 = 0;
  if ( result )
    return CoRevertToSelf();
  return result;
}
