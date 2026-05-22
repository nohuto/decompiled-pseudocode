/*
 * XREFs of ??_EHotkeyContextualProcessor@@EEAAPEAXI@Z @ 0x1801B8510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1HotkeyContextualProcessor@@EEAA@XZ @ 0x1801D095C (--1HotkeyContextualProcessor@@EEAA@XZ.c)
 */

HotkeyContextualProcessor *__fastcall HotkeyContextualProcessor::`vector deleting destructor'(
        HotkeyContextualProcessor *this,
        char a2)
{
  HotkeyContextualProcessor::~HotkeyContextualProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
