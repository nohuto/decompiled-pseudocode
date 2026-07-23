/*
 * XREFs of sub_1405F577C @ 0x1405F577C
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_1402058C0 @ 0x1402058C0 (sub_1402058C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405F577C(unsigned int a1, int *a2, __int64 a3)
{
  unsigned int v5; // esi
  volatile LONG *v6; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _DWORD *Pool2; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf

  v5 = 0;
  v6 = (volatile LONG *)sub_1402058C0(a1);
  v7 = v6;
  if ( !v6 )
    return v5;
  v8 = ExAcquireSpinLockExclusive(v6);
  v9 = *((_QWORD *)v7 + 2);
  v10 = v8;
  if ( !v9 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 48LL, 1950442835LL);
    *((_QWORD *)v7 + 2) = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741801;
      goto LABEL_7;
    }
    *Pool2 = 0;
    *(_DWORD *)(*((_QWORD *)v7 + 2) + 24LL) = 0;
    v12 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
    v12[1] = v12;
    *v12 = v12;
    v13 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
    v13[1] = v13;
    *v13 = v13;
    v9 = *((_QWORD *)v7 + 2);
  }
  v5 = sub_140204870(v9, a2, a3);
  *((_DWORD *)off_140C06A88 + 4) |= 1u;
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return v5;
}
