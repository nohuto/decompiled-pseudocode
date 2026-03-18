/*
 * XREFs of ?WriteDWord@MonitorDataStore@DxgMonitor@@UEAAXPEAXPEBGK@Z @ 0x1C03CF020
 * Callers:
 *     <none>
 * Callees:
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x1C03CEC54 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 */

void __fastcall DxgMonitor::MonitorDataStore::WriteDWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        int a4)
{
  DxgMonitor::MonitorDataStore::WriteData<unsigned long>((__int64)this, a2, a3, a4);
}
