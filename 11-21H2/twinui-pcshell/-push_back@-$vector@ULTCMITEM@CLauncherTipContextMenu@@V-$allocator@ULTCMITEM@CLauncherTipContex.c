/*
 * XREFs of ?push_back@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAAXAEBULTCMITEM@CLauncherTipContextMenu@@@Z @ 0x1801E80B0
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::push_back(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<CLauncherTipContextMenu::LTCMITEM>::_Emplace_reallocate<CLauncherTipContextMenu::LTCMITEM const &>(
             (const void **)a1,
             (_BYTE *)v3,
             a2);
  *(_QWORD *)v3 = *(_QWORD *)a2;
  result = (char *)*(unsigned int *)(a2 + 8);
  *(_DWORD *)(v3 + 8) = (_DWORD)result;
  *(_QWORD *)(a1 + 8) += 12LL;
  return result;
}
