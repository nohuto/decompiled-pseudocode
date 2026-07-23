/*
 * XREFs of sub_14062A198 @ 0x14062A198
 * Callers:
 *     sub_140629D0C @ 0x140629D0C (sub_140629D0C.c)
 *     sub_14062A30C @ 0x14062A30C (sub_14062A30C.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall sub_14062A198(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *i; // rcx
  unsigned __int64 v14; // rdx
  bool v15; // cf
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdx
  _QWORD **v18; // rax
  _QWORD *v19; // rdx

  v3 = (volatile LONG *)(a1 + 64);
  v6 = a2 + a3 - 1;
  v7 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v8 = a1 + 48;
  v9 = *(_QWORD *)v8;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v9 )
    v9 ^= v8;
  v10 = 0LL;
  while ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFLL;
    if ( a2 <= v11 )
    {
      v12 = *(_QWORD *)v9;
      v10 = (_QWORD *)v9;
      if ( a2 >= v11 )
      {
        if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v12 )
          v12 ^= v9;
        i = 0LL;
        if ( v12 )
        {
          do
          {
            v14 = *(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFLL;
            v15 = a2 < v14;
            if ( a2 <= v14 )
            {
              v16 = *(_QWORD *)v12;
              if ( !v15 )
                i = (_QWORD *)v12;
            }
            else
            {
              v16 = *(_QWORD *)(v12 + 8);
            }
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v16 )
              v12 ^= v16;
            else
              v12 = v16;
          }
          while ( v12 );
          if ( i )
            goto LABEL_29;
        }
        break;
      }
    }
    else
    {
      v12 = *(_QWORD *)(v9 + 8);
    }
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v12 )
      v9 ^= v12;
    else
      v9 = v12;
  }
  i = v10;
  if ( !v10 )
    goto LABEL_38;
  do
  {
LABEL_29:
    if ( (i[3] & 0xFFFFFFFFFFFFFuLL) > v6 )
      break;
    ++v7;
    i[3] |= 0x10000000000000uLL;
    v17 = i;
    v18 = (_QWORD **)i[1];
    if ( v18 )
    {
      v19 = *v18;
      for ( i = (_QWORD *)i[1]; v19; v19 = (_QWORD *)*v19 )
        i = v19;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v17 )
          break;
        v17 = i;
      }
    }
  }
  while ( i );
LABEL_38:
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return v7;
}
