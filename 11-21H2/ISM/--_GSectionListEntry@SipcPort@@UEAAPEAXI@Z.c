/*
 * XREFs of ??_GSectionListEntry@SipcPort@@UEAAPEAXI@Z @ 0x1800FCF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
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
