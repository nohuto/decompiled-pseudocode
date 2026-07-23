/*
 * XREFs of sub_1402DB890 @ 0x1402DB890
 * Callers:
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_1405FDFF0 @ 0x1405FDFF0 (sub_1405FDFF0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402DB890(PSLIST_ENTRY ListEntry, unsigned int a2)
{
  char *v2; // rbx
  unsigned __int16 v3; // di

  if ( a2 > 1 || (v2 = (char *)&unk_140CE1DC0 + 64 * (__int64)(int)a2, ++*((_DWORD *)v2 + 13), !*((_DWORD *)v2 + 12)) )
  {
    ExFreePoolWithTag(ListEntry, 0);
    return;
  }
  v3 = *(_WORD *)v2;
  if ( *(_WORD *)v2 >= 0x200u )
  {
    ++*((_DWORD *)v2 + 14);
    ExFreePoolWithTag(ListEntry, 0);
LABEL_7:
    KeSetEvent((PRKEVENT)(v2 + 16), 1, 0);
    return;
  }
  ExpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
  if ( v3 >= 0x40u )
    goto LABEL_7;
}
