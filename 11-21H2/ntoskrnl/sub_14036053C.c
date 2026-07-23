/*
 * XREFs of sub_14036053C @ 0x14036053C
 * Callers:
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_140360158 @ 0x140360158 (sub_140360158.c)
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14036053C(struct _EX_RUNDOWN_REF *a1, PSLIST_ENTRY *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // rsi
  struct _EX_RUNDOWN_REF *v7; // rbx
  PSLIST_ENTRY v8; // rdx
  __int64 v9; // r8
  int v10; // edi

  v4 = a4;
  v7 = a1;
  while ( sub_140347810(a1) )
  {
    while ( 1 )
    {
      v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v7[4]);
      if ( v8 )
        break;
      v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v7[2]);
      if ( v8 )
        break;
      v10 = sub_14042A5E0(v7, 0LL);
      if ( v10 < 0 )
        goto LABEL_9;
    }
    v9 = *((_QWORD *)&v8[1].Next + 1);
    if ( v4 <= (__int64)v8[2].Next - v9 )
    {
      *a3 = v9;
      v10 = 0;
      *a2 = v8;
      return (unsigned int)v10;
    }
    if ( !*((_DWORD *)&v8[2].Next + 2) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)&v7[2], v8);
      v10 = -1073741789;
LABEL_9:
      ++HIDWORD(v7[14].Ptr);
      LODWORD(v7[15].Count) += v4;
      sub_1402AD030(v7);
      return (unsigned int)v10;
    }
    sub_14042A5E0(v8, v8);
    a1 = v7;
  }
  return 3221225865LL;
}
