/*
 * XREFs of sub_1402B7320 @ 0x1402B7320
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_140584A30 @ 0x140584A30 (sub_140584A30.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAware @ 0x140221D90 (ExReleaseRundownProtectionCacheAware.c)
 *     sub_140235E40 @ 0x140235E40 (sub_140235E40.c)
 *     sub_14027031C @ 0x14027031C (sub_14027031C.c)
 *     sub_14028CB64 @ 0x14028CB64 (sub_14028CB64.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E5B0C @ 0x1402E5B0C (sub_1402E5B0C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 */

void __fastcall sub_1402B7320(__int64 a1, __int16 a2, __int64 *a3, int *a4)
{
  char v6; // bp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  volatile signed __int64 *v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  char v15; // al
  __int16 v16; // ax
  bool v17; // zf
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // ebp
  unsigned __int64 v22; // rdx
  __int64 v23; // r14
  unsigned __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v26; // rdx
  signed __int32 v27; // eax
  int v28; // eax
  unsigned __int8 v29; // bp
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( (v8 & 0x10000000000LL) == 0
      && (((unsigned __int64)v8 >> 60) & 7) != 1
      && (v8 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
    {
      v9 = *a3;
      if ( *a3 != (v8 & 0xFFFFFFFFFFLL) )
      {
        if ( v9 != 0x3FFFFFFFFFLL )
        {
          sub_1402E5B0C(48 * v9 - 0x220000000000LL);
          v8 = *(_QWORD *)(a1 + 40);
        }
        v28 = 1;
        if ( v8 >= 0 )
          v28 = 2;
        *a4 = v28;
        *a3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
      }
    }
  }
  v10 = 0LL;
  v36 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v36);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v14 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v15 = *(_BYTE *)(a1 + 34);
  if ( (v15 & 0x20) != 0 && (v15 & 8) == 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v12 = *(_QWORD *)a1 - 32LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v12 + 264));
  }
  if ( v6 < 0 )
  {
    if ( !v12 )
    {
      v29 = *(_BYTE *)(a1 + 34);
      v30 = *(_QWORD *)(a1 + 16);
      if ( (((v30 & 0x400) == 0) & (unsigned __int8)~(v29 >> 3)) != 0 && (v30 & 4) != 0 )
      {
        v13 = sub_140317A10(a1 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
        *(_QWORD *)(a1 + 16) = v30 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      *(_BYTE *)(a1 + 34) = v29 | 0x10;
    }
    v31 = *(_QWORD *)(a1 + 40);
    if ( (v31 & 0x10000000000LL) == 0 && v31 < 0 )
    {
      v32 = *(_QWORD *)(a1 + 16);
      if ( (v32 & 0x400) != 0 )
      {
        if ( qword_140C50780 && (v32 & 0x10) == 0 )
          v32 &= ~qword_140C50780;
        v11 = *(volatile signed __int64 **)(v32 >> 16);
      }
    }
  }
  v16 = *(_WORD *)(a1 + 32);
  if ( !v16 )
    sub_1405AD67C(a1);
  v17 = v16 == 1;
  v18 = v16 - 1;
  v19 = *(_QWORD *)(a1 + 40);
  *(_WORD *)(a1 + 32) = v18;
  if ( v17 && (v19 & 0x20000000000000LL) != 0 )
    goto LABEL_71;
  if ( (v19 & 0x10000000000LL) == 0 && (v19 & 0x20000000000000LL) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        if ( !v20 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
          goto LABEL_30;
      }
      else if ( v18 != 2 || !v20 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
      {
        goto LABEL_30;
      }
      v21 = 0;
    }
    else
    {
      v21 = 1;
    }
    v22 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( v22 > 0xFFFFF6BFFFFFFF78uLL || v22 < 0xFFFFF68000000000uLL )
    {
      v33 = *(_BYTE *)(a1 + 35);
      if ( (v33 & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 35) = v33 & 0xDF;
        goto LABEL_29;
      }
    }
    if ( v19 < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || v22 <= 0xFFFFF6BFFFFFFF78uLL && v22 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a1 + 35) & 0x20) != 0
      || v21 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v23 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
      sub_14028CE10(v23, 1LL);
    }
    else
    {
      v23 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v19 >> 43) & 0x3FF));
    }
    v24 = 1LL;
    if ( (ULONG_PTR *)v23 == &StartContext )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = *((int *)CurrentPrcb + 8615);
      if ( (_DWORD)v26 != -1 )
      {
        if ( (unsigned __int64)(v26 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v26 + 1, v26);
            v17 = (_DWORD)v26 == v27;
            LODWORD(v26) = v27;
            if ( v17 )
              break;
            if ( v27 == -1 || (unsigned __int64)(v27 + 1LL) > 0x100 )
              goto LABEL_65;
          }
LABEL_29:
          if ( v21 )
          {
LABEL_71:
            sub_140338500(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
            goto LABEL_30;
          }
          goto LABEL_30;
        }
LABEL_65:
        if ( (int)v26 > 192
          && (_DWORD)v26 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v26) )
        {
          v24 = (int)v26 - 192 + 1LL;
        }
        if ( !v24 )
          goto LABEL_29;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 16960), v24);
    goto LABEL_29;
  }
LABEL_30:
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0
    && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
    && *(_WORD *)(a1 + 32) == 2 )
  {
    *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
    v34 = sub_140235E40(a1);
    v35 = (*(_QWORD *)v34 & 0xFFFFFFFFFFLL) - 1;
    *(_QWORD *)v34 ^= (v35 ^ *(_QWORD *)v34) & 0xFFFFFFFFFFLL;
    if ( v34 != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v35 )
      v34 = 0LL;
    v10 = v34;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
    sub_1402E20D0(v14, v13, 1LL);
  if ( v10 )
    sub_14028CB64(v10, 1u, 1);
  if ( v11 )
    sub_14027031C(v11, 1);
  if ( (ULONG_PTR *)v14 != &StartContext )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v14 + 2368));
}
