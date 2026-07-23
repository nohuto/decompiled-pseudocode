/*
 * XREFs of sub_1402F0574 @ 0x1402F0574
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14028AE58 @ 0x14028AE58 (sub_14028AE58.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14063DFAC @ 0x14063DFAC (sub_14063DFAC.c)
 */

__int64 sub_1402F0574()
{
  struct _KTHREAD *CurrentThread; // r13
  KIRQL v1; // al
  _QWORD *v2; // r15
  KIRQL v3; // bl
  _QWORD *v4; // rax
  __int64 result; // rax
  ULONG_PTR v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // ebx
  unsigned __int64 v13; // r12
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r9
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CurrentThread + 150);
  v2 = (_QWORD *)((char *)CurrentThread + 1208);
  while ( 1 )
  {
    v3 = v1;
    v4 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    v6 = (ULONG_PTR)(v4 - 28);
    ObfReferenceObjectWithTag(v4 - 28, 0x746C6644u);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)CurrentThread + 150);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    v12 = 1;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 64));
    if ( (*(_BYTE *)(v6 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v6 + 80) )
      v12 = sub_14063DFAC((PKTIMER)v6) + 1;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 64));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = *((_QWORD *)v15 + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v11 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v11 )
            sub_140418E4C(v15);
        }
      }
    }
    __writecr8(v13);
    sub_14028AE58(v6, v12);
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CurrentThread + 150);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)CurrentThread + 150);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && v3 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << (v3 + 1));
        v11 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v11 )
          sub_140418E4C(v19);
      }
    }
  }
  result = v3;
  __writecr8(v3);
  return result;
}
