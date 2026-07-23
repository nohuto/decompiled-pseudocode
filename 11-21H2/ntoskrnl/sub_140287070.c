/*
 * XREFs of sub_140287070 @ 0x140287070
 * Callers:
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_140287070(__int64 a1)
{
  int v1; // eax
  volatile LONG *v3; // rsi
  KIRQL v4; // al
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // rbx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v15; // r9
  int v16; // edx
  bool v17; // zf

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v10 = 0LL;
      v11 = a1 + 128;
      if ( a1 != -128 )
      {
        do
        {
          v12 = *(unsigned int *)(v11 + 44);
          v11 = *(_QWORD *)(v11 + 16);
          v10 += v12;
        }
        while ( v11 );
      }
      return v10;
    }
    else
    {
      return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
    }
  }
  else
  {
    v3 = (volatile LONG *)(a1 + 72);
    v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
    v5 = *(_QWORD *)(a1 + 280);
    v6 = 0LL;
    for ( i = v4; v5; v5 = *(_QWORD *)(v5 + 8) )
      v6 = v5;
    v8 = (*(unsigned int *)(v6 - 20) | ((unsigned __int64)(*(_WORD *)(v6 - 24) & 0xFFC0) << 26))
       + *(unsigned int *)(v6 - 12)
       - (unsigned __int64)(*(_DWORD *)(v6 - 4) & 0x3FFFFFFF);
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)i <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(i);
    return v8;
  }
}
