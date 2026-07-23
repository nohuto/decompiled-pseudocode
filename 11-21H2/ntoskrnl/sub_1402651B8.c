/*
 * XREFs of sub_1402651B8 @ 0x1402651B8
 * Callers:
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

__int64 __fastcall sub_1402651B8(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  int v3; // ecx
  int v4; // r14d
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // rdx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax

  v1 = a1[5];
  v3 = *((_DWORD *)a1 + 2);
  v4 = 0;
  v5 = v1 >> 4;
  if ( !(v1 >> 4) )
    v5 = 1LL;
  if ( (v3 & 0x40) != 0 )
  {
    v5 = a1[4];
LABEL_15:
    v4 = 1;
    goto LABEL_5;
  }
  if ( (v3 & 0x20) != 0 && a1[4] )
  {
    v5 = a1[4];
    goto LABEL_15;
  }
  while ( 1 )
  {
LABEL_5:
    if ( (v3 & 0x400) == 0 && (int)sub_14026A784(*a1, v1, a1[6], 2LL) < 0 )
      goto LABEL_29;
    v6 = sub_1402828F0(64LL, 8 * v1 + 48, 1768189261LL);
    if ( v6 )
      break;
    if ( (a1[1] & 0x400) == 0 )
    {
      v8 = *a1;
      sub_14028CE10(*a1, v1);
      v9 = v1;
      if ( (ULONG_PTR *)v8 == &StartContext )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((int *)CurrentPrcb + 8615);
        if ( (_DWORD)v11 != -1 )
        {
          if ( v1 + v11 <= 0x100 )
          {
            do
            {
              if ( v1 >= 0x80000 )
                break;
              v13 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v1 + v11, v11);
              v12 = (_DWORD)v11 == v13;
              LODWORD(v11) = v13;
              if ( v12 )
                goto LABEL_29;
            }
            while ( v13 != -1 && v1 + v13 <= 0x100 );
          }
          if ( (int)v11 > 192
            && (_DWORD)v11 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v11) )
          {
            v9 = v1 + (int)v11 - 192;
          }
        }
      }
      if ( v9 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16960), v9);
    }
LABEL_29:
    if ( (a1[1] & 4) != 0 )
      return 3221225626LL;
    v14 = *(_QWORD *)(*a1 + 16960);
    if ( v14 <= 0 )
      return 3221225626LL;
    v15 = a1[6];
    if ( v14 <= v15 )
      return 3221225626LL;
    v16 = *(_QWORD *)(*a1 + 17256);
    v17 = v14 - v15;
    v18 = *(_QWORD *)(*a1 + 17496);
    if ( v16 < v18 )
    {
      v19 = v18 - v16;
      if ( v19 < v17 )
        v17 = v19;
    }
    if ( v1 <= v17 )
    {
      if ( v1 <= v5 )
      {
        if ( v4 || v5 == 1 )
          return 3221225626LL;
        while ( v1 < v5 )
          v5 >>= 1;
        if ( !v5 )
          v5 = 1LL;
      }
      v1 -= v5;
    }
    else
    {
      v1 = v17;
    }
    v3 = *((_DWORD *)a1 + 2);
    if ( (v3 & 0x40) != 0 )
    {
      v20 = a1[4] - 1;
    }
    else
    {
      if ( (v3 & 0x20) == 0 )
        goto LABEL_52;
      v21 = a1[4];
      if ( !v21 )
        goto LABEL_52;
      v20 = v21 - 1;
    }
    v1 &= ~v20;
LABEL_52:
    if ( !v1 )
      return 3221225626LL;
  }
  *(_QWORD *)v6 = 0LL;
  *(_WORD *)(v6 + 10) = 0;
  *(_WORD *)(v6 + 8) = 8 * (v1 + 6);
  *(_DWORD *)(v6 + 40) = (_DWORD)v1 << 12;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_DWORD *)(v6 + 44) = 0;
  *(_QWORD *)(v6 + 24) = 0LL;
  a1[5] = v1;
  a1[8] = v6;
  if ( (ULONG_PTR *)*a1 == &StartContext && (a1[1] & 0x400) == 0 )
    _InterlockedExchangeAdd64(&qword_140C53530, v1);
  return 0LL;
}
