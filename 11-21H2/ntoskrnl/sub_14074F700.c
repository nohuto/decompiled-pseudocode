/*
 * XREFs of sub_14074F700 @ 0x14074F700
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406ACB64 @ 0x1406ACB64 (sub_1406ACB64.c)
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_1407D55E4 @ 0x1407D55E4 (sub_1407D55E4.c)
 * Callees:
 *     sub_140367A64 @ 0x140367A64 (sub_140367A64.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14074F700(_SLIST_ENTRY *P)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // rdi

  if ( LOBYTE(P[1].Next) != 4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = *((_QWORD *)CurrentPrcb + 270);
    ++*(_DWORD *)(v3 + 28);
    if ( *(_WORD *)v3 >= *(_WORD *)(v3 + 16) )
    {
      ++*(_DWORD *)(v3 + 32);
      v3 = *((_QWORD *)CurrentPrcb + 271);
      ++*(_DWORD *)(v3 + 28);
      if ( *(_WORD *)v3 >= *(_WORD *)(v3 + 16) )
      {
        ++*(_DWORD *)(v3 + 32);
        ExFreePoolWithTag(P, 0);
        return;
      }
      if ( LOBYTE(P[1].Next) != 3 )
      {
LABEL_7:
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v3, P);
        return;
      }
    }
    else if ( LOBYTE(P[1].Next) != 3 )
    {
      goto LABEL_7;
    }
    sub_140367A64((ULONG_PTR)P);
    goto LABEL_7;
  }
  if ( *((_QWORD *)&P[3].Next + 1) )
  {
    sub_14042A5E0(P, P[4].Next);
  }
  else if ( *((_BYTE *)&P[4].Next + 8) )
  {
    ExFreePoolWithTag(P, 0);
  }
}
