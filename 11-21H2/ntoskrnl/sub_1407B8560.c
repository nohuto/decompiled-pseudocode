/*
 * XREFs of sub_1407B8560 @ 0x1407B8560
 * Callers:
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x14030B090 (RtlFindClearBitsEx.c)
 *     sub_1406B00E8 @ 0x1406B00E8 (sub_1406B00E8.c)
 *     sub_1406B8AD4 @ 0x1406B8AD4 (sub_1406B8AD4.c)
 *     sub_140709E04 @ 0x140709E04 (sub_140709E04.c)
 */

__int64 __fastcall sub_1407B8560(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v12; // r10
  int v15; // edi
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // r14
  unsigned __int64 ClearBits; // rax
  unsigned __int64 v25; // rcx
  __int64 result; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  bool v32; // cf
  _QWORD **v33; // r14
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // [rsp+88h] [rbp+10h]
  unsigned __int64 v40; // [rsp+A0h] [rbp+28h]
  unsigned __int64 v41; // [rsp+A8h] [rbp+30h]

  v9 = a6;
  v10 = a4;
  v12 = a3;
  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v15 = 1;
  v16 = a9;
  v17 = *((_QWORD *)KeGetCurrentThread() + 23);
  v37 = v17;
  *a9 = 1;
  if ( (a7 & 2) != 0 )
  {
    v27 = *(_QWORD *)(v17 + 1496);
    v18 = (unsigned __int8)*(_DWORD *)(a1 + 64);
    v19 = *(_QWORD *)(a1 + 48) >> 16;
    v40 = v19;
    v41 = v18;
    if ( v27 > 0x100000000LL )
    {
      v19 = (v27 >> 16) - (unsigned __int8)v19 - 1;
      v40 = v19;
    }
    v17 = v37;
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 64) )
    {
      v18 = 1LL;
      v41 = 1LL;
    }
  }
  else
  {
    v18 = 0LL;
    v15 = 0;
    v19 = 0LL;
    v41 = 0LL;
    v40 = 0LL;
  }
  if ( !a4 )
  {
    if ( v12 == 0x10000 )
    {
      v20 = a2 + 0xFFFF;
    }
    else
    {
      if ( v12 - 0x200000 > 0x7FE00000 || ((v12 - 1) & a2) != 0 )
        goto LABEL_35;
      v20 = a2;
    }
    v21 = v20 >> 16;
    if ( !a5 && v9 >= (*(_QWORD *)(a1 + 40) << 16) + 0xFFFFLL )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)(a1 + 16);
        if ( v21 != 1 && v21 >= *(_QWORD *)(a1 + 24) )
          v22 = *(_QWORD *)(a1 + 32);
        v23 = *(_QWORD *)(a1 + 8) - qword_140C51BE8;
        if ( v15 )
        {
          v28 = v22 + 8 * v23;
          if ( v28 < v18 || v28 >= v19 )
          {
            v22 = v18;
            *v16 = 0;
          }
        }
        if ( v12 == 0x10000 )
          ClearBits = RtlFindClearBitsEx((unsigned __int64 *)a1, v21, v22);
        else
          ClearBits = sub_1406B8AD4((unsigned __int64 *)a1, v12, v21, v22);
        v25 = ClearBits;
        if ( ClearBits != -1LL )
        {
          if ( !v15 || (v29 = ClearBits + 8 * v23, v29 >= v41) && v29 < v40 )
          {
            *a8 = (v25 + 8 * (*(_QWORD *)(a1 + 8) - qword_140C51BE8)) << 16;
            return 0LL;
          }
        }
        if ( !(unsigned int)sub_140709E04((unsigned __int64 *)a1, v21) )
          break;
        v12 = a3;
        v16 = a9;
        v19 = v40;
        v18 = v41;
      }
      if ( v15 )
        return 3221225495LL;
      v12 = a3;
      v16 = a9;
      v19 = v40;
      v18 = v41;
      v17 = v37;
    }
    v10 = a4;
  }
LABEL_35:
  *v16 = 0;
  if ( v15 )
  {
    v34 = v19 << 16;
    if ( v9 > v34 )
      v9 = v34;
  }
  v30 = *(_QWORD *)(a1 + 56);
  v31 = a5;
  if ( v30 > a5 )
    v31 = v30;
  v32 = v31 < v9;
  if ( v31 > v9 )
  {
    if ( (*(_DWORD *)(v17 + 2512) & 0x20) == 0 || (v35 = 0x3FFFFFFFLL, v9 <= 0x3FFFFFFF) )
      v35 = 0xFFFFFFLL;
    v31 &= v35;
    if ( !v31 || v31 > v9 )
      v31 = 0x10000LL;
    if ( v31 < v30 && v15 )
      v31 = v18 << 16;
    if ( v31 < a5 )
      v31 = a5;
    v32 = v31 < v9;
  }
  if ( !v32 || v9 - v31 + 1 < a2 )
    return 3221225495LL;
  v33 = (_QWORD **)(v17 + 2008);
  result = sub_1406B00E8((_QWORD **)(v17 + 2008), a2, v12, v10, v31, v9, a8);
  if ( (int)result < 0 )
  {
    v36 = v41 << 16;
    if ( !v15 )
      v36 = 0x10000LL;
    if ( v36 < a5 )
      v36 = a5;
    if ( v36 < v31 )
      return sub_1406B00E8(v33, a2, a3, v10, v36, v9, a8);
  }
  return result;
}
