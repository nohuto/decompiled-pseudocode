/*
 * XREFs of ?Cleanup@CProcess@@QEAAJH@Z @ 0x180026238
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18002C748 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002EF7C (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x1800097E0 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002647C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 */

__int64 __fastcall CProcess::Cleanup(CProcess *this, int a2)
{
  CProcess::CleanupProcessTerminationWatcher(this, a2);
  CProcess::NotifyPLM((__int64)this, 1);
  return 0LL;
}
