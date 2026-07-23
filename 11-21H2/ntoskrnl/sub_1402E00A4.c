/*
 * XREFs of sub_1402E00A4 @ 0x1402E00A4
 * Callers:
 *     sub_1406E5154 @ 0x1406E5154 (sub_1406E5154.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E0130 @ 0x1402E0130 (sub_1402E0130.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402E00A4(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
  v3 = sub_1402E0130(a1);
  v4 = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 48));
  KeReleaseSpinLockFromDpcLevel(&qword_140C16660);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  KeReleaseMutex(&Object, 0);
  return v4;
}
