/*
 * XREFs of sub_140577F94 @ 0x140577F94
 * Callers:
 *     IoSteerInterrupt @ 0x140942160 (IoSteerInterrupt.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140578174 @ 0x140578174 (sub_140578174.c)
 *     sub_140578370 @ 0x140578370 (sub_140578370.c)
 */

__int64 __fastcall sub_140577F94(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ebx
  KIRQL v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C2AAF8);
    v8 = *(_QWORD *)(v3 + 16);
    v9 = v7;
    if ( a3 )
    {
      v6 = sub_140578174(v8, a2, a3);
    }
    else
    {
      sub_140578370(v8);
      v6 = 0;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C2AAF8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
