/*
 * XREFs of sub_14045CDD6 @ 0x14045CDD6
 * Callers:
 *     sub_140396D30 @ 0x140396D30 (sub_140396D30.c)
 *     sub_14097F59C @ 0x14097F59C (sub_14097F59C.c)
 *     sub_1409824A4 @ 0x1409824A4 (sub_1409824A4.c)
 * Callees:
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028CF90 @ 0x14028CF90 (sub_14028CF90.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045C7CC @ 0x14045C7CC (sub_14045C7CC.c)
 *     sub_14045CC5A @ 0x14045CC5A (sub_14045CC5A.c)
 */

unsigned __int64 __fastcall sub_14045CDD6(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int8 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  unsigned int *v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  struct _KPRCB *v30; // r8
  __int64 v31; // rdx
  signed __int32 v32; // eax
  unsigned int v33; // r14d
  unsigned __int64 v34; // rdi
  unsigned int v35; // esi
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 *v39; // r9
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r8d
  int v45; // r8d
  __int64 v47; // [rsp+78h] [rbp-61h] BYREF
  int v48; // [rsp+80h] [rbp-59h]
  unsigned __int64 v49; // [rsp+88h] [rbp-51h]
  unsigned int *v50; // [rsp+90h] [rbp-49h]
  int v51; // [rsp+98h] [rbp-41h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-39h]
  ULONG_PTR v53; // [rsp+A8h] [rbp-31h]
  __int128 v54; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v55; // [rsp+C0h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-9h]
  unsigned __int8 *v57; // [rsp+D8h] [rbp-1h]
  int v58; // [rsp+138h] [rbp+5Fh]

  v47 = 0LL;
  v5 = 0LL;
  v6 = (unsigned int)dword_140D05004;
  v8 = a2;
  v9 = 0LL;
  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v54 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  v48 = dword_140D05004;
  v11 = sub_14023FF18(a1, 1u);
  v12 = qword_140C590C8;
  v13 = qword_14001C780[v10];
  v14 = (unsigned int *)v11;
  v15 = 0;
  v50 = (unsigned int *)v11;
  v16 = *(_QWORD *)(a1 + 16) + 24512 * v8;
  v52 = v16;
  v53 = qword_140C590C8;
  v58 = 0;
  if ( (unsigned int)v6 > 1 )
  {
    v9 = (unsigned __int8 *)(v16 + 22817);
    v15 = *(unsigned __int8 *)(v16 + 22817);
    v58 = v15;
  }
  v57 = &v9[v6];
  if ( v9 != &v9[v6] )
  {
    while ( (*((_DWORD *)CurrentThread + 344) & 1) == 0 )
    {
      v47 = sub_14045CC5A(a1, v8, v15, v13, v12, v14, a5);
      if ( v47 == -1 )
        goto LABEL_60;
      v17 = 1082130432;
      if ( v13 == 512 )
      {
        v17 = 1115684864;
      }
      else if ( v13 == 16 )
      {
        v17 = 1098907648;
      }
      v18 = v17 | 0x8000000;
      if ( !a5 )
        v18 = v17;
      if ( (int)sub_140277D10(a1, v47, v47 + v13 - 1, v13, 0, v13, 1u, v8, v58, v18, 0, 0LL, &v47) >= 0 )
      {
        if ( v13 >= 0x200 )
          sub_1402C38D0(a1, v47, v13, 0, 1);
        sub_14028CF90(v47, a3);
        v22 = 48 * v47 - 0x220000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          v19 = (-1LL << (CurrentIrql + 1)) & 4;
          v20 = (unsigned int)v19 | *(_DWORD *)(v21 + 20);
          *(_DWORD *)(v21 + 20) = v20;
        }
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v51, v19, v20, v21);
          while ( *(__int64 *)(v22 + 24) < 0 );
        }
        *(_QWORD *)&v54 = v47;
        v55 = 0LL;
        LOBYTE(v55) = 2;
        *((_QWORD *)&v54 + 1) = 1LL;
        v24 = sub_1402BEEA0((__int64)&v54);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v25 = KeGetCurrentIrql();
            if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v27 = *((_QWORD *)CurrentPrcb + 4375);
              v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
              *(_DWORD *)(v27 + 20) &= v28;
              if ( v29 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        sub_14028CE10(a1, v24);
        if ( (ULONG_PTR *)a1 == &StartContext )
        {
          v30 = KeGetCurrentPrcb();
          v31 = *((int *)v30 + 8615);
          if ( (_DWORD)v31 != -1 )
          {
            do
            {
              if ( v24 + v31 > 0x100 || v24 >= 0x80000 )
                break;
              v32 = _InterlockedCompareExchange((volatile signed __int32 *)v30 + 8615, v24 + v31, v31);
              v29 = (_DWORD)v31 == v32;
              v31 = v32;
              if ( v29 )
                goto LABEL_41;
            }
            while ( v32 != -1 );
            if ( (int)v31 > 192
              && (_DWORD)v31 == _InterlockedCompareExchange((volatile signed __int32 *)v30 + 8615, 192, v31) )
            {
              v24 += (int)v31 - 192;
            }
          }
        }
        if ( v24 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v24);
LABEL_41:
        v5 += v13;
        v49 = v5;
        if ( v5 >= a4 )
        {
LABEL_55:
          v14 = v50;
          break;
        }
      }
      v33 = dword_140D05004;
      v34 = 0LL;
      v35 = 0;
      if ( dword_140D05004 )
      {
        v36 = v52;
        do
          v34 += sub_140264BD8(v36, v35++, 0);
        while ( v35 < v33 );
        LODWORD(v8) = a2;
      }
      if ( v13 > 0x10 )
      {
        v37 = 0LL;
        v38 = a3 + 1;
        if ( (unsigned int)v38 <= 2 )
        {
          v39 = &qword_14001C780[v38];
          v40 = (_QWORD *)(v52 + 1072LL * (unsigned int)v38);
          v41 = (unsigned int)(3 - v38);
          do
          {
            v42 = *v40 + v40[1];
            v40 += 134;
            v43 = *v39++ * v42;
            v37 += v43;
            --v41;
          }
          while ( v41 );
        }
        v34 += v37;
      }
      LODWORD(v6) = v48;
      if ( v34 >= 0x1000 )
      {
        v5 = v49;
      }
      else
      {
        v44 = 0;
        if ( v48 )
        {
          do
          {
            v34 += sub_14045C7CC(a1, v8, v44);
            v44 = v45 + 1;
          }
          while ( v44 < (unsigned int)v6 );
        }
        v5 = v49;
        if ( v34 < a4 - v49 + 0x8000 )
          goto LABEL_55;
      }
      if ( !v47 )
      {
LABEL_60:
        ++v9;
        if ( (unsigned int)v6 <= 1 )
        {
          v15 = v58;
        }
        else
        {
          v15 = *v9;
          v58 = v15;
        }
        v14 = v50;
        v12 = v53;
        if ( v9 == v57 )
          break;
      }
      else
      {
        v15 = v58;
        v12 = v47 - 1;
        v14 = v50;
        v53 = v47 - 1;
      }
    }
  }
  sub_14023FD0C((__int64)v14, 1);
  return v5;
}
