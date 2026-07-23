/*
 * XREFs of sub_14039190C @ 0x14039190C
 * Callers:
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_14039190C()
{
  __int64 v0; // rdi
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  signed __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r10
  signed __int64 v14; // rax
  int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r14
  signed __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r9
  signed __int64 v30; // rax
  int v31; // r8d
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rbp
  __int64 v34; // rdx
  signed __int32 v35[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = qword_140C4E390;
  v1 = -1LL;
  v2 = 1LL;
  if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
  {
    v3 = sub_140303720(qword_140C4E390);
    v5 = sub_14042A5E0(v3, v4);
    v6 = *(_QWORD *)(v0 + 208);
    v7 = v5;
  }
  else
  {
    do
    {
      v6 = *(_QWORD *)(v0 + 208);
      do
      {
        v10 = *(_QWORD *)(v0 + 200);
        v11 = sub_140303720(v0);
        v13 = sub_14042A5E0(v11, v12);
        _InterlockedOr(v35, 0);
        v14 = *(_QWORD *)(v0 + 200);
      }
      while ( v10 != v14 );
    }
    while ( v6 != *(_QWORD *)(v0 + 208) );
    v15 = *(_DWORD *)(v0 + 220);
    v16 = v10 ^ v13;
    if ( _bittest64((const __int64 *)&v16, (unsigned __int8)(v15 - 1)) )
    {
      if ( v15 == 64 )
        v17 = -1LL;
      else
        v17 = (1LL << v15) - 1;
      v18 = 1LL;
      if ( v15 != 64 )
        v18 = 1LL << v15;
      v19 = v10 & v17;
      v7 = v13 | v10 ^ v19;
      if ( v13 < v19 )
        v7 += v18;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v7, v14);
    }
    else
    {
      if ( v15 == 64 )
        v20 = -1LL;
      else
        v20 = (1LL << v15) - 1;
      v7 = v13 | v10 & ~v20;
    }
  }
  result = v6 + v7;
  *(_QWORD *)(v0 + 16) = v6 + v7;
  v9 = qword_140C4E500;
  if ( qword_140C4E500 )
  {
    if ( *(_DWORD *)(qword_140C4E500 + 220) == 64 )
    {
      v21 = sub_140303720(qword_140C4E500);
      v23 = sub_14042A5E0(v21, v22);
      v24 = *(_QWORD *)(v9 + 208);
      v25 = v23;
    }
    else
    {
      do
      {
        v24 = *(_QWORD *)(v9 + 208);
        do
        {
          v26 = *(_QWORD *)(v9 + 200);
          v27 = sub_140303720(v9);
          v29 = sub_14042A5E0(v27, v28);
          _InterlockedOr(v35, 0);
          v30 = *(_QWORD *)(v9 + 200);
        }
        while ( v26 != v30 );
      }
      while ( v24 != *(_QWORD *)(v9 + 208) );
      v31 = *(_DWORD *)(v9 + 220);
      v32 = v26 ^ v29;
      if ( _bittest64((const __int64 *)&v32, (unsigned __int8)(v31 - 1)) )
      {
        if ( v31 != 64 )
        {
          v1 = (1LL << v31) - 1;
          v2 = 1LL << v31;
        }
        v33 = v26 & v1;
        v25 = v29 | v26 ^ v33;
        if ( v29 < v33 )
          v25 += v2;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v25, v30);
      }
      else
      {
        if ( v31 == 64 )
          v34 = -1LL;
        else
          v34 = (1LL << v31) - 1;
        v25 = v29 | v26 & ~v34;
      }
    }
    result = v24 + v25;
    *(_QWORD *)(v9 + 16) = v24 + v25;
  }
  return result;
}
