/*
 * XREFs of sub_140344800 @ 0x140344800
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     sub_1402947A0 @ 0x1402947A0 (sub_1402947A0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1403438F0 @ 0x1403438F0 (sub_1403438F0.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_140344640 @ 0x140344640 (sub_140344640.c)
 *     sub_1403597CC @ 0x1403597CC (sub_1403597CC.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     sub_140577B4C @ 0x140577B4C (sub_140577B4C.c)
 * Callees:
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

char __fastcall sub_140344800(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _QWORD *v3; // rsi
  char v4; // bp
  unsigned __int64 v5; // rdi
  __int64 v8; // rax
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct _KPRCB *v22; // rcx
  __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // rdx
  struct _KPRCB *v26; // r10
  __int64 v27; // r9
  int v29[14]; // [rsp+20h] [rbp-38h] BYREF
  int v30; // [rsp+70h] [rbp+18h] BYREF

  v3 = (_QWORD *)*a2;
  v4 = 0;
  v5 = a3;
  if ( *a2 )
  {
    *a2 = *v3;
    do
    {
      sub_1403405E0(a1, (ULONG_PTR)(v3 - 27), (__int64)a2);
      v3 = (_QWORD *)*a2;
      ++v4;
      if ( *a2 )
        *a2 = *v3;
      if ( (v4 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)(a1 + 12760));
    }
    while ( v3 );
  }
  sub_140340300((unsigned __int8 *)(a1 + 12760));
  v8 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)v5 >= 2u )
  {
    if ( v8 )
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 13242);
      if ( !(_BYTE)v8 )
      {
        if ( *(_BYTE *)(a1 + 32) )
        {
          *(_BYTE *)(a1 + 6) = 1;
        }
        else
        {
          v29[0] = 5;
          *(_OWORD *)&v29[1] = 0LL;
          LOBYTE(v8) = sub_1402ADD00(v29, 0x2Fu);
        }
      }
    }
    return v8;
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    sub_1402B4EC0(*(_QWORD *)(a1 + 8), 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = 0;
    v14 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v14 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v19 = *(_DWORD *)(v14 + 24);
        *(_DWORD *)(v14 + 24) = v19 + 1;
        if ( v19 == -1 )
LABEL_32:
          sub_140418E4C(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      v17 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v17 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v20 = *(_DWORD *)(v17 + 24) - 1;
          *(_DWORD *)(v17 + 24) = v20;
          if ( !v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v30, v10, v11, v12);
      while ( *(_QWORD *)(a1 + 48) );
      v18 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v18 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v21 = *(_DWORD *)(v18 + 24);
          *(_DWORD *)(v18 + 24) = v21 + 1;
          if ( v21 == -1 )
            goto LABEL_32;
        }
      }
    }
    v15 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    _disable();
    LOBYTE(v12) = 1;
    sub_140345C80(a1, v9, 0LL, v12);
    _enable();
    *(_QWORD *)(a1 + 8) = v15;
    if ( *(_BYTE *)(v15 + 388) == 1 )
      *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v15 + 388) = 2;
    *(_BYTE *)(v9 + 643) = 32;
    *(_BYTE *)(v9 + 390) = v5;
    sub_1402B9970(a1, v9, v16);
    if ( !(unsigned __int8)sub_140428A30(v9, v15, (unsigned __int8)v5) )
      goto LABEL_13;
    if ( !dword_140D06B08 )
      goto LABEL_24;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_24;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_24;
    v22 = KeGetCurrentPrcb();
    v23 = *((_QWORD *)v22 + 4375);
    v24 = (*(_DWORD *)(v23 + 20) & 0xFFFF0003) == 0;
    *(_DWORD *)(v23 + 20) &= 0xFFFF0003;
    if ( !v24 )
      goto LABEL_24;
    goto LABEL_47;
  }
  if ( (*(_DWORD *)(v9 + 116) & 0x40) == 0 )
    goto LABEL_13;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v22 = KeGetCurrentPrcb();
      v25 = *((_QWORD *)v22 + 4375);
      v24 = (*(_DWORD *)(v25 + 20) & 0xFFFF0003) == 0;
      *(_DWORD *)(v25 + 20) &= 0xFFFF0003;
      if ( v24 )
LABEL_47:
        sub_140418E4C(v22);
    }
  }
LABEL_24:
  __writecr8(1uLL);
  *(_DWORD *)(v9 + 116) &= ~0x40u;
  sub_1402F1DC0(0, 0LL, 0LL);
LABEL_13:
  LOBYTE(v8) = dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      LOBYTE(v8) = KeGetCurrentIrql() - 2;
      if ( (unsigned __int8)v8 <= 0xDu )
      {
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        LODWORD(v8) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v24 = ((unsigned int)v8 & *(_DWORD *)(v27 + 20)) == 0;
        *(_DWORD *)(v27 + 20) &= v8;
        if ( v24 )
          LOBYTE(v8) = sub_140418E4C(v26);
      }
    }
  }
  __writecr8(v5);
  return v8;
}
