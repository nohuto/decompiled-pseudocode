/*
 * XREFs of sub_1405E11E4 @ 0x1405E11E4
 * Callers:
 *     sub_1405E0C00 @ 0x1405E0C00 (sub_1405E0C00.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056C444 @ 0x14056C444 (sub_14056C444.c)
 *     sub_14063E084 @ 0x14063E084 (sub_14063E084.c)
 */

__int64 __fastcall sub_1405E11E4(__int64 a1)
{
  KSPIN_LOCK *v1; // r13
  unsigned int v3; // r15d
  KIRQL v4; // bp
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 CurrentIrql; // al
  char v8; // cl
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned __int64 v12; // r14
  volatile signed __int32 *v13; // rbx
  unsigned __int64 v14; // rbp
  volatile signed __int32 *v15; // r13
  char v16; // al
  unsigned int v17; // ecx
  _QWORD *v18; // r14
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v21; // eax
  __int64 v22; // r8
  bool v23; // zf
  KIRQL v25; // [rsp+80h] [rbp+8h]
  __int64 v26; // [rsp+88h] [rbp+10h]

  v1 = (KSPIN_LOCK *)(a1 + 2440);
  v3 = 10000 * (*(_QWORD *)(a1 + 2416) & 0x3FFFFFFF);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
  v25 = v4;
  if ( v3 == *(_DWORD *)(a1 + 68) )
  {
    KeReleaseSpinLockFromDpcLevel(v1);
    if ( !dword_140D06B08 )
      goto LABEL_34;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_34;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu || v4 > 0xFu || CurrentIrql < 2u )
      goto LABEL_34;
    v8 = v4 + 1;
    goto LABEL_32;
  }
  v9 = 0LL;
  v10 = MEMORY[0xFFFFF78000000008];
  v11 = *(_DWORD *)(a1 + 68);
  v26 = MEMORY[0xFFFFF78000000008];
  if ( v3 <= v11 )
  {
    if ( v3 < v11 )
    {
      v12 = -1LL;
      v13 = *(volatile signed __int32 **)(a1 + 2448);
      if ( v13 != (volatile signed __int32 *)(a1 + 2448) )
      {
        v14 = 0LL;
        do
        {
          v15 = v13 - 72;
          sub_1402F3290(v13 - 72, v10, v5, v6);
          v16 = *((_BYTE *)v13 - 285) & 0x40;
          if ( v16 )
            v14 = *((_QWORD *)v15 + 3);
          _InterlockedAnd(v15, 0xFFFFFF7F);
          if ( v16 && v14 < v12 )
            v12 = v14;
          v13 = *(volatile signed __int32 **)v13;
        }
        while ( v13 != (volatile signed __int32 *)(a1 + 2448) );
        v11 = *(_DWORD *)(a1 + 68);
        v1 = (KSPIN_LOCK *)(a1 + 2440);
        v4 = v25;
        v10 = v26;
      }
      v17 = v11 - v3;
      if ( v12 - v17 >= v10 )
        v9 = -(__int64)v17;
      else
        v9 = v10 - v12;
    }
  }
  else
  {
    v9 = v3 - v11;
  }
  v18 = *(_QWORD **)(a1 + 2448);
  if ( v18 != (_QWORD *)(a1 + 2448) )
  {
    do
    {
      sub_14063E084((PKTIMER)(v18 - 36), v26);
      v18 = (_QWORD *)*v18;
    }
    while ( v18 != (_QWORD *)(a1 + 2448) );
    v4 = v25;
    v1 = (KSPIN_LOCK *)(a1 + 2440);
  }
  sub_14056C444(a1, v9, v3);
  KeReleaseSpinLockFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && v4 <= 0xFu && v19 >= 2u )
      {
        v8 = v4 + 1;
LABEL_32:
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << v8);
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        v23 = (v21 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v21;
        if ( v23 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
LABEL_34:
  __writecr8(v4);
  return 0LL;
}
