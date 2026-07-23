/*
 * XREFs of sub_1402E29C8 @ 0x1402E29C8
 * Callers:
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402E29C8(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _InterlockedOr(v10, 0);
    result = *v1;
    if ( (*v1 & 1) != 0 )
      return sub_14024BA7C(a1 + 696);
  }
  else
  {
    result = *v1;
    if ( *v1 )
    {
      _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      KeAcquireSpinLockAtDpcLevel(v1);
      KeReleaseSpinLockFromDpcLevel(v1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v5 = KeGetCurrentIrql();
          if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = *((_QWORD *)CurrentPrcb + 4375);
            v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v8;
            if ( v9 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
