/*
 * XREFs of ExTryAcquireAutoExpandPushLockShared @ 0x14039E320
 * Callers:
 *     <none>
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_14039E3FC @ 0x14039E3FC (sub_14039E3FC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExTryAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // esi
  ULONG_PTR v4; // rbx
  int v6; // r14d
  int v7; // ecx
  unsigned int v8; // esi

  v2 = 0LL;
  v3 = BugCheckParameter1;
  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v6 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = sub_140347C10(BugCheckParameter2, 0LL);
  v7 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v7 & 1) != 0 )
  {
    v4 = sub_14039E3FC(v7 & 0xFFFFFFF8, v3);
  }
  else
  {
    v8 = v3 | 2;
    if ( (v8 & 0xFFFFFFF8) != 0 )
      KeBugCheckEx(0x152u, v8, BugCheckParameter2, 0LL, 0LL);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
      || sub_140220664((signed __int64 *)BugCheckParameter2, v8) )
    {
      v4 = BugCheckParameter2 | 1;
    }
  }
  if ( !v6 && v4 )
    v4 |= 2uLL;
  if ( v2 )
  {
    if ( v4 )
      *(_BYTE *)(v2 + 18) = 1;
    else
      sub_140353BB0(BugCheckParameter2, v2);
  }
  return v4;
}
