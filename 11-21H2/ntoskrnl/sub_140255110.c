/*
 * XREFs of sub_140255110 @ 0x140255110
 * Callers:
 *     sub_1406DCB98 @ 0x1406DCB98 (sub_1406DCB98.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
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
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14062E0D0 @ 0x14062E0D0 (sub_14062E0D0.c)
 */

char __fastcall sub_140255110(__int64 a1, int a2)
{
  void *v2; // rax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // r15
  __int64 v8; // rcx
  int v9; // r13d
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  char v15; // r14
  __int64 v16; // r14
  bool v17; // zf
  __int64 v18; // r9
  __int64 v19; // r9
  struct _KPRCB *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  struct _KPRCB *v34; // r9
  __int64 v35; // r8
  int v36; // eax
  int v38; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v39; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v40[8]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+40h]
  int v42; // [rsp+B8h] [rbp+58h] BYREF

  v2 = &unk_140D32B00;
  if ( *(_UNKNOWN **)(a1 + 544) != &unk_140D32B00 )
  {
    v39 = 0LL;
    v41 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v18 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v42 = 0;
    v7 = *((_QWORD *)CurrentPrcb + 1);
    while ( 1 )
    {
      v8 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v8 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v25 = *(_DWORD *)(v8 + 24);
          *(_DWORD *)(v8 + 24) = v25 + 1;
          if ( v25 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v24 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v24 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v26 = *(_DWORD *)(v24 + 24) - 1;
          *(_DWORD *)(v24 + 24) = v26;
          if ( !v26 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v42);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v9 = *(char *)(a1 + 195);
    if ( v9 < 16 && !*(_BYTE *)(a1 + 564) )
    {
      v10 = a2 + *(char *)(a1 + 563);
      if ( v10 > v9 )
      {
        v11 = (unsigned int)v10;
        if ( v10 >= 16 )
          v11 = 15LL;
        v41 = v11;
        if ( a1 != v7 || *((_BYTE *)CurrentPrcb + 32) )
        {
          v12 = *(_QWORD *)(a1 + 72);
        }
        else
        {
          _disable();
          v12 = sub_140345AA0(CurrentPrcb, a1, 0LL);
          _enable();
          v11 = v41;
        }
        v13 = v12 + dword_140D050CC * (unsigned int)*(unsigned __int8 *)(a1 + 651);
        if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
        *(_QWORD *)(a1 + 32) = v13;
        sub_140344A30(a1, &v39, v11);
      }
    }
    sub_140224100(a1);
    v14 = v39;
    v15 = 0;
    if ( v39 )
    {
      v39 = (_QWORD *)*v39;
      do
      {
        sub_1403405E0(CurrentPrcb, v14 - 27, &v39);
        v14 = v39;
        ++v15;
        if ( v39 )
          v39 = (_QWORD *)*v39;
        if ( (v15 & 0xF) == 0 )
          sub_140340300((char *)CurrentPrcb + 12760);
      }
      while ( v14 );
    }
    LOBYTE(v2) = sub_140340300((char *)CurrentPrcb + 12760);
    if ( CurrentIrql >= 2u )
    {
      if ( *((_QWORD *)CurrentPrcb + 2) )
      {
        LOBYTE(v2) = *((_BYTE *)CurrentPrcb + 13242);
        if ( !(_BYTE)v2 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) )
          {
            LOBYTE(v2) = 1;
            *((_BYTE *)CurrentPrcb + 6) = 1;
          }
          else
          {
            v40[0] = 5;
            *(_OWORD *)&v40[1] = 0LL;
            LOBYTE(v2) = sub_1402ADD00(v40, 47LL);
          }
        }
      }
    }
    else
    {
      v16 = *((_QWORD *)CurrentPrcb + 1);
      if ( *((_QWORD *)CurrentPrcb + 2) )
      {
        sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0LL);
        v20 = KeGetCurrentPrcb();
        v38 = 0;
        v21 = *((_QWORD *)v20 + 4375);
        if ( v21 )
        {
          if ( *((_BYTE *)v20 + 32) <= 1u )
          {
            v27 = *(_DWORD *)(v21 + 24);
            *(_DWORD *)(v21 + 24) = v27 + 1;
            if ( v27 == -1 )
              sub_140418E4C(v20);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
        {
          v28 = *((_QWORD *)v20 + 4375);
          if ( v28 )
          {
            if ( *((_BYTE *)v20 + 32) <= 1u )
            {
              v29 = *(_DWORD *)(v28 + 24) - 1;
              *(_DWORD *)(v28 + 24) = v29;
              if ( !v29 )
                sub_140418E4C(v20);
            }
          }
          do
            sub_1402F32E0(&v38);
          while ( *((_QWORD *)CurrentPrcb + 6) );
          v30 = *((_QWORD *)v20 + 4375);
          if ( v30 )
          {
            if ( *((_BYTE *)v20 + 32) <= 1u )
            {
              v31 = *(_DWORD *)(v30 + 24);
              *(_DWORD *)(v30 + 24) = v31 + 1;
              if ( v31 == -1 )
                sub_140418E4C(v20);
            }
          }
        }
        v22 = *((_QWORD *)CurrentPrcb + 2);
        *((_QWORD *)CurrentPrcb + 2) = 0LL;
        _disable();
        LOBYTE(v19) = 1;
        sub_140345C80(CurrentPrcb, v16, 0LL, v19);
        _enable();
        *((_QWORD *)CurrentPrcb + 1) = v22;
        if ( *(_BYTE *)(v22 + 388) == 1 )
          *(_DWORD *)(v22 + 132) = *(_DWORD *)(v22 + 132) - *(_DWORD *)(v22 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v22 + 388) = 2;
        *(_BYTE *)(v16 + 643) = 32;
        *(_BYTE *)(v16 + 390) = CurrentIrql;
        sub_1402B9970(CurrentPrcb, v16);
        LOBYTE(v23) = CurrentIrql;
        v17 = (unsigned __int8)sub_140428A30(v16, v22, v23) == 0;
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
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v34 = KeGetCurrentPrcb();
          v35 = *((_QWORD *)v34 + 4375);
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
          *(_DWORD *)(v35 + 20) &= v36;
          if ( v17 )
            sub_140418E4C(v34);
        }
      }
      LOBYTE(v2) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    if ( (WORD2(xmmword_140D06900) & 0x2000) != 0 )
    {
      LOBYTE(v2) = v41;
      if ( v41 )
        LOBYTE(v2) = sub_14062E0D0(a1, 1328, v9, v41, 0LL);
    }
  }
  return (char)v2;
}
