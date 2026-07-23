/*
 * XREFs of sub_140B50C78 @ 0x140B50C78
 * Callers:
 *     sub_140B1B2C0 @ 0x140B1B2C0 (sub_140B1B2C0.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140B50C78()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  signed __int8 v5; // cf
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  signed __int32 v14; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !HIDWORD(KeGetPcr()[1].LockArray) )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = 0LL;
    _disable();
    v2 = *((unsigned __int8 *)CurrentThread + 792);
    if ( *((_BYTE *)CurrentThread + 792)
      || (v2 = sub_14029F6A8((__int64)&BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v3, v2);
      *((_BYTE *)CurrentThread + 792) = v2 & ~(1 << v3);
      _enable();
      v1 = (unsigned __int64)CurrentThread + 96 * v3 + 1696;
      if ( (unsigned __int64)&BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v4 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v4 = -1;
      *(_DWORD *)(v1 + 8) = v4;
      *(_QWORD *)v1 = &BugCheckParameter2;
    }
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
    if ( v1 )
    {
      if ( v5 )
        sub_140353BB0((ULONG_PTR)&BugCheckParameter2, v1);
      else
        *(_BYTE *)(v1 + 18) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v14);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
