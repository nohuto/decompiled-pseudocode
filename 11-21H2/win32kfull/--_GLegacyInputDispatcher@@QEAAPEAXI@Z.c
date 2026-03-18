/*
 * XREFs of ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C011F8B0
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     xxxDesktopThread @ 0x1C00A4360 (xxxDesktopThread.c)
 * Callees:
 *     ??1LegacyInputDispatcher@@QEAA@XZ @ 0x1C011F8E4 (--1LegacyInputDispatcher@@QEAA@XZ.c)
 */

LegacyInputDispatcher *__fastcall LegacyInputDispatcher::`scalar deleting destructor'(LegacyInputDispatcher *this)
{
  LegacyInputDispatcher::~LegacyInputDispatcher(this);
  if ( this )
    Win32FreePool(this);
  return this;
}
