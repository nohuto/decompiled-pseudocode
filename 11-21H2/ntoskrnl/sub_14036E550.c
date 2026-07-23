/*
 * XREFs of sub_14036E550 @ 0x14036E550
 * Callers:
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14036E0E4 @ 0x14036E0E4 (sub_14036E0E4.c)
 *     sub_14036E174 @ 0x14036E174 (sub_14036E174.c)
 *     sub_14036E388 @ 0x14036E388 (sub_14036E388.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

void __fastcall sub_14036E550(int *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rax

  v4 = a3;
  if ( a2 )
  {
    *(_QWORD *)(a3 + 8) = a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a3 = *(unsigned int *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(a1, CurrentIrql);
    else
      sub_14030F870(a1, CurrentIrql, a3, a4);
    *(_QWORD *)(v4 + 16) = CurrentIrql;
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a3 + 8) = a1;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  }
}
