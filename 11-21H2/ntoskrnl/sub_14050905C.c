/*
 * XREFs of sub_14050905C @ 0x14050905C
 * Callers:
 *     sub_140457ED8 @ 0x140457ED8 (sub_140457ED8.c)
 *     sub_1404584D6 @ 0x1404584D6 (sub_1404584D6.c)
 *     sub_1404585B4 @ 0x1404585B4 (sub_1404585B4.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14050905C(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 Pool2; // rax

  v4 = *(_BYTE *)(a1 + 434) != 0 ? 4 : 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)((char *)&unk_140C4E268 + v4), 1, 0) )
  {
    Pool2 = ExAllocatePool2(66LL, 56LL, 1147953480LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = sub_140505810;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(Pool2 + 44) = a2;
      *(_BYTE *)(Pool2 + 40) = *(_BYTE *)(a1 + 434);
      *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 148);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
    else
    {
      *(_DWORD *)((char *)&unk_140C4E268 + v4) = 0;
    }
  }
}
