/*
 * XREFs of sub_14052A6F0 @ 0x14052A6F0
 * Callers:
 *     sub_14090AF30 @ 0x14090AF30 (sub_14090AF30.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14052A6F0(__int64 a1)
{
  KIRQL v2; // al
  char v3; // si
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C4A024);
  v3 = byte_140C4A0C8;
  v4 = v2;
  if ( a1 && !byte_140C4A0C8 )
  {
    xmmword_140C4A040 = *(_OWORD *)a1;
    byte_140C4A0C8 = 1;
    xmmword_140C4A050 = *(_OWORD *)(a1 + 16);
    xmmword_140C4A060 = *(_OWORD *)(a1 + 32);
    xmmword_140C4A070 = *(_OWORD *)(a1 + 48);
    xmmword_140C4A080 = *(_OWORD *)(a1 + 64);
    xmmword_140C4A090 = *(_OWORD *)(a1 + 80);
    xmmword_140C4A0A0 = *(_OWORD *)(a1 + 96);
    xmmword_140C4A0B0 = *(_OWORD *)(a1 + 112);
    qword_140C4A0C0 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4A024);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
