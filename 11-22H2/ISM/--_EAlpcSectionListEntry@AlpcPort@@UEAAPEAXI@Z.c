/*
 * XREFs of ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x180126B80
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180126838 (--1AlpcPort@@UEAA@XZ.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x180127F14 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1801281A0 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1801283D0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1801268CC (--1AlpcSectionListEntry@AlpcPort@@UEAA@XZ.c)
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
