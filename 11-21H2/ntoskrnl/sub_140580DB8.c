/*
 * XREFs of sub_140580DB8 @ 0x140580DB8
 * Callers:
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 * Callees:
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     sub_1402443D8 @ 0x1402443D8 (sub_1402443D8.c)
 *     sub_14025F344 @ 0x14025F344 (sub_14025F344.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140580088 @ 0x140580088 (sub_140580088.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140580DB8(unsigned __int16 *Object)
{
  _QWORD *v2; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v4; // edi
  _QWORD *v5; // rbp
  int v6; // r15d
  int v7; // ebx
  volatile LONG *v8; // rbx
  KIRQL v9; // al
  _QWORD *v10; // rax
  volatile LONG *v11; // rbx
  KIRQL v12; // al
  struct _WORK_QUEUE_ITEM *v13; // rbx
  struct _KEVENT *Blink; // rcx

  sub_1402393FC((ULONG_PTR)Object, 0LL);
  v2 = sub_140282AD0((__int64)(Object + 832));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = v2;
  if ( dword_140D05210 != 1 )
  {
    if ( (*((_DWORD *)Object + 281) & 8) != 0 )
    {
      v7 = 1;
      v6 = 0;
    }
    else
    {
      v7 = 0;
      v6 = sub_14032A4B0(*(_QWORD *)(qword_140C51F48 + 8LL * Object[919]), v2[1], 1u);
      if ( v6 )
        goto LABEL_15;
    }
    sub_140580088((__int64)Object, v5[1], 1, v7);
    _InterlockedOr((volatile signed __int32 *)Object + 543, 0x100u);
    v8 = (volatile LONG *)sub_140282AD0((__int64)(Object + 832));
    v9 = ExAcquireSpinLockExclusive(v8);
    *((_DWORD *)v8 + 1) = 0;
    *((_BYTE *)Object + 1851) |= 0x60u;
    sub_14030FA80((__int64)(Object + 832), v9);
    sub_14025F344((__int64)CurrentThread, (__int64)Object);
    sub_1402443D8((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v10 = (_QWORD *)v5[4];
    v10[2] = sub_140580D80;
    v10[3] = Object;
    *v10 = 0LL;
    goto LABEL_6;
  }
  v6 = 1;
LABEL_15:
  sub_140580088((__int64)Object, v5[1], 0, 0);
LABEL_6:
  v11 = (volatile LONG *)sub_140282AD0((__int64)(Object + 832));
  v12 = ExAcquireSpinLockExclusive(v11);
  *((_DWORD *)v11 + 1) = 0;
  if ( (*((_BYTE *)Object + 1851) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1851) = *((_BYTE *)Object + 1851) & 0x9F | 0x20;
  v13 = (struct _WORK_QUEUE_ITEM *)v5[4];
  if ( v6 )
  {
    v5[1] = 0LL;
    v5[4] = 0LL;
  }
  sub_14030FA80((__int64)(Object + 832), v12);
  sub_140241980(0LL, 0);
  Blink = (struct _KEVENT *)v13[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v6 )
  {
    ExFreePoolWithTag(v13, 0);
  }
  else
  {
    ExQueueWorkItem(v13, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v4;
}
