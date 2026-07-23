/*
 * XREFs of sub_1403983A0 @ 0x1403983A0
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14025298C @ 0x14025298C (sub_14025298C.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1403983A0()
{
  unsigned __int64 v1; // r15
  __int64 v2; // r12
  __int64 *v3; // rdi
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11720, 0LL) )
    sub_14029F120(&qword_140C11720, 0LL, (__int64)&qword_140C11720);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = (__int64 *)qword_140C11730;
  while ( v3 != &qword_140C11730 )
  {
    v4 = (__int64)(v3 - 33);
    v3 = (__int64 *)*v3;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 64));
    if ( *(_QWORD *)(v4 + 256) )
      sub_14025298C(v4, v2, v1, 1);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 64));
  }
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
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
