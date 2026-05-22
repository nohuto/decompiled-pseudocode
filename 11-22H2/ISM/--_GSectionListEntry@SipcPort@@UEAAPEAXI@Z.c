/*
 * XREFs of ??_GSectionListEntry@SipcPort@@UEAAPEAXI@Z @ 0x180126BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

SipcPort::SectionListEntry *__fastcall SipcPort::SectionListEntry::`scalar deleting destructor'(
        SipcPort::SectionListEntry *this,
        char a2)
{
  *(_QWORD *)this = &SipcPort::SectionListEntry::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
