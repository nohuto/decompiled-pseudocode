/*
 * XREFs of ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x18001C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180024D08 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

__int64 __fastcall CProcess::SilenceAndRevokePLMExemption(struct CApplication **this)
{
  if ( g_ApplicationManager )
    CApplicationManager::SilenceAndRevokePLMExemption(g_ApplicationManager, this[28]);
  return 0LL;
}
