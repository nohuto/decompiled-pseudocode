/*
 * XREFs of sub_140237E3C @ 0x140237E3C
 * Callers:
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_140391B10 @ 0x140391B10 (sub_140391B10.c)
 *     sub_140394080 @ 0x140394080 (sub_140394080.c)
 * Callees:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140237E3C(_SLIST_HEADER *a1, __int64 a2)
{
  sub_140237F80(&a1[5], *(_QWORD *)(a2 + 24));
  sub_140237ED8(&a1[9], *(_QWORD *)(a2 + 32));
  if ( LOWORD(a1[253].Alignment) >= 0x10u )
    ExFreePoolWithTag((PVOID)a2, 0);
  else
    ExpInterlockedPushEntrySList(a1 + 253, (PSLIST_ENTRY)a2);
}
