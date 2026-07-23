/*
 * XREFs of sub_14026AEB0 @ 0x14026AEB0
 * Callers:
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     sub_1402313B4 @ 0x1402313B4 (sub_1402313B4.c)
 *     sub_14026B1C0 @ 0x14026B1C0 (sub_14026B1C0.c)
 *     sub_14026B2D4 @ 0x14026B2D4 (sub_14026B2D4.c)
 *     sub_14026B2EC @ 0x14026B2EC (sub_14026B2EC.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403137B0 @ 0x1403137B0 (sub_1403137B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_140882E88 @ 0x140882E88 (sub_140882E88.c)
 */

__int64 __fastcall sub_14026AEB0(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        int *a7,
        __int64 *a8)
{
  _QWORD *v8; // rbx
  unsigned __int64 *v9; // rsi
  int *v11; // r14
  unsigned int v13; // r10d
  __int64 v15; // r13
  unsigned int v16; // edx
  _QWORD *v17; // rax
  unsigned int v18; // r15d
  int *CurrentIrql; // rcx
  unsigned int v20; // ebp
  int v21; // ecx
  __int64 v22; // r14
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  unsigned __int8 v29; // di
  __int64 v30; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int8 v34; // di
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  __int64 v37; // r8
  int v38; // eax
  bool v39; // zf
  unsigned __int8 v40; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v42; // r8
  int v43; // eax

  v8 = a5;
  v9 = a6;
  v11 = a7;
  v13 = *((_DWORD *)a1 + 14);
  v15 = *a1;
  v16 = 0;
  v17 = (_QWORD *)a1[5];
  *a5 = 0LL;
  *v9 = 0LL;
  *v11 = 24;
  if ( v13 )
  {
    while ( a4 != *v17 )
    {
      ++v16;
      ++v17;
      if ( v16 >= v13 )
        goto LABEL_4;
    }
    v18 = 1;
    *a8 = qword_140C51DD0;
  }
  else
  {
LABEL_4:
    v18 = 0;
  }
  CurrentIrql = (int *)KeGetCurrentIrql();
  a7 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v32 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v32 + 20) |= (-1 << ((_BYTE)CurrentIrql + 1)) & 4;
  }
  LODWORD(a6) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&a6);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v20 = sub_1403137B0(v15, a3, a2);
  if ( v20 )
  {
    v21 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    *v9 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *v11 = v21;
    if ( v20 == 1 )
    {
      v22 = sub_14026B1C0(a2);
      v23 = 0LL;
      v24 = (*(_QWORD *)v22 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      v25 = v24 + 1664;
      v26 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v24 + 0x72E));
      if ( *(_DWORD *)(v26 + 1176) && *(_QWORD *)(v26 + 1296) == v24 )
        v25 = 0LL;
      if ( !v18
        && ((*(_DWORD *)(((*(_QWORD *)v22 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) + 0x9D4) & 0x1000) != 0
         || !(unsigned int)sub_14026B2EC(v24, *((unsigned int *)a1 + 60))) )
      {
        v25 = v23;
      }
      _m_prefetchw((const void *)(v24 - 48));
      v27 = *(_QWORD *)(v24 - 48);
      if ( v27 )
      {
        while ( 1 )
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 - 48), v27 + 1, v27);
          if ( v28 == v27 )
            break;
          if ( !v27 )
            goto LABEL_52;
        }
        if ( dword_140D05010 )
          sub_1405C5EC8(v24 - 48);
        *a5 = v24;
      }
      else
      {
LABEL_52:
        v25 = v23;
      }
      v8 = a5;
      if ( v22 != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_22;
    }
    if ( !v18 )
      goto LABEL_36;
    if ( v20 == 2 )
    {
      v25 = sub_14026DFC0(2LL);
      goto LABEL_22;
    }
    v33 = sub_1402313B4(a2);
    if ( v33 )
    {
      v25 = *(_QWORD *)(v33 + 1368) + 192LL;
      *a5 = v33;
    }
    else
    {
LABEL_36:
      v25 = 0LL;
    }
LABEL_22:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = (unsigned __int8)a7;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && (unsigned __int8)a7 <= 0xFu && v40 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v42 = *((_QWORD *)CurrentPrcb + 4375);
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)a7 + 1));
          v39 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
          *(_DWORD *)(v42 + 20) &= v43;
          if ( v39 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v29);
    if ( v25 )
    {
      if ( !v18 )
      {
        v30 = sub_14026B2D4(v20, v25);
        *a8 = v30;
      }
      if ( v20 == 1 && *(_QWORD *)(*v8 + 2288LL) && !(unsigned int)sub_140882E88(*v8, v18) )
        return 0LL;
    }
    return v25;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v34 = (unsigned __int8)a7;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)a7 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = *((_QWORD *)v36 + 4375);
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)a7 + 1));
        v39 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
        *(_DWORD *)(v37 + 20) &= v38;
        if ( v39 )
          sub_140418E4C(v36);
      }
    }
  }
  __writecr8(v34);
  return 0LL;
}
