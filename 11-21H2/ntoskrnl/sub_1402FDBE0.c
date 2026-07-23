/*
 * XREFs of sub_1402FDBE0 @ 0x1402FDBE0
 * Callers:
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 * Callees:
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 */

__int64 __fastcall sub_1402FDBE0(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  volatile __int64 *v2; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int16 v9; // cx
  __int64 v11; // r9
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v2 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v14 = 0LL;
  v13[1] = BugCheckParameter1 + 96;
  v13[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v14) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v12 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v7 + 24) = v12 + 1;
      if ( v12 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(v13, v2);
  }
  else if ( _InterlockedExchange64(v2, (__int64)v13) )
  {
    sub_140311C70(v13);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v9 & 1) != 0 || dword_140C11740)
    && (BugCheckParameter2 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter2 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL);
  }
  if ( (v9 & 0x80u) != 0 )
    return sub_1402B02B0(BugCheckParameter1, BugCheckParameter2, v13);
  else
    return sub_1402B1740(BugCheckParameter1, BugCheckParameter2, v13);
}
