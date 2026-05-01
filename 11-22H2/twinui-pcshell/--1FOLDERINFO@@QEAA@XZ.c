/*
 * XREFs of ??1FOLDERINFO@@QEAA@XZ @ 0x18063DFC0
 * Callers:
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$11 @ 0x1802B982A (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$11.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x18063E9A0 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall FOLDERINFO::~FOLDERINFO(FOLDERINFO *this, unsigned int a2)
{
  wil::details::folder_change_reader_state *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v3 = (wil::details::folder_change_reader_state *)*((_QWORD *)this + 10);
  if ( v3 )
    wil::details::folder_change_reader_state::`scalar deleting destructor'(v3, a2);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 9);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  std::wstring::_Tidy_deallocate((__int64)this + 32);
}
