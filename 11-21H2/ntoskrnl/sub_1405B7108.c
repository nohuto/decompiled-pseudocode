/*
 * XREFs of sub_1405B7108 @ 0x1405B7108
 * Callers:
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_1405B7108(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned int i; // ecx

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = __rdtsc();
  v4 = ((unsigned int)v3 | ((unsigned __int64)HIDWORD(v3) << 32)) >> 4;
  v5 = qword_140C530C8 + ((unsigned __int64)*(unsigned __int16 *)(*((_QWORD *)CurrentPrcb + 24) + 138LL) << 9);
  for ( i = 0; i < 0x10; ++i )
  {
    LODWORD(v4) = v4 & 7;
    if ( *(unsigned __int16 *)(((unsigned __int64)(unsigned int)v4 << 6) + v5) <= (dword_140C530C0
                                                                                 / (unsigned int)(unsigned __int16)word_140D05000) >> 3 )
      break;
    LODWORD(v4) = v4 + 1;
  }
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + (((unsigned int)v4 < 8 ? v4 : 0) << 6)), ListEntry);
}
