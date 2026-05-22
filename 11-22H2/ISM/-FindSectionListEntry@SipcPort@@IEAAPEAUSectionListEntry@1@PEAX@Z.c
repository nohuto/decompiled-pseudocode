/*
 * XREFs of ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x1801280BC
 * Callers:
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1801280F4 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?ProtectSection@SipcPort@@QEAAJPEAX_K1@Z @ 0x180128F40 (-ProtectSection@SipcPort@@QEAAJPEAX_K1@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1801294B0 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct SipcPort::SectionListEntry *__fastcall SipcPort::FindSectionListEntry(SipcPort *this, void *a2)
{
  SipcPort *i; // rax

  for ( i = (SipcPort *)*((_QWORD *)this + 2); i != (SipcPort *)((char *)this + 16); i = *(SipcPort **)i )
  {
    if ( *(void **)((((unsigned __int64)i - 8) & -(__int64)(i != 0LL)) + 0x18) == a2 )
      return (struct SipcPort::SectionListEntry *)(((unsigned __int64)i - 8) & -(__int64)(i != 0LL));
  }
  return 0LL;
}
