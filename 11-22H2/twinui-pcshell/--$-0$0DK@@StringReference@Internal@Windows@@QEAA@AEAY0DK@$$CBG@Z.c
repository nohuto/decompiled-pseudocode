/*
 * XREFs of ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x1801AF7C8
 * Callers:
 *     _dynamic_initializer_for__c_XboxGamesBetaAppId__ @ 0x180002E00 (_dynamic_initializer_for__c_XboxGamesBetaAppId__.c)
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A44BC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1804DA704 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 0x39u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
