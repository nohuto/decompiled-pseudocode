/*
 * XREFs of sub_140526F10 @ 0x140526F10
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140526F10(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  KIRQL v4; // r12
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // r9
  _QWORD *v7; // r15
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  KIRQL v22; // [rsp+80h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( a2 != *(_QWORD *)(v2 + 32) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A130);
    v22 = v4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 24));
    v7 = (_QWORD *)(v2 + 40);
    *(_QWORD *)(v2 + 32) = a2;
    v8 = *(_QWORD **)(v2 + 40);
    if ( v8 != (_QWORD *)(v2 + 40) )
    {
      do
      {
        v9 = (_QWORD *)v8[3];
        if ( v9 != v8 + 3 )
        {
          do
          {
            v10 = v9[5];
            v11 = *(_QWORD *)(v10 + 24);
            sub_14042A5E0(*(_QWORD *)(v11 + 16), *(_QWORD *)(v10 + 88));
            sub_14042A5E0(*(_QWORD *)(v11 + 16), *(unsigned int *)(v2 + 16));
            v9 = (_QWORD *)*v9;
          }
          while ( v9 != v8 + 3 );
          v7 = (_QWORD *)(v2 + 40);
        }
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v7 );
      v4 = v22;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 24));
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
    KeReleaseSpinLockFromDpcLevel(&qword_140C4A130);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && v4 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v20 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v16 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v16 )
            sub_140418E4C((__int64)v18);
        }
      }
    }
    __writecr8(v4);
  }
  return 0LL;
}
