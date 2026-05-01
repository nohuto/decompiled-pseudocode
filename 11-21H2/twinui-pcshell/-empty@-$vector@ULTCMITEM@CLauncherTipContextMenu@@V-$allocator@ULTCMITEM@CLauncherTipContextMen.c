/*
 * XREFs of ?empty@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEBA_NXZ @ 0x1801E7EA4
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::empty(_QWORD *a1)
{
  return *a1 == a1[1];
}
