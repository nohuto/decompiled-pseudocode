/*
 * XREFs of sub_140279474 @ 0x140279474
 * Callers:
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_140279474(unsigned __int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  int v7; // eax
  unsigned __int64 v8; // rdi
  KIRQL v9; // al
  __int64 *v10; // r9
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v18; // r9
  int v19; // edx
  bool v20; // zf
  __int64 v21; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  *a2 = 0LL;
  if ( (__int64 *)qword_140C4F480 == &qword_140C4F480 )
    return 0LL;
  v7 = sub_14027B080(a1, a2, a3, a4);
  if ( v7 != 12 && v7 != 1 )
    return 0LL;
  v8 = 0LL;
  v9 = ExAcquireSpinLockShared(&dword_140C4F4A4);
  v10 = (__int64 *)qword_140C4F480;
  v11 = v9;
  while ( v10 != &qword_140C4F480 )
  {
    v12 = v10[2];
    if ( a1 >= v12 && a1 <= v10[3] )
    {
      v13 = (a1 - v12) >> 12;
      if ( _bittest(*(const signed __int32 **)(v10[5] + 8), v13) )
      {
        v21 = 0LL;
        v8 = v12 - v10[4];
        v15 = v10[6];
        *a3 = v13;
        *a2 = sub_140286F90(v15, (unsigned __int64)(unsigned int)v13 << 12, &v21);
      }
      break;
    }
    v10 = (__int64 *)*v10;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F4A4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return v8;
}
