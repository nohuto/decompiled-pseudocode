/*
 * XREFs of ??_GHotKeyProcessor@@UEAAPEAXI@Z @ 0x1801FDFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x1801FDBF8 (--1HotKeyProcessor@@UEAA@XZ.c)
 */

HotKeyProcessor *__fastcall HotKeyProcessor::`scalar deleting destructor'(HotKeyProcessor *this, char a2)
{
  HotKeyProcessor::~HotKeyProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
