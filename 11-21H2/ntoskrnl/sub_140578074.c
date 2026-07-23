/*
 * XREFs of sub_140578074 @ 0x140578074
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140578174 @ 0x140578174 (sub_140578174.c)
 *     sub_140578370 @ 0x140578370 (sub_140578370.c)
 */

__int64 __fastcall sub_140578074(int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  KIRQL v7; // al
  ULONG_PTR v8; // rcx
  ULONG_PTR *v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf

  v6 = a1 != -1 ? 0xC0000225 : 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C2AAF8);
  v8 = qword_140C2AD50;
  v9 = &qword_140C2AD50;
  v10 = v7;
  while ( (ULONG_PTR *)v8 != v9 )
  {
    if ( a1 == -1 )
    {
      sub_140578370(v8);
    }
    else if ( *(_DWORD *)(v8 + 32) == a1 )
    {
      v6 = sub_140578174(v8, a2, a3);
      break;
    }
    v8 = *(_QWORD *)v8;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C2AAF8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return v6;
}
