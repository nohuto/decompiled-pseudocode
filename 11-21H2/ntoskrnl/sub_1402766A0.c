/*
 * XREFs of sub_1402766A0 @ 0x1402766A0
 * Callers:
 *     sub_14023AFD8 @ 0x14023AFD8 (sub_14023AFD8.c)
 *     sub_140242F10 @ 0x140242F10 (sub_140242F10.c)
 *     sub_140275000 @ 0x140275000 (sub_140275000.c)
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 *     sub_1404171F4 @ 0x1404171F4 (sub_1404171F4.c)
 *     sub_14053D730 @ 0x14053D730 (sub_14053D730.c)
 * Callees:
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

int __fastcall sub_1402766A0(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  _SLIST_ENTRY *Next; // rbx
  __int64 v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  bool v8; // cc

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)&ListEntry[8].Next + 1);
  Next = ListEntry[9].Next;
  v5 = *((_QWORD *)CurrentPrcb + 268);
  ++*(_DWORD *)(v5 + 28);
  if ( *(_WORD *)v5 < *(_WORD *)(v5 + 16)
    || (++*(_DWORD *)(v5 + 32),
        v5 = *((_QWORD *)CurrentPrcb + 269),
        ++*(_DWORD *)(v5 + 28),
        *(_WORD *)v5 < *(_WORD *)(v5 + 16)) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v5, ListEntry);
  }
  else
  {
    ++*(_DWORD *)(v5 + 32);
    sub_14042A5E0(ListEntry, ListEntry);
  }
  LODWORD(v6) = sub_140276728(v3);
  if ( Next )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Next->Next + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v8 = v7 <= 1;
    v6 = v7 - 1;
    if ( v8 )
    {
      if ( v6 )
        __fastfail(0xEu);
      LODWORD(v6) = KeSetEvent((PRKEVENT)&Next[75], 0, 0);
    }
  }
  return v6;
}
