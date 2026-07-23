/*
 * XREFs of sub_140572EC0 @ 0x140572EC0
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_14020F26C @ 0x14020F26C (sub_14020F26C.c)
 *     sub_14020F30C @ 0x14020F30C (sub_14020F30C.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140572EC0(unsigned int a1, char *a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // r9
  unsigned int i; // r8d
  unsigned __int64 j; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf

  v3 = (unsigned __int64 *)a2;
  result = sub_14020F30C(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KeAcquireSpinLockAtDpcLevel(&qword_140C2B8A0);
    sub_14020F26C(&qword_140D06A00);
    for ( i = 0; i < a1; ++v3 )
    {
      for ( j = *v3; j; *(_QWORD *)(qword_140D06FE8 + 16LL * ((i << 6) + (unsigned int)v11) + 8) = a3 )
      {
        _BitScanForward64(&v11, j);
        j &= ~(1LL << v11);
      }
      ++i;
    }
    ++qword_140D06A00;
    KeReleaseSpinLockFromDpcLevel(&qword_140C2B8A0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
