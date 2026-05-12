/*
 * XREFs of ?PmSwapList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C000A140
 * Callers:
 *     ?PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003690 (-PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmSwapList(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // [rsp+0h] [rbp-10h] BYREF
  struct _LIST_ENTRY *v9; // [rsp+8h] [rbp-8h]

  v9 = (struct _LIST_ENTRY *)&v8;
  v8 = (struct _LIST_ENTRY *)&v8;
  if ( a1->Flink->Blink != a1 )
    goto LABEL_2;
  Blink = a1->Blink;
  if ( Blink->Flink != a1 )
    goto LABEL_2;
  v9 = a1->Blink;
  v8 = a1;
  Blink->Flink = (struct _LIST_ENTRY *)&v8;
  a1->Blink = (struct _LIST_ENTRY *)&v8;
  Flink = a1->Flink;
  if ( a1->Flink->Blink != a1 )
    goto LABEL_2;
  if ( v8 != a1 )
    goto LABEL_2;
  v8 = a1->Flink;
  Flink->Blink = (struct _LIST_ENTRY *)&v8;
  a1->Blink = a1;
  a1->Flink = a1;
  if ( a2->Flink->Blink != a2 )
    goto LABEL_2;
  if ( a2->Blink->Flink != a2 )
    goto LABEL_2;
  a1->Flink = a2;
  a1->Blink = a2->Blink;
  a2->Blink->Flink = a1;
  v4 = a2->Flink;
  a2->Blink = a1;
  if ( v4->Blink != a2 )
    goto LABEL_2;
  if ( a1->Flink != a2 )
    goto LABEL_2;
  a1->Flink = v4;
  v4->Blink = a1;
  v5 = v8;
  a2->Blink = a2;
  a2->Flink = a2;
  if ( (struct _LIST_ENTRY **)v5->Blink != &v8
    || (v6 = v9, (struct _LIST_ENTRY **)v9->Flink != &v8)
    || (a2->Blink = v9,
        a2->Flink = (struct _LIST_ENTRY *)&v8,
        v6->Flink = a2,
        v7 = v8,
        v9 = a2,
        (struct _LIST_ENTRY **)v8->Blink != &v8)
    || (struct _LIST_ENTRY **)a2->Flink != &v8 )
  {
LABEL_2:
    __fastfail(3u);
  }
  a2->Flink = v8;
  v7->Blink = a2;
}
