/*
 * XREFs of sub_14071F0D0 @ 0x14071F0D0
 * Callers:
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14071F0D0(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v3; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( *(_WORD *)(a1 + 2) == 248 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = *((_QWORD *)CurrentPrcb + 266);
    ++*(_DWORD *)(v3 + 28);
    if ( *(_WORD *)v3 < *(_WORD *)(v3 + 16)
      || (++*(_DWORD *)(v3 + 32),
          v3 = *((_QWORD *)CurrentPrcb + 267),
          ++*(_DWORD *)(v3 + 28),
          *(_WORD *)v3 < *(_WORD *)(v3 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v3, v1);
    }
    else
    {
      ++*(_DWORD *)(v3 + 32);
      sub_14042A5E0(v1, CurrentPrcb);
    }
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
  }
}
