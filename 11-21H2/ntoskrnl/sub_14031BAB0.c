/*
 * XREFs of sub_14031BAB0 @ 0x14031BAB0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 * Callees:
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140220160 (ExAcquireRundownProtectionCacheAware.c)
 *     sub_14022E210 @ 0x14022E210 (sub_14022E210.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_14031F940 @ 0x14031F940 (sub_14031F940.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14031BAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v6; // eax
  unsigned __int64 v7; // rbx
  char v8; // dl
  unsigned __int16 v9; // ax
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // r8
  char v13; // bp
  unsigned __int64 v14; // rdx
  ULONG_PTR *v15; // rdi
  struct _KPRCB *v16; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  char v19; // al
  unsigned __int8 v20; // di
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int8 v31; // bl
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  __int64 v34; // r8
  int v35; // eax
  bool v36; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v39; // r8
  int v40; // eax
  unsigned __int8 v41; // bl
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  __int64 v44; // r8
  int v45; // eax
  unsigned __int8 v46; // [rsp+70h] [rbp+8h] BYREF
  int v47; // [rsp+80h] [rbp+18h] BYREF
  int v48; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 > qword_140C50840 || (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
  {
    result = sub_140215E54(0, v4, a2, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x800u;
      return 0LL;
    }
    else
    {
      ++dword_140C52A90;
    }
    return result;
  }
  v6 = *(_DWORD *)(a1 + 72);
  v46 = 17;
  if ( (v6 & 0xF) != 4
    || (v29 = *(_QWORD *)(a1 + 8), (unsigned int)sub_1402FDD20(v29))
    || (v7 = sub_14022E210(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v46),
        v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x220000000000LL) >> 4),
        *(_QWORD *)(a1 + 136) = v4,
        !v7) )
  {
    v7 = 48 * v4 - 0x220000000000LL;
    v46 = 17;
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v47, a2, a3, a4);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v8 = *(_BYTE *)(v7 + 34);
  if ( (v8 & 7u) > 1 )
  {
    v9 = *(_WORD *)(v7 + 32);
    if ( v9 )
    {
      if ( v9 >= 0x7FFFu )
        goto LABEL_76;
      v10 = *(_QWORD *)(v7 + 40);
      v11 = 1;
      if ( (v10 & 0x10000000000LL) != 0 )
      {
LABEL_21:
        ++*(_WORD *)(v7 + 32);
        goto LABEL_26;
      }
      if ( (v10 & 0x20000000000000LL) != 0 )
      {
        ++*(_WORD *)(v7 + 32);
LABEL_26:
        if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
        {
          v30 = *(_QWORD *)(v7 + 16);
          if ( (v30 & 0x400) == 0 && (v30 & 4) != 0 )
            *(_BYTE *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 699LL) = 1;
        }
        v19 = *(_BYTE *)(v7 + 34);
        if ( (v19 & 0x20) != 0 && (v19 & 8) == 0 && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v7 + 232LL));
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v20 = v46;
        if ( v46 != 17 )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v46 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v39 = *((_QWORD *)CurrentPrcb + 4375);
                v20 = v46;
                v40 = ~(unsigned __int16)(-1LL << (v46 + 1));
                v36 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
                *(_DWORD *)(v39 + 20) &= v40;
                if ( v36 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v20);
        }
        if ( (*(_DWORD *)(a1 + 72) & 0xF) != 1 )
          goto LABEL_34;
        v21 = *(_QWORD *)(v7 + 40);
        if ( (v21 & 0x10000000000LL) != 0 )
          goto LABEL_34;
        if ( (((unsigned __int64)v21 >> 60) & 7) == 1 )
          goto LABEL_34;
        v22 = v21 & 0xFFFFFFFFFFLL;
        if ( (v21 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL || *(_QWORD *)(a1 + 144) == v22 )
          goto LABEL_34;
        if ( v21 < 0 )
        {
          v24 = v7;
        }
        else
        {
          v24 = 48 * v22 - 0x220000000000LL;
          v11 = 2;
        }
        if ( (unsigned int)sub_14031F940(v24, v11) )
        {
          if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
            *(_QWORD *)(a1 + 144) = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL;
          *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x100u;
LABEL_34:
          if ( *(char *)(*(_QWORD *)(a1 + 64) + 10LL) < 0 && *(__int64 *)(v7 + 40) < 0 )
          {
            v28 = *(_QWORD *)(v7 + 16);
            if ( (v28 & 0x400) != 0 )
            {
              if ( qword_140C50780 && (v28 & 0x10) == 0 )
                v28 &= ~qword_140C50780;
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v28 >> 16) + 112LL));
            }
          }
          if ( ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FF) != 0 )
            ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140C51F48
                                                                                            + 8
                                                                                            * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL))
                                                                                + 2368LL));
          return 0LL;
        }
        v48 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v48, v25, v26, v27);
          while ( *(__int64 *)(v7 + 24) < 0 );
        }
        sub_140336AD8(v7);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ++dword_140C52A8C;
        return 3221225633LL;
      }
      v12 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v9 == 1 )
      {
        if ( v12 || (v8 & 8) != 0 )
          goto LABEL_12;
      }
      else if ( v9 == 2 && v12 && (v8 & 8) != 0 )
      {
LABEL_12:
        v13 = 0;
        if ( v10 < 0 && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0
          || (v14 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL, v14 <= 0xFFFFF6BFFFFFFF78uLL)
          && v14 >= 0xFFFFF68000000000uLL
          && (*(_BYTE *)(v7 + 35) & 0x20) != 0 )
        {
          v13 = 1;
          v15 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v10 >> 43) & 0x3FF));
          if ( !(unsigned int)sub_14032A4B0(v15, 1LL, 8LL) )
            goto LABEL_76;
        }
        else
        {
          v15 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v10 >> 43) & 0x3FF));
        }
        if ( v15 == &StartContext )
        {
          v16 = KeGetCurrentPrcb();
          v17 = *((_DWORD *)v16 + 8615);
          while ( v17 )
          {
            if ( v17 == -1 )
              break;
            v18 = v17;
            v17 = _InterlockedCompareExchange((volatile signed __int32 *)v16 + 8615, v17 - 1, v17);
            if ( v18 == v17 )
              goto LABEL_21;
          }
        }
        if ( (unsigned int)sub_14028DC40((__int64)v15, 1uLL, 0LL) )
          goto LABEL_25;
        if ( v13 )
          sub_14028CE10((__int64)v15, 1LL);
LABEL_76:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v31 = v46;
        if ( v46 != 17 )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v32 = KeGetCurrentIrql();
              if ( v32 <= 0xFu && v46 <= 0xFu && v32 >= 2u )
              {
                v33 = KeGetCurrentPrcb();
                v34 = *((_QWORD *)v33 + 4375);
                v31 = v46;
                v35 = ~(unsigned __int16)(-1LL << (v46 + 1));
                v36 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
                *(_DWORD *)(v34 + 20) &= v35;
                if ( v36 )
                  sub_140418E4C(v33);
              }
            }
          }
          __writecr8(v31);
        }
        ++dword_140C52A88;
        return 3221225633LL;
      }
LABEL_25:
      ++*(_WORD *)(v7 + 32);
      goto LABEL_26;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v41 = v46;
  if ( v46 != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && v46 <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = *((_QWORD *)v43 + 4375);
          v41 = v46;
          v45 = ~(unsigned __int16)(-1LL << (v46 + 1));
          v36 = (v45 & *(_DWORD *)(v44 + 20)) == 0;
          *(_DWORD *)(v44 + 20) &= v45;
          if ( v36 )
            sub_140418E4C(v43);
        }
      }
    }
    __writecr8(v41);
  }
  ++dword_140C52A84;
  return 3221225477LL;
}
