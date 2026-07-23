/*
 * XREFs of sub_1403B5BB0 @ 0x1403B5BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char sub_1403B5BB0()
{
  int v0; // ebp
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  v0 = 0;
  v1 = sub_140252344(&qword_140C4AB88);
  v2 = (unsigned int)(dword_140C54BFC + 1);
  v3 = dword_140C54BFC & 0x7F;
  v4 = *(_QWORD *)(qword_140C54A88 + 56);
  v5 = *(_QWORD *)(qword_140C54A88 + 64);
  v6 = *(_QWORD *)(qword_140C54A88 + 16);
  ++dword_140C54BFC;
  if ( v4 )
    v0 = sub_14042A5E0(v6, v2);
  if ( v5 )
    sub_14042A5E0(v6, v2);
  dword_140C4A880[v3] = v0;
  word_140C4AA80[v3] = HIDWORD(KeGetPcr()[1].LockArray);
  KeReleaseSpinLockFromDpcLevel(&qword_140C4AB88);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  return 1;
}
