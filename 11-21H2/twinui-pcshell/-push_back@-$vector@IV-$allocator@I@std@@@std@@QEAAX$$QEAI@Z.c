/*
 * XREFs of ?push_back@?$vector@IV?$allocator@I@std@@@std@@QEAAX$$QEAI@Z @ 0x1801E808C
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<unsigned int>::push_back(__int64 a1, _DWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((const void **)a1, v3, a2);
  result = (char *)(unsigned int)*a2;
  *(_DWORD *)v3 = (_DWORD)result;
  *(_QWORD *)(a1 + 8) += 4LL;
  return result;
}
