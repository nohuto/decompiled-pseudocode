/*
 * XREFs of ?FreeSectionEntry@SectionListEntry@SipcPort@@UEAAXXZ @ 0x1800FE4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SipcPort::SectionListEntry::FreeSectionEntry(SipcPort::SectionListEntry *this)
{
  if ( this )
    (**(void (__fastcall ***)(SipcPort::SectionListEntry *, __int64))this)(this, 1LL);
}
