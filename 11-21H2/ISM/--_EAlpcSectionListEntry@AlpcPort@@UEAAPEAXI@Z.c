/*
 * XREFs of ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800FCF20
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x1800FCC18 (--1AlpcPort@@UEAA@XZ.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800FE20C (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1800FE490 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800FE6C0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1800FCC94 (--1AlpcSectionListEntry@AlpcPort@@UEAA@XZ.c)
 */

AlpcPort::AlpcSectionListEntry *__fastcall AlpcPort::AlpcSectionListEntry::`vector deleting destructor'(
        AlpcPort::AlpcSectionListEntry *this,
        char a2)
{
  AlpcPort::AlpcSectionListEntry::~AlpcSectionListEntry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
