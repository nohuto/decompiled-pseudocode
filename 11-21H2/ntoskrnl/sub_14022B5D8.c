/*
 * XREFs of sub_14022B5D8 @ 0x14022B5D8
 * Callers:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

unsigned __int8 __fastcall sub_14022B5D8(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r9
  char v6; // al
  char v7; // al
  unsigned int v8; // edx
  char v9; // dl
  char v10; // cl
  int v11; // esi
  struct _KPRCB *v12; // rbx
  char v13; // si
  _QWORD *v14; // rdi
  unsigned __int8 result; // al
  __int64 v16; // rsi
  bool v17; // zf
  struct _KPRCB *CurrentPrcb; // rdi
  char v19; // si
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // r9
  struct _KPRCB *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  struct _KPRCB *v34; // r9
  __int64 v35; // r8
  int v36; // eax
  int v37; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v39[8]; // [rsp+40h] [rbp-20h] BYREF
  int v40; // [rsp+A8h] [rbp+48h] BYREF

  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  while ( 1 )
  {
    v17 = !_BitScanForward((unsigned int *)&v11, a2);
    if ( v17 )
      break;
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = v11 + 1;
    v40 = 0;
    while ( 1 )
    {
      v20 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v20 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v20 + 24);
          *(_DWORD *)(v20 + 24) = v22 + 1;
          if ( v22 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v21 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v23 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v23;
          if ( !v23 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v40);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v6 = *(_BYTE *)(v19 + BugCheckParameter1 + 824);
    if ( !v6 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v19, 2uLL, 0LL);
    v7 = v6 - 1;
    *(_BYTE *)(v19 + BugCheckParameter1 + 824) = v7;
    if ( !v7 )
    {
      v8 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v19);
      *(_DWORD *)(BugCheckParameter1 + 856) = v8;
      if ( v8 < 1 << v19 )
      {
        v9 = *(_BYTE *)(BugCheckParameter1 + 195);
        if ( v9 <= 31 )
        {
          v10 = *(_BYTE *)(BugCheckParameter1 + 563)
              + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
              + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
          if ( v10 < v9 )
            sub_140344A30(BugCheckParameter1, &v38, (unsigned int)v10);
        }
      }
    }
    sub_140224100(BugCheckParameter1);
    a2 &= a2 - 1;
  }
  v12 = KeGetCurrentPrcb();
  v13 = 0;
  v14 = v38;
  if ( v38 )
  {
    v38 = (_QWORD *)*v38;
    do
    {
      sub_1403405E0(v12, v14 - 27, &v38);
      v14 = v38;
      ++v13;
      if ( v38 )
        v38 = (_QWORD *)*v38;
      if ( (v13 & 0xF) == 0 )
        sub_140340300((char *)v12 + 12760);
    }
    while ( v14 );
  }
  result = sub_140340300((char *)v12 + 12760);
  if ( CurrentIrql >= 2u )
  {
    if ( *((_QWORD *)v12 + 2) )
    {
      result = *((_BYTE *)v12 + 13242);
      if ( !result )
      {
        if ( *((_BYTE *)v12 + 32) )
        {
          *((_BYTE *)v12 + 6) = 1;
        }
        else
        {
          v39[0] = 5;
          *(_OWORD *)&v39[1] = 0LL;
          return sub_1402ADD00(v39, 47LL);
        }
      }
    }
  }
  else
  {
    v16 = *((_QWORD *)v12 + 1);
    if ( *((_QWORD *)v12 + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)v12 + 1), 0LL);
      v25 = KeGetCurrentPrcb();
      v37 = 0;
      while ( 1 )
      {
        v26 = *((_QWORD *)v25 + 4375);
        if ( v26 )
        {
          if ( *((_BYTE *)v25 + 32) <= 1u )
          {
            v30 = *(_DWORD *)(v26 + 24);
            *(_DWORD *)(v26 + 24) = v30 + 1;
            if ( v30 == -1 )
              sub_140418E4C(v25);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v12 + 12, 0LL) )
          break;
        v29 = *((_QWORD *)v25 + 4375);
        if ( v29 )
        {
          if ( *((_BYTE *)v25 + 32) <= 1u )
          {
            v31 = *(_DWORD *)(v29 + 24) - 1;
            *(_DWORD *)(v29 + 24) = v31;
            if ( !v31 )
              sub_140418E4C(v25);
          }
        }
        do
          sub_1402F32E0(&v37);
        while ( *((_QWORD *)v12 + 6) );
      }
      v27 = *((_QWORD *)v12 + 2);
      *((_QWORD *)v12 + 2) = 0LL;
      _disable();
      LOBYTE(v24) = 1;
      sub_140345C80(v12, v16, 0LL, v24);
      _enable();
      *((_QWORD *)v12 + 1) = v27;
      if ( *(_BYTE *)(v27 + 388) == 1 )
        *(_DWORD *)(v27 + 132) = *(_DWORD *)(v27 + 132) - *(_DWORD *)(v27 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v27 + 388) = 2;
      *(_BYTE *)(v16 + 643) = 32;
      *(_BYTE *)(v16 + 390) = CurrentIrql;
      sub_1402B9970(v12, v16);
      LOBYTE(v28) = CurrentIrql;
      v17 = (unsigned __int8)sub_140428A30(v16, v27, v28) == 0;
    }
    else
    {
      v17 = (*(_DWORD *)(v16 + 116) & 0x40) == 0;
    }
    if ( !v17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v32 = KeGetCurrentPrcb();
          v33 = *((_QWORD *)v32 + 4375);
          v17 = (*(_DWORD *)(v33 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v33 + 20) &= 0xFFFF0003;
          if ( v17 )
            sub_140418E4C(v32);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v16 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v34 = KeGetCurrentPrcb();
      v35 = *((_QWORD *)v34 + 4375);
      v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
      *(_DWORD *)(v35 + 20) &= v36;
      if ( v17 )
        sub_140418E4C(v34);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
