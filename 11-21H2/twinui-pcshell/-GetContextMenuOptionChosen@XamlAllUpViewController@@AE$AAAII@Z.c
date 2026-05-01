/*
 * XREFs of ?GetContextMenuOptionChosen@XamlAllUpViewController@@AE$AAAII@Z @ 0x1804436B0
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180441C28 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XamlAllUpViewController::GetContextMenuOptionChosen(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v2 = a2 - 1501;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 5LL;
  result = 3LL;
  v5 = v3 - 3;
  if ( !v5 )
    return 7LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 8LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 6LL;
  v8 = v7 - 1;
  if ( !v8 )
    return 1LL;
  v9 = v8 - 1;
  if ( !v9 )
    return 2LL;
  if ( v9 != 1 )
    return 9LL;
  return result;
}
