/*
 * XREFs of sub_140504CA8 @ 0x140504CA8
 * Callers:
 *     sub_140511600 @ 0x140511600 (sub_140511600.c)
 *     sub_1405157F0 @ 0x1405157F0 (sub_1405157F0.c)
 *     sub_140515FD0 @ 0x140515FD0 (sub_140515FD0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140504CA8(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  char v4; // si
  _QWORD **v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD **v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf
  _QWORD *v15; // rdx

  v2 = (KSPIN_LOCK *)(a1 + 176);
  v4 = 0;
  v5 = (_QWORD **)(a1 + 184);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v7 = *v5;
  if ( *v5 != v5 )
  {
    while ( 1 )
    {
      v8 = (_QWORD **)*v7;
      if ( v7 == a2 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v8 == v5 )
        goto LABEL_4;
    }
    v15 = (_QWORD *)v7[1];
    if ( v8[1] != v7 || (_QWORD *)*v15 != v7 )
      __fastfail(3u);
    *v15 = v8;
    v4 = 1;
    v8[1] = v15;
  }
LABEL_4:
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v4;
}
