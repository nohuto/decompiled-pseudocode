/*
 * XREFs of sub_140A88B74 @ 0x140A88B74
 * Callers:
 *     sub_140A85B10 @ 0x140A85B10 (sub_140A85B10.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A870B0 @ 0x140A870B0 (sub_140A870B0.c)
 *     sub_140A87DC8 @ 0x140A87DC8 (sub_140A87DC8.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 */

struct _LIST_ENTRY *__fastcall sub_140A88B74(struct _LIST_ENTRY *Object, __int64 a2, int a3, char a4)
{
  struct _LIST_ENTRY *v8; // rbx
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v11; // rax

  v8 = sub_140A88430((ULONG_PTR)Object, 0);
  if ( !v8 )
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 0x140uLL, 0x566C6148u);
    v8 = Pool2;
    if ( !Pool2 )
      return v8;
    memset(Pool2, 0, 0x140uLL);
    v8[1].Flink = Object;
    ExInterlockedInsertHeadList(&stru_140D57590, v8, &qword_140D575A0);
    ObfReferenceObject(Object);
    v8[4].Blink = 0LL;
    v8[6].Flink = 0LL;
    v8[4].Flink = (struct _LIST_ENTRY *)((char *)v8 + 56);
    v8[3].Blink = (struct _LIST_ENTRY *)((char *)v8 + 56);
    v8[7].Blink = 0LL;
    v8[5].Blink = v8 + 5;
    v8[5].Flink = v8 + 5;
    v8[9].Flink = 0LL;
    v8[7].Flink = (struct _LIST_ENTRY *)((char *)v8 + 104);
    v8[6].Blink = (struct _LIST_ENTRY *)((char *)v8 + 104);
    v8[8].Blink = v8 + 8;
    v8[8].Flink = v8 + 8;
    sub_140A87DC8((__int64)&v8[12], (unsigned int *)a2);
    LODWORD(v8[9].Blink) = a3;
    if ( *(_DWORD *)(a2 + 20) == 1 && *(_DWORD *)(a2 + 16) < 8u || !*(_BYTE *)(a2 + 4) )
      BYTE2(v8[2].Flink) = 1;
    v8[17].Blink = 0LL;
    if ( *(_BYTE *)(a2 + 4) && *(_BYTE *)(a2 + 5) )
      sub_140A870B0((__int64)v8);
    else
      BYTE1(v8[2].Flink) = 1;
    Blink = Object->Blink;
    v8[3].Flink = Blink;
    if ( Blink[15].Blink )
    {
      LODWORD(v8[12].Flink) = 3;
      v11 = (struct _LIST_ENTRY *)&unk_140D4EF40;
    }
    else
    {
      v11 = (struct _LIST_ENTRY *)&unk_140D4EE00;
    }
    Object->Blink = v11;
  }
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)&v8[2].Flink + 1);
  return v8;
}
