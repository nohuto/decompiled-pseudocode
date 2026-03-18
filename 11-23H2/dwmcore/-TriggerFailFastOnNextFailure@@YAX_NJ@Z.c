/*
 * XREFs of ?TriggerFailFastOnNextFailure@@YAX_NJ@Z @ 0x18027BE2C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004781C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TriggerFailFastOnNextFailure(char a1, int a2)
{
  DWORD CurrentThreadId; // eax

  CurrentThreadId = 0;
  if ( a1 )
    CurrentThreadId = GetCurrentThreadId();
  else
    a2 = 0;
  g_dwFailFastForThreadId = CurrentThreadId;
  g_hrFailFastExpectedError = a2;
}
