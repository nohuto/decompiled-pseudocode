/*
 * XREFs of sub_14088399A @ 0x14088399A
 * Callers:
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14088394C @ 0x14088394C (sub_14088394C.c)
 *     sub_1409EF3C8 @ 0x1409EF3C8 (sub_1409EF3C8.c)
 *     sub_1409EF4C4 @ 0x1409EF4C4 (sub_1409EF4C4.c)
 *     sub_1409F226C @ 0x1409F226C (sub_1409F226C.c)
 */

void __fastcall sub_14088399A(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)sub_14088394C(&BugCheckParameter2) < 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    v5 = BugCheckParameter2;
    sub_1409EF4C4(BugCheckParameter2);
    goto LABEL_7;
  }
  if ( (unsigned int)sub_1409F226C(a1, v4, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
  {
LABEL_6:
    v5 = BugCheckParameter2;
  }
  else
  {
    v5 = BugCheckParameter2;
    sub_1409EF3C8(BugCheckParameter2);
  }
LABEL_7:
  if ( v5 )
  {
    sub_1402AD030(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}
