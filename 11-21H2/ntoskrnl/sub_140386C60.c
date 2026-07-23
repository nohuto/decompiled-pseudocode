/*
 * XREFs of sub_140386C60 @ 0x140386C60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140386C60(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  __int64 **v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 *v10; // rbx
  __int64 *i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // edx
  bool v17; // zf

  v2 = (KSPIN_LOCK *)(a1 + 8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  v6 = (__int64 **)(a1 + 16);
  v7 = v5;
  v8 = 0LL;
  v9 = *a2 & -(__int64)(*a2 != 0LL);
  if ( *a2 )
    v6 = (__int64 **)*a2;
  v10 = (__int64 *)(a1 + 16);
  for ( i = *v6; i != v10; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 44) )
    {
      ++*((_DWORD *)i + 10);
      v8 = i[3];
      *a2 = i;
      break;
    }
  }
  if ( v9 )
  {
    --*(_DWORD *)(v9 + 40);
    if ( *(_BYTE *)(v9 + 44) )
    {
      if ( !*(_DWORD *)(v9 + 40) )
        KeSetEvent(&stru_140C15860, 0, 0);
    }
  }
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v8;
}
