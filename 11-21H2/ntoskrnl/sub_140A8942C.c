/*
 * XREFs of sub_140A8942C @ 0x140A8942C
 * Callers:
 *     sub_140A84630 @ 0x140A84630 (sub_140A84630.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A88CF0 @ 0x140A88CF0 (sub_140A88CF0.c)
 */

char *__fastcall sub_140A8942C(__int64 a1, __int64 a2, struct _LIST_ENTRY *a3, unsigned int a4, _QWORD *a5)
{
  __int64 v7; // rdi
  _LIST_ENTRY *Pool2; // rsi
  int v10; // ebx
  int v11; // ebx
  unsigned int v12; // r14d
  char *v13; // rax
  char *v14; // rbx

  v7 = a4;
  if ( (unsigned int)(*(_DWORD *)(a2 + 172) - *(_DWORD *)(a2 + 176)) >= 0x20 || a4 > 0xFFFFDFFF )
    return 0LL;
  Pool2 = (_LIST_ENTRY *)ExAllocatePool2(64LL, 0x40uLL, 0x566C6148u);
  if ( !Pool2 )
  {
    sub_1405FDF9C("Couldn't track common buffer allocation\n");
    return 0LL;
  }
  if ( (unsigned __int64)(v7 + 8) <= 0x1000 )
  {
    v10 = 4096;
LABEL_10:
    v11 = v10 - v7;
    goto LABEL_12;
  }
  if ( (v7 & 0xFFF) != 0 )
  {
    v10 = ((v7 + 8) & 0xFFFFF000) + ((((_WORD)v7 + 8) & 0xFFF) != 0LL ? 0x1000 : 0);
    goto LABEL_10;
  }
  v11 = 4096;
LABEL_12:
  v12 = v11 + v7 + 4096;
  v13 = (char *)sub_14042A5E0(*(_QWORD *)(a2 + 16), v12);
  if ( !v13 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  WORD1(Pool2->Flink) = v11;
  v14 = v13 + 4096;
  LOWORD(Pool2->Flink) = 4096;
  Pool2[1].Blink = (struct _LIST_ENTRY *)(v13 + 4096);
  LODWORD(Pool2->Blink) = v7;
  HIDWORD(Pool2->Flink) = v12;
  Pool2[1].Flink = (struct _LIST_ENTRY *)v13;
  Pool2[2].Flink = 0LL;
  Pool2[2].Blink = a3;
  sub_140A88CF0(v13, v12, (unsigned __int64)(v13 + 4096), v7);
  *a5 = 4096LL;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(a2 + 80), Pool2 + 3, (PKSPIN_LOCK)(a2 + 96));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 172));
  return v14;
}
