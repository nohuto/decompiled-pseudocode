/*
 * XREFs of sub_140A8883C @ 0x140A8883C
 * Callers:
 *     sub_140A85840 @ 0x140A85840 (sub_140A85840.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_140A8883C(_QWORD *a1)
{
  char v2; // bl
  void *v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  __int64 **v13; // rdx

  v2 = 0;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140D577C0);
  v5 = qword_140D577B0;
  if ( (__int64 *)qword_140D577B0 != &qword_140D577B0 )
  {
    while ( 1 )
    {
      v3 = (void *)v5;
      v6 = *(__int64 **)v5;
      if ( *(_QWORD *)(v5 + 16) == *a1 )
        break;
      v5 = *(_QWORD *)v5;
      if ( v6 == &qword_140D577B0 )
        goto LABEL_4;
    }
    v2 = 1;
    v13 = *(__int64 ***)(v5 + 8);
    if ( v6[1] != v5 || *v13 != (__int64 *)v5 )
      __fastfail(3u);
    *v13 = v6;
    v6[1] = (__int64)v13;
  }
LABEL_4:
  KeReleaseSpinLockFromDpcLevel(&qword_140D577C0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
