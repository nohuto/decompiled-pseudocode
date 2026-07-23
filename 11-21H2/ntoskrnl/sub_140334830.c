/*
 * XREFs of sub_140334830 @ 0x140334830
 * Callers:
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140597ED0 @ 0x140597ED0 (sub_140597ED0.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_14028C9B4 @ 0x14028C9B4 (sub_14028C9B4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403365F0 @ 0x1403365F0 (sub_1403365F0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140591E04 @ 0x140591E04 (sub_140591E04.c)
 *     sub_140595E34 @ 0x140595E34 (sub_140595E34.c)
 */

__int64 __fastcall sub_140334830(_DWORD *a1, int *a2)
{
  __int64 v4; // r9
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // rbx
  char v18; // al
  bool v19; // zf
  char v20; // al
  int v21; // ecx
  __int64 result; // rax
  __int64 v23; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 v25; // eax
  __int64 v26; // r8
  unsigned __int8 v27; // cl
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  int v37; // eax
  _QWORD v38[14]; // [rsp+28h] [rbp-59h] BYREF
  int v39; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v40; // [rsp+F8h] [rbp+77h] BYREF
  __int64 v41; // [rsp+100h] [rbp+7Fh]

  memset(v38, 0, 0x68uLL);
  v5 = (__int64 *)(a1 + 12);
  v6 = (a1[8] + a1[11]) & 0xFFF;
  v7 = (unsigned int)a1[10] + 4095LL;
  v8 = (*a2 >> 31) & 0x43;
  LODWORD(v38[12]) = 1;
  v40 = v8;
  v38[2] = 0x3FFFFFFFFFLL;
  v38[3] = 0x3FFFFFFFFFLL;
  LODWORD(v38[1]) = 0;
  v9 = 0LL;
  v38[11] = 0LL;
  v10 = (unsigned __int64)(v6 + v7) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  v12 = 2LL;
  __writecr8(2uLL);
  v13 = LOBYTE(v38[11]) - 1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v26 + 20) |= ((_DWORD)v13 << (CurrentIrql + 1)) & 4;
    v12 = 2LL;
  }
  if ( v10 )
  {
    v14 = __ROL8__(1LL, CurrentIrql + 1);
    v41 = v14;
    while ( 1 )
    {
      v15 = *v5;
      v16 = v38[12];
      v17 = 48 * *v5 - 0x220000000000LL;
      if ( LODWORD(v38[12]) == 3 )
        goto LABEL_53;
      if ( v38[0] )
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          sub_140338660(v38, 0LL);
          if ( !v38[0] )
          {
            v12 = 2LL;
            goto LABEL_23;
          }
        }
      }
      else
      {
LABEL_23:
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v39, v14, v12, v4);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
      }
      if ( v16 != 1 )
      {
LABEL_53:
        switch ( v16 )
        {
          case 0:
            v28 = sub_140591E04(&v40, v17);
LABEL_60:
            v21 = v28;
            if ( v28 )
              goto LABEL_15;
            goto LABEL_25;
          case 2:
            v28 = sub_140595E34(&v40, v17);
            goto LABEL_60;
          case 3:
            goto LABEL_14;
        }
      }
      v18 = *(_BYTE *)(v17 + 34) & 0xF7;
      v19 = (v40 & 0x42) == 0;
      *(_BYTE *)(v17 + 34) = v18;
      if ( !v19 )
        *(_BYTE *)(v17 + 34) = v18 | 0x10;
      v19 = (*(_WORD *)(v17 + 32))-- == 1;
      if ( v19 )
      {
        if ( (*(_QWORD *)(v17 + 24) & 0x4000000000000000LL) != 0
          || (v20 = *(_BYTE *)(v17 + 35), (v20 & 0x40) != 0)
          || (v20 & 0x10) != 0 )
        {
          v21 = 2;
        }
        else
        {
LABEL_14:
          v21 = 1;
        }
LABEL_15:
        if ( !v38[0] )
        {
          if ( (*(_BYTE *)(v17 + 34) & 0x10) != 0 )
            LODWORD(v38[1]) = 3;
          else
            LODWORD(v38[1]) = 2;
        }
        if ( v21 == 1 )
        {
          sub_1403365F0(v38, v15);
          goto LABEL_18;
        }
        sub_140338660(v38, 1LL);
        if ( v16 )
        {
          if ( v16 == 2 )
          {
            sub_140231A68(&v40, v17);
          }
          else
          {
            sub_14028C9B4(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)), 1uLL, 1);
            sub_140338500(v17, v15);
          }
        }
        else
        {
          sub_140273FD0(v17, v29, v30, v31);
        }
        goto LABEL_30;
      }
LABEL_25:
      if ( v16 == 1 )
      {
        v23 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
        sub_14028CE10(v23, 1LL);
        v4 = 1LL;
        if ( (ULONG_PTR *)v23 != &StartContext )
          goto LABEL_46;
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((int *)CurrentPrcb + 8615);
        if ( (_DWORD)v14 == -1 )
          goto LABEL_46;
        if ( (unsigned __int64)(v14 + 1) <= 0x100 )
        {
          do
          {
            v25 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v14 + 1, v14);
            v19 = (_DWORD)v14 == v25;
            v14 = v25;
            if ( v19 )
              goto LABEL_30;
          }
          while ( v25 != -1 && (unsigned __int64)(v25 + 1LL) <= 0x100 );
        }
        if ( (int)v14 > 192
          && (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v14) )
        {
          v4 = (int)v14 - 192 + 1LL;
        }
        if ( v4 )
LABEL_46:
          v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 16960), v4);
      }
LABEL_30:
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
      if ( (++v9 & 0x3F) == 0 && KeShouldYieldProcessor() )
      {
        sub_140338660(v38, 0LL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v4 = *((_QWORD *)v33 + 4375);
              v14 = ~(unsigned __int16)-(__int16)v41;
              v19 = ((unsigned int)v14 & *(_DWORD *)(v4 + 20)) == 0;
              *(_DWORD *)(v4 + 20) &= v14;
              if ( v19 )
                sub_140418E4C(v33);
            }
          }
        }
        __writecr8(CurrentIrql);
        v27 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v27 <= 0xFu )
        {
          v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          v14 = (-1LL << (v27 + 1)) & 4;
          *(_DWORD *)(v4 + 20) |= v14;
        }
      }
      ++v5;
      v12 = 2LL;
      if ( !--v10 )
      {
        v13 = -1LL;
        break;
      }
    }
  }
  sub_140338660(v38, 0LL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = *((_QWORD *)v35 + 4375);
        v37 = ~(unsigned __int16)(v13 << (CurrentIrql + 1));
        v19 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
        *(_DWORD *)(v36 + 20) &= v37;
        if ( v19 )
          sub_140418E4C(v35);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
