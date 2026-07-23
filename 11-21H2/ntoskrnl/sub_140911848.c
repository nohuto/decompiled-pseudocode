/*
 * XREFs of sub_140911848 @ 0x140911848
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PSLIST_ENTRY __fastcall sub_140911848(__int64 a1)
{
  _SLIST_ENTRY *v1; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rcx
  PSLIST_ENTRY result; // rax

  v1 = *(_SLIST_ENTRY **)(a1 + 160);
  if ( v1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = *((_QWORD *)CurrentPrcb + 272);
    ++*(_DWORD *)(v3 + 28);
    if ( *(_WORD *)v3 < *(_WORD *)(v3 + 16) )
      return ExpInterlockedPushEntrySList((PSLIST_HEADER)v3, v1);
    ++*(_DWORD *)(v3 + 32);
    v3 = *((_QWORD *)CurrentPrcb + 273);
    ++*(_DWORD *)(v3 + 28);
    if ( *(_WORD *)v3 < *(_WORD *)(v3 + 16) )
    {
      return ExpInterlockedPushEntrySList((PSLIST_HEADER)v3, v1);
    }
    else
    {
      ++*(_DWORD *)(v3 + 32);
      return (PSLIST_ENTRY)sub_14042A5E0(v1, v1);
    }
  }
  return result;
}
