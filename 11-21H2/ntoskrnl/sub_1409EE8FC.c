/*
 * XREFs of sub_1409EE8FC @ 0x1409EE8FC
 * Callers:
 *     sub_140883A50 @ 0x140883A50 (sub_140883A50.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14041AAB8 @ 0x14041AAB8 (sub_14041AAB8.c)
 *     sub_140460C72 @ 0x140460C72 (sub_140460C72.c)
 *     sub_140635B80 @ 0x140635B80 (sub_140635B80.c)
 *     sub_14088394C @ 0x14088394C (sub_14088394C.c)
 *     sub_1409F1DF4 @ 0x1409F1DF4 (sub_1409F1DF4.c)
 *     sub_1409F226C @ 0x1409F226C (sub_1409F226C.c)
 */

void __fastcall sub_1409EE8FC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int16 v7; // ax
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  v3 = 0LL;
  v9 = 0LL;
  if ( !sub_140460C72(a2) )
  {
    if ( (int)sub_14088394C(&v9) >= 0 && !(unsigned int)sub_1409F226C(a1, v5, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2544LL);
      if ( v6 )
      {
        v3 = v9;
        sub_1409F1DF4(
          v6,
          v9 + 16,
          a2 + 64,
          *(unsigned __int16 *)(a2 + 62),
          a2 + 64,
          *(unsigned __int16 *)(a2 + 60),
          (__int64)&v8);
        v7 = v8;
        *(_DWORD *)(a2 + 56) &= 0xFFFFFFF4;
        *(_WORD *)(a2 + 62) = v7;
        if ( v7 )
          *(_DWORD *)(a2 + 56) |= 4u;
        sub_140635B80(a1, a2);
        goto LABEL_11;
      }
    }
    v3 = v9;
  }
  if ( a2 )
    sub_14041AAB8(a1, a2);
LABEL_11:
  if ( v3 )
  {
    sub_1402AD030(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}
