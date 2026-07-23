/*
 * XREFs of sub_1409C505C @ 0x1409C505C
 * Callers:
 *     sub_1409C0EC0 @ 0x1409C0EC0 (sub_1409C0EC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409C505C(_WORD *a1, int *a2, __int64 *a3)
{
  __int64 v3; // r13
  unsigned int v4; // r12d
  int *v6; // r15
  _WORD *v7; // rsi
  int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned __int8 *v11; // r8
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  __int64 v14; // rax
  unsigned __int8 *v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  unsigned __int8 *v22; // r8
  unsigned int v23; // r10d
  unsigned int v24; // ebx
  int v25; // r11d
  unsigned int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int8 *v29; // r8
  unsigned __int64 v30; // rdx
  int v31; // eax

  v3 = *a3;
  v4 = *((_DWORD *)a3 + 3);
  *(_OWORD *)a2 = 0LL;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  while ( 1 )
  {
    v9 = *((_DWORD *)a3 + 2);
    v10 = 5;
    v11 = (unsigned __int8 *)(v3 + ((unsigned __int64)v9 >> 3));
    v12 = 8 - (v9 & 7);
    if ( v9 + 5 > v4 )
    {
      v10 = v4 - v9;
      if ( v4 == v9 )
        break;
    }
    v13 = *v11;
    v14 = v12;
    if ( v12 >= v10 )
      v14 = v10;
    v15 = v11 + 1;
    v16 = *(_DWORD *)&byte_14001BB70[4 * v14] & (v13 >> (v9 & 7));
    v17 = v10 - (unsigned int)v14;
    if ( (unsigned int)v17 >= 8 )
    {
      v18 = (unsigned __int64)(unsigned int)v17 >> 3;
      do
      {
        v19 = *v15 << v12;
        LOBYTE(v12) = v12 + 8;
        v16 |= v19;
        v17 = (unsigned int)(v17 - 8);
        ++v15;
        --v18;
      }
      while ( v18 );
    }
    if ( (_DWORD)v17 )
      v16 |= (*v15 & *(_DWORD *)&byte_14001BB70[4 * v17]) << v12;
    v20 = v10 + v9;
    *((_DWORD *)a3 + 2) = v20;
    if ( v10 < 5 || v16 > (*v7 & 0x1Fu) )
      break;
    if ( v16 )
    {
      v22 = (unsigned __int8 *)(v3 + ((unsigned __int64)v20 >> 3));
      v23 = v16;
      v24 = 8 - (v20 & 7);
      if ( v20 + v16 > v4 && (v23 = v4 - v20, v4 == v20) )
      {
        v25 = 0;
      }
      else
      {
        v26 = *v22;
        v27 = v24;
        if ( v24 >= v23 )
          v27 = v23;
        v28 = v23 - (unsigned int)v27;
        v29 = v22 + 1;
        v25 = *(_DWORD *)&byte_14001BB70[4 * v27] & (v26 >> (v20 & 7));
        if ( (unsigned int)v28 >= 8 )
        {
          v30 = (unsigned __int64)(unsigned int)v28 >> 3;
          do
          {
            v31 = *v29 << v24;
            LOBYTE(v24) = v24 + 8;
            v25 |= v31;
            v28 = (unsigned int)(v28 - 8);
            ++v29;
            --v30;
          }
          while ( v30 );
        }
        if ( (_DWORD)v28 )
          v25 |= (*v29 & *(_DWORD *)&byte_14001BB70[4 * v28]) << v24;
        v7 = a1;
        *((_DWORD *)a3 + 2) = v20 + v23;
      }
      if ( v23 < v16 )
        return 3221226050LL;
      v21 = v25 + (1 << v16);
    }
    else
    {
      v21 = 1;
    }
    *v6++ = v21;
    if ( (unsigned int)++v8 >= 4 )
      return 0LL;
  }
  return 3221226050LL;
}
