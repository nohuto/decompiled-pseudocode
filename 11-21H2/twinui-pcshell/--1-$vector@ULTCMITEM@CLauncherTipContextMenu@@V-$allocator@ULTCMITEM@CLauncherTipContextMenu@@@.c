/*
 * XREFs of ??1?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAA@XZ @ 0x1801D7800
 * Callers:
 *     ??1CLauncherTipContextMenu@@MEAA@XZ @ 0x180178EBC (--1CLauncherTipContextMenu@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::~vector<CLauncherTipContextMenu::LTCMITEM>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
