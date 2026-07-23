/*
 * XREFs of sub_140250220 @ 0x140250220
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140250220(int a1)
{
  KIRQL v2; // al
  int v3; // ebp
  int i; // r8d
  KIRQL v5; // di
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C23060);
  v3 = 0;
  for ( i = a1 | dword_140C23108; ; i = (1 << v6) | dword_140C23108 )
  {
    v5 = v2;
    dword_140C23108 = i;
    if ( (dword_140C222B4 & i) == 0 )
      break;
    _BitScanForward((unsigned int *)&v6, dword_140C222B4 & i);
    v7 = ~(1 << v6);
    dword_140C23108 = i & v7;
    dword_140C222B4 &= v7;
    KeReleaseSpinLockFromDpcLevel(&qword_140C23060);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = -1LL << (v5 + 1);
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)v8;
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    if ( off_1400071F0[v6] )
      v3 |= sub_14042A5E0(off_1400071F0, v8);
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C23060);
  }
  dword_140C222B4 |= v3;
  KeReleaseSpinLockFromDpcLevel(&qword_140C23060);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && v5 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v14 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v14 )
          sub_140418E4C(v16);
      }
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
