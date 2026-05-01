/*
 * XREFs of ?put_TabGroupId@ApplicationViewOperation@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801829B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::put_TabGroupId(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 240) = *a2;
  return result;
}
