/*
 * XREFs of sub_14031F940 @ 0x14031F940
 * Callers:
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_140386DC4 @ 0x140386DC4 (sub_140386DC4.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_14031F940(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  int v3; // r14d
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r9
  unsigned int v7; // r12d
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  ULONG_PTR *v12; // r9
  __int64 CurrentPrcb; // r8
  bool v14; // zf
  unsigned __int32 v15; // eax
  unsigned int i; // r15d
  unsigned __int64 v17; // rax
  ULONG_PTR *v18; // rax
  unsigned __int64 v19; // rbp
  struct _KPRCB *v20; // r8
  __int64 v21; // rdx
  signed __int32 v22; // eax
  ULONG_PTR *v23; // rax
  unsigned __int64 v24; // rbp
  struct _KPRCB *v25; // r8
  signed __int32 v26; // eax
  signed __int32 v27; // eax
  int v28; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR *v30; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v3 = a2;
  v4 = a1;
  if ( (_DWORD)a2 == 1 )
  {
    v5 = a1;
  }
  else
  {
    v5 = 0LL;
    if ( !(_DWORD)a2 )
      v5 = a1;
  }
  v6 = 0xFFFFDE0000000000uLL;
  v7 = 1;
LABEL_5:
  v8 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    if ( v3 == 1 )
      v4 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_16;
    v29 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v29, a2, v8, v6);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
      v6 = 0xFFFFDE0000000000uLL;
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( v3 == 1 && v4 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    v9 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 >= 0x10000 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_16:
    if ( v3 == 2 )
    {
      v11 = 3LL;
    }
    else
    {
      v11 = 1LL;
      if ( !v3 )
        v11 = 4LL;
    }
    v12 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    v30 = v12;
    if ( v12 == &StartContext )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      a2 = *(unsigned int *)(CurrentPrcb + 34460);
      if ( v11 <= a2 )
      {
        do
        {
          if ( (_DWORD)a2 == -1 )
            break;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), a2 - v11, a2);
          v14 = (_DWORD)a2 == v15;
          a2 = v15;
          if ( v14 )
            goto LABEL_22;
        }
        while ( v11 <= v15 );
      }
    }
    result = sub_14028DC40((__int64)v12, v11, 512LL);
    if ( !(_DWORD)result )
      return result;
LABEL_22:
    for ( i = 0; ; ++i )
    {
      if ( i >= v11 )
      {
        if ( i == v11 )
          return v7;
LABEL_39:
        v18 = v30;
        v19 = v11 - i;
        if ( v30 == &StartContext )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((int *)v20 + 8615);
          if ( (_DWORD)v21 != -1 )
          {
            if ( v21 + v19 <= 0x100 )
            {
              do
              {
                if ( v19 >= 0x80000 )
                  break;
                v22 = _InterlockedCompareExchange((volatile signed __int32 *)v20 + 8615, v21 + v19, v21);
                v14 = (_DWORD)v21 == v22;
                LODWORD(v21) = v22;
                if ( v14 )
                  return v7;
              }
              while ( v22 != -1 && v22 + v19 <= 0x100 );
              v18 = v30;
            }
            if ( (int)v21 > 192 )
            {
              v14 = (_DWORD)v21 == _InterlockedCompareExchange((volatile signed __int32 *)v20 + 8615, 192, v21);
              v18 = v30;
              if ( v14 )
                v19 += (int)v21 - 192;
            }
          }
        }
        if ( v19 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 2120, v19);
        return v7;
      }
      v28 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v28, a2, CurrentPrcb, (__int64)v12);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      if ( v3 == 1 )
      {
        v6 = 0xFFFFDE0000000000uLL;
        if ( v4 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL )
          break;
      }
      CurrentPrcb = *(_QWORD *)(v4 + 24);
      a2 = CurrentPrcb & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( a2 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_29;
      }
      else if ( a2 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 0;
        goto LABEL_39;
      }
      *(_QWORD *)(v4 + 24) = CurrentPrcb ^ ((a2 + 0x10000) ^ CurrentPrcb) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_29:
      if ( a2 >= 0x10000 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_39;
      }
      v12 = (ULONG_PTR *)*(unsigned __int8 *)(v4 + 34);
      v17 = 0LL;
      if ( ((unsigned __int8)v12 & 0x10) == 0 )
      {
        CurrentPrcb = (unsigned __int8)v12;
        LOBYTE(a2) = !_bittest64((const signed __int64 *)(v4 + 16), 0xAu);
        LOBYTE(CurrentPrcb) = a2 & ~((unsigned __int8)v12 >> 3);
        if ( (CurrentPrcb & 1) != 0 )
        {
          v17 = sub_140232694((unsigned __int64 *)(v4 + 16), 1, 0);
          v12 = (ULONG_PTR *)*(unsigned __int8 *)(v4 + 34);
        }
        LOBYTE(v12) = (unsigned __int8)v12 | 0x10;
        *(_BYTE *)(v4 + 34) = (_BYTE)v12;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        sub_1402E20D0((__int64)v30, v17, 1);
      v4 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = v30;
    v24 = v11 - i;
    if ( v30 != &StartContext )
      goto LABEL_84;
    v25 = KeGetCurrentPrcb();
    a2 = *((int *)v25 + 8615);
    if ( (_DWORD)a2 == -1 )
      goto LABEL_83;
    if ( a2 + v24 <= 0x100 )
    {
      do
      {
        if ( v24 >= 0x80000 )
          break;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)v25 + 8615, a2 + v24, a2);
        v14 = (_DWORD)a2 == v26;
        a2 = v26;
        if ( v14 )
          goto LABEL_5;
      }
      while ( v26 != -1 && v26 + v24 <= 0x100 );
    }
    if ( (int)a2 <= 192 )
    {
      v23 = v30;
LABEL_83:
      v8 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_84;
    }
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)v25 + 8615, 192, a2);
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (_DWORD)a2 == v27 )
      v24 += (int)a2 - 192;
    v23 = v30;
LABEL_84:
    if ( v24 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 2120, v24);
  }
  if ( v9 < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
