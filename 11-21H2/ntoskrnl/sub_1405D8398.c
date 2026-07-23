/*
 * XREFs of sub_1405D8398 @ 0x1405D8398
 * Callers:
 *     sub_1405DC8A8 @ 0x1405DC8A8 (sub_1405DC8A8.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_1405D8398(
        unsigned __int64 a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8,
        _QWORD *a9)
{
  unsigned __int64 v9; // rsi
  int v10; // r13d
  bool v11; // r14
  int v12; // r15d
  __int64 v13; // rbx
  unsigned __int8 v14; // di
  unsigned __int64 v15; // r12
  int v16; // ebp
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // rcx
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // cl
  unsigned __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // rcx
  char v28; // cl
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v33; // [rsp+88h] [rbp+30h]

  v9 = a1;
  v10 = a2;
  v11 = a7 < a6;
  if ( !dword_140D05054 )
    v11 = 1;
  v12 = 0;
  if ( byte_140D068BC )
  {
    v12 = a4;
    if ( !v11 )
      v12 = a5;
  }
  v13 = 0LL;
  v14 = 0;
  v15 = a1;
  if ( a1 )
  {
    v16 = a2 << 6;
    do
    {
      _BitScanForward64(&v17, v15);
      v33 = dword_140D105E0[v16 + (v17 & 0x3F)];
      v18 = sub_140348800(v33);
      if ( byte_140D068BC )
      {
        v19 = v12 + v33 * dword_140C0C64C + 8LL;
        v20 = (char *)qword_140D06998 + 2 * v19;
        if ( v11 )
          v21 = v20[v19 + 1];
        else
          v21 = v20[v19];
      }
      else
      {
        v21 = *(_BYTE *)(v18 + 34057);
      }
      v22 = v14;
      if ( v14 <= v21 )
        v22 = v21;
      v14 = v22;
      v15 &= ~*(_QWORD *)(v18 + 200);
    }
    while ( v15 );
    v13 = 0LL;
    do
    {
      _BitScanForward64(&v23, v9);
      v24 = dword_140D105E0[64 * v10 + (v23 & 0x3F)];
      v25 = sub_140348800(v24);
      if ( byte_140D068BC )
      {
        v26 = v12 + v24 * dword_140C0C64C + 8LL;
        v27 = (char *)qword_140D06998 + 2 * v26;
        if ( v11 )
          v28 = v27[v26 + 1];
        else
          v28 = v27[v26];
      }
      else
      {
        v28 = *(_BYTE *)(v25 + 34057);
      }
      v29 = *(_QWORD *)(v25 + 200);
      if ( v28 == v14 )
        v13 |= v29;
      v9 &= ~v29;
    }
    while ( v9 );
  }
  *a3 = v14;
  v30 = *a8;
  if ( *a8 )
  {
    if ( (v13 & v30) != 0 )
      return v13 & v30;
    else
      *a8 = *a9 | v30;
  }
  return v13;
}
