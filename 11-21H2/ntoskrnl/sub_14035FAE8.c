/*
 * XREFs of sub_14035FAE8 @ 0x14035FAE8
 * Callers:
 *     sub_14024029C @ 0x14024029C (sub_14024029C.c)
 *     sub_14024B844 @ 0x14024B844 (sub_14024B844.c)
 *     sub_14035FB90 @ 0x14035FB90 (sub_14035FB90.c)
 *     sub_1405C6550 @ 0x1405C6550 (sub_1405C6550.c)
 *     sub_1407D933C @ 0x1407D933C (sub_1407D933C.c)
 *     sub_1407D9BE8 @ 0x1407D9BE8 (sub_1407D9BE8.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14035FAE8(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx

  if ( (a4 & 1) != 0
    && *(unsigned __int16 *)(a1 + 16) + (unsigned int)*(unsigned __int16 *)(a1 + 32) >= (int)dword_140D06884 + 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), -a3);
    ExFreePoolWithTag((PVOID)a2, *(_DWORD *)(a1 + 68));
  }
  else
  {
    v7 = a2 + a3;
    *(_QWORD *)(a2 + 16) = a1;
    *(_QWORD *)(a2 + 32) = v7;
    v8 = *(unsigned int *)(a1 + 80);
    *(_DWORD *)(a2 + 40) = 0;
    v9 = (void *)(a2 + v8);
    *(_QWORD *)(a2 + 24) = v9;
    *(_DWORD *)(a2 + 44) = a4;
    memset(v9, 0, v7 - (_QWORD)v9);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), (PSLIST_ENTRY)a2);
  }
  if ( a5 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)a1);
}
