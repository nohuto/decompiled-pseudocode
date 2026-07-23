/*
 * XREFs of sub_14051CFB0 @ 0x14051CFB0
 * Callers:
 *     sub_14051D9E4 @ 0x14051D9E4 (sub_14051D9E4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14051CFB0(__int64 a1)
{
  __int64 Pool2; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 *v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  Pool2 = ExAllocatePool2(64LL, 16 * (*(unsigned __int16 *)(a1 + 20) + 10LL), 845963592LL);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(Pool2 + 20) = *(unsigned __int16 *)(a1 + 20);
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a1 + 64);
    *(_QWORD *)(Pool2 + 104) = *(_QWORD *)(a1 + 80);
    ObfReferenceObjectWithTag(*(PVOID *)(Pool2 + 48), 0x326C6148u);
    *(_WORD *)(v4 + 120) = 1;
    *(_QWORD *)(v4 + 136) = v4 + 128;
    *(_QWORD *)(v4 + 128) = v4 + 128;
    *(_BYTE *)(v4 + 122) = 6;
    *(_DWORD *)(v4 + 124) = 1;
    v5 = sub_140252344(&qword_140C4B0D0);
    v6 = (__int64 *)qword_140C4B0C8;
    if ( *(__int64 **)qword_140C4B0C8 != &qword_140C4B0C0 )
      __fastfail(3u);
    *(_QWORD *)v4 = &qword_140C4B0C0;
    *(_QWORD *)(v4 + 8) = v6;
    *v6 = v4;
    qword_140C4B0C8 = v4;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4B0D0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
