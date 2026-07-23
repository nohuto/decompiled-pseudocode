/*
 * XREFs of sub_1409EF0D4 @ 0x1409EF0D4
 * Callers:
 *     sub_140635EEC @ 0x140635EEC (sub_140635EEC.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 * Callees:
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_1406366B8 @ 0x1406366B8 (sub_1406366B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409EF0D4(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rdi
  _SLIST_HEADER *i; // rbx
  _SLIST_HEADER *v4; // rdi
  _SLIST_HEADER *j; // rbx
  PSLIST_ENTRY v6; // rsi
  _QWORD *p_Next; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // r8

  v1 = a1 + 43;
  for ( i = (_SLIST_HEADER *)a1[43].Alignment; i != v1; i = (_SLIST_HEADER *)i->Alignment )
    sub_1406366B8(i - 1);
  v4 = a1 + 44;
  for ( j = (_SLIST_HEADER *)a1[44].Alignment; j != v4; j = (_SLIST_HEADER *)j->Alignment )
  {
    v6 = ExpInterlockedFlushSList(j - 1);
    while ( v6 )
    {
      p_Next = &v6->Next;
      v6 = v6->Next;
      v8 = p_Next[3];
      if ( *(_QWORD **)(v8 + 8) != p_Next + 3 || (v9 = (_QWORD *)p_Next[4], (_QWORD *)*v9 != p_Next + 3) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ExFreePoolWithTag(p_Next, 0x56777445u);
    }
    *((_DWORD *)&j[3].HeaderX64 + 2) = 0;
  }
}
