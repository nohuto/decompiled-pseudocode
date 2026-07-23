/*
 * XREFs of sub_140A207C4 @ 0x140A207C4
 * Callers:
 *     sub_140A1E268 @ 0x140A1E268 (sub_140A1E268.c)
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 *     sub_140A20978 @ 0x140A20978 (sub_140A20978.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x14041E020 (ZwQueryBootEntryOrder.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A207C4(ULONG **a1, ULONG *a2)
{
  ULONG *v2; // rdi
  int v5; // ebx
  ULONG *PoolWithTag; // rax
  ULONG Count; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  Count = 0;
  v5 = sub_140813BA8(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootEntryOrder(0LL, &Count);
    if ( v5 != -1073741789 )
      goto LABEL_6;
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B444342u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
LABEL_10:
      sub_140813B50((unsigned int *)&v9);
      return (unsigned int)v5;
    }
    v5 = ZwQueryBootEntryOrder(PoolWithTag, &Count);
    if ( v5 < 0 )
    {
LABEL_6:
      sub_1408138F0(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)v5);
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = Count;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)v5;
}
