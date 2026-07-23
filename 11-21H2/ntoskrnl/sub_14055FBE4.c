/*
 * XREFs of sub_14055FBE4 @ 0x14055FBE4
 * Callers:
 *     sub_14085C97C @ 0x14085C97C (sub_14085C97C.c)
 *     sub_140942B68 @ 0x140942B68 (sub_140942B68.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14084440C @ 0x14084440C (sub_14084440C.c)
 *     sub_140942AC4 @ 0x140942AC4 (sub_140942AC4.c)
 *     sub_140942D5C @ 0x140942D5C (sub_140942D5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14055FBE4(_DWORD *P, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r8
  PVOID *v9; // rdx
  _DWORD **v10; // r8
  PVOID *v11; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (__int64 **)(P + 14);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v6 = *v5;
    if ( (__int64 **)v5[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      goto LABEL_20;
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    sub_140942AC4(v5);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C46AA0);
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= P[12];
  v8 = *(_QWORD **)P;
  v9 = (PVOID *)*((_QWORD *)P + 1);
  if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P
    || *v9 != P
    || (*v9 = v8, v8[1] = v9, v10 = (_DWORD **)*((_QWORD *)P + 2), v11 = (PVOID *)*((_QWORD *)P + 3), v10[1] != P + 4)
    || *v11 != P + 4 )
  {
LABEL_20:
    __fastfail(3u);
  }
  *v11 = v10;
  v10[1] = v11;
  KeReleaseSpinLockFromDpcLevel(&qword_140C46AA0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  sub_140942D5C(*((_QWORD *)P + 5), *((_QWORD *)P + 4));
  sub_14084440C(*((_QWORD *)P + 4));
  sub_14084440C(*((_QWORD *)P + 5));
  ExFreePoolWithTag(P, 0x53706E50u);
}
