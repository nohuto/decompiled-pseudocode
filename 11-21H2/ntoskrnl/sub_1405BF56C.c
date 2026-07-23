/*
 * XREFs of sub_1405BF56C @ 0x1405BF56C
 * Callers:
 *     sub_140981A04 @ 0x140981A04 (sub_140981A04.c)
 * Callees:
 *     sub_1402416A4 @ 0x1402416A4 (sub_1402416A4.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140588C48 @ 0x140588C48 (sub_140588C48.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 */

__int64 __fastcall sub_1405BF56C(__int64 BugCheckParameter2)
{
  __int16 *v2; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // r10
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  __int16 *v16[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  v2 = **(__int16 ***)(*(_QWORD *)(BugCheckParameter2 + 176) + 56LL);
  sub_1402416A4(BugCheckParameter2, 0LL, 0LL, 0);
  v16[0] = v2;
  v16[1] = (__int16 *)BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(BugCheckParameter2 + 200));
  v4 = *(_QWORD **)(BugCheckParameter2 + 24);
  v5 = 0LL;
  v6 = v3;
  LOBYTE(v16[2]) = v3;
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    v7 = (_QWORD *)v5[1];
    v8 = (__int64)v5;
    v9 = v5;
    if ( v7 )
    {
      do
      {
        v5 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_QWORD *)*v5 == v9 )
          break;
        v9 = v5;
      }
    }
    sub_1405BCBC4(v8, 6uLL, 0LL, v16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 200));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return sub_140588C48((_QWORD *)BugCheckParameter2);
}
