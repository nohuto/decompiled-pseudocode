/*
 * XREFs of ExDeleteFastResource @ 0x14039FFC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteFastResource(__int64 *BugCheckParameter2)
{
  __int16 v2; // cx
  unsigned __int8 CurrentIrql; // al
  KIRQL v4; // al
  __int64 **v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  v2 = *((_WORD *)BugCheckParameter2 + 13);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( *((_DWORD *)BugCheckParameter2 + 16) )
    KeBugCheckEx(0x1C6u, 4uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  *((_WORD *)BugCheckParameter2 + 13) = v2 & 0xFFBE;
  v4 = ExAcquireSpinLockExclusive(&dword_140D310C0);
  v5 = (__int64 **)BugCheckParameter2[1];
  v6 = v4;
  v7 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v5 != BugCheckParameter2 )
    __fastfail(3u);
  *v5 = v7;
  v7[1] = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D310C0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  *BugCheckParameter2 = 0LL;
  BugCheckParameter2[1] = 0LL;
  return result;
}
