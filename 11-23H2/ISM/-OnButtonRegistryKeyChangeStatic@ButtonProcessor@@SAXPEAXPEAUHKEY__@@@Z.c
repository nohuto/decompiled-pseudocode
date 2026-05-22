/*
 * XREFs of ?OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x1801D8650
 * Callers:
 *     <none>
 * Callees:
 *     ?OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x1801D8554 (-OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall ButtonProcessor::OnButtonRegistryKeyChangeStatic(ButtonProcessor *a1, HKEY a2)
{
  if ( a1 )
    ButtonProcessor::OnButtonRegistryKeyChange(a1, a2);
}
