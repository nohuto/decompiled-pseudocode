/*
 * XREFs of sub_1402E8240 @ 0x1402E8240
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_140277C9C @ 0x140277C9C (sub_140277C9C.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402E8240(ULONG_PTR a1, unsigned __int8 a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v9; // r14
  int v10; // r12d
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r12
  BOOL v19; // eax
  int v20; // r8d
  __int64 v21; // r14
  unsigned int v23; // r14d
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  int v35; // edx
  __int64 v36; // r9
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // [rsp+20h] [rbp-38h]
  __int64 v42; // [rsp+60h] [rbp+8h]

  v6 = a2;
  if ( *(_WORD *)(a1 + 32) )
  {
    ++dword_140C29DE8;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( sub_140277C9C(a1) )
    {
      if ( !sub_140277C50(a1) )
      {
        v42 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v31 = *((_QWORD *)CurrentPrcb + 4375);
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v28 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
              *(_DWORD *)(v31 + 20) &= v32;
              if ( v28 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
        if ( a4 == -1 )
        {
          v10 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
          v11 = sub_1402E8990(a1);
          v12 = (a5 & 0x1000000 | 0x8000u) >> 8;
          v13 = (v11 << byte_140C506CD) | dword_140C50738 & v9 | (v10 << byte_140C506CC);
          if ( (a5 & 0x2000000) != 0 )
            LODWORD(v12) = v12 | 0x20000;
        }
        else
        {
          v12 = 48LL;
          v13 = dword_140C50738 & v9 | a4 & ~dword_140C50738;
        }
        v14 = sub_1403250B0(v42, v13, v12);
        v41 = v14;
        if ( v14 == -1 )
        {
          ++dword_140C29E14;
          return 1LL;
        }
        v15 = 48 * v14 - 0x220000000000LL;
        v18 = (unsigned __int8)sub_1402F2700(a1);
        if ( v15 == a1 )
        {
          v21 = -1LL;
LABEL_20:
          ++dword_140C29DA4;
          *(_QWORD *)(a1 + 16) = 0LL;
          sub_1402E89B0(a1 + 16, v16, v17);
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v37 = KeGetCurrentIrql();
              if ( v37 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v37 >= 2u )
              {
                v38 = KeGetCurrentPrcb();
                v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                v40 = *((_QWORD *)v38 + 4375);
                v28 = (v39 & *(_DWORD *)(v40 + 20)) == 0;
                *(_DWORD *)(v40 + 20) &= v39;
                if ( v28 )
                  sub_140418E4C(v38);
              }
            }
          }
          __writecr8(v18);
          if ( a6 )
            *a6 = v21;
          return 3LL;
        }
        if ( v9 > qword_140C50840
          || (*(_QWORD *)(16 * ((__int64)(a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0
          || _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
        {
          v20 = 0;
        }
        else
        {
          v19 = sub_140277C50(a1);
          v20 = 0;
          if ( !v19
            && !*(_WORD *)(a1 + 32)
            && *(char *)(a1 + 35) >= 0
            && v42 == *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
            && sub_140277C9C(a1) )
          {
            if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 2u )
            {
              sub_1402E7704(a1, v15, v20, a3);
              v21 = v41;
              goto LABEL_20;
            }
            v23 = 2;
            goto LABEL_28;
          }
        }
        v23 = v20;
LABEL_28:
        ++dword_140C29DE8;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
              v36 = *((_QWORD *)v34 + 4375);
              v28 = (v35 & *(_DWORD *)(v36 + 20)) == 0;
              *(_DWORD *)(v36 + 20) &= v35;
              if ( v28 )
                sub_140418E4C(v34);
            }
          }
        }
        __writecr8(v18);
        sub_140268408(v15);
        return v23;
      }
      ++dword_140C29DF0;
    }
    else
    {
      ++dword_140C29DEC;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v27;
        if ( v28 )
          sub_140418E4C(v25);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
