/*
 * XREFs of ?FreeSectionEntry@SectionListEntry@SipcPort@@UEAAXXZ @ 0x18011A160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SipcPort::SectionListEntry::FreeSectionEntry(SipcPort::SectionListEntry *this)
{
  if ( this )
    (**(void (__fastcall ***)(SipcPort::SectionListEntry *, __int64))this)(this, 1LL);
}
