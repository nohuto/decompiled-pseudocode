/*
 * XREFs of sub_140B1B784 @ 0x140B1B784
 * Callers:
 *     sub_140B1B688 @ 0x140B1B688 (sub_140B1B688.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall sub_140B1B784(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // r8
  __int64 v4; // rax
  ULONG_PTR BugCheckParameter4; // r9
  unsigned __int64 v6; // r15
  __int64 v8; // r11
  int v9; // r13d
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  _QWORD *v17; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rbp
  unsigned int v28; // eax
  unsigned __int64 v29; // rax

  v2 = a1 + 352;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 360);
  BugCheckParameter4 = 0LL;
  v6 = 0LL;
  v8 = 0x5C5C0C00048LL;
  v9 = 16777524;
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      goto LABEL_30;
    v26 = v4 ^ (v2 | 1);
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 360);
  }
  while ( v26 )
  {
    v21 = *(int *)(v26 + 24);
    if ( (unsigned int)v21 > 0x2A || !_bittest64(&v8, v21) )
    {
      v22 = *(_QWORD *)(v26 + 40);
      v3 += v22;
      if ( (unsigned int)v21 <= 0x18 )
      {
        if ( _bittest(&v9, v21) )
          BugCheckParameter4 += v22;
      }
    }
    v23 = *(_QWORD **)(v26 + 8);
    v19 = v26;
    if ( v23 )
    {
      v20 = (_QWORD *)*v23;
      v26 = *(_QWORD *)(v26 + 8);
      if ( *v23 )
      {
        do
        {
          v26 = (unsigned __int64)v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
      }
    }
    else
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v26 || *(_QWORD *)v26 == v19 )
          break;
        v19 = v26;
      }
    }
  }
LABEL_30:
  if ( v3 - BugCheckParameter4 > a2 )
    KeBugCheckEx(0x1Au, 0x3030309uLL, a2, v3, BugCheckParameter4);
  v11 = 0LL;
  v27 = (v3 - a2) & -(__int64)(a2 < v3);
  v25 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
  {
    if ( !v25 )
      return v6;
    v25 ^= v2;
  }
  while ( v25 )
  {
    v24 = *(_QWORD *)(v25 + 8);
    v11 = (_QWORD *)v25;
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v24 )
      v25 ^= v24;
    else
      v25 = *(_QWORD *)(v25 + 8);
  }
  while ( v11 )
  {
    v10 = (_QWORD *)*v11;
    v15 = v11;
    v16 = v11;
    v17 = v11;
    if ( *v11 )
    {
      while ( 1 )
      {
        v11 = v10;
        if ( !v10[1] )
          break;
        v10 = (_QWORD *)v10[1];
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v11 || (_QWORD *)v11[1] == v17 )
          break;
        v17 = v11;
      }
    }
    if ( v27 )
    {
      v28 = *((_DWORD *)v15 + 6);
      if ( v28 <= 0x18 )
      {
        if ( _bittest(&v9, v28) )
        {
          v29 = v15[5];
          if ( v29 > v27 )
          {
            v16[5] = v29 - v27;
            v27 = 0LL;
          }
          else
          {
            RtlRbRemoveNode((PRTL_RB_TREE)v2, (PRTL_BALANCED_NODE)v15);
            v27 -= v16[5];
            v8 = 0x5C5C0C00048LL;
            v16[5] = 0LL;
          }
        }
      }
    }
    v12 = *((int *)v15 + 6);
    if ( (unsigned int)v12 > 0x2A || !_bittest64(&v8, v12) )
    {
      v13 = v15[5];
      if ( v13 )
      {
        v14 = v15[4] + v13;
        if ( v14 > v6 )
          v6 = v14;
      }
    }
  }
  return v6;
}
