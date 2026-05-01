/*
 * XREFs of ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x18001A210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000AAC8 (--3@YAXPEAX@Z.c)
 *     ??1CProcessMemoryReport@System@Windows@@UEAA@XZ @ 0x18001A048 (--1CProcessMemoryReport@System@Windows@@UEAA@XZ.c)
 */

Windows::System::CProcessMemoryReport *__fastcall Windows::System::CProcessMemoryReport::`scalar deleting destructor'(
        Windows::System::CProcessMemoryReport *this,
        char a2)
{
  Windows::System::CProcessMemoryReport::~CProcessMemoryReport((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
