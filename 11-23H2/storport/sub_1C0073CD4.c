/*
 * XREFs of sub_1C0073CD4 @ 0x1C0073CD4
 * Callers:
 *     CallbackRoutine @ 0x1C0073FF0 (CallbackRoutine.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0074068 @ 0x1C0074068 (sub_1C0074068.c)
 */

__int64 __fastcall sub_1C0073CD4(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 v3; // r13
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // ebp
  _DWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r10d
  unsigned int v12; // r15d
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // edi
  _DWORD *v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rax
  __int64 result; // rax
  unsigned int v24; // [rsp+60h] [rbp+8h]

  v3 = qword_1C0093BE0;
  if ( !a2 || (v6 = *a3) == 0 )
  {
    *a3 = 7776;
    return 3221225507LL;
  }
  if ( v6 >= 0xD8 )
  {
    v7 = 7776;
    if ( v6 < 0x1E60 )
      v7 = *a3;
    memset_0(a2, 0, v7);
    v8 = 96;
    *a2 = 1347703620;
    a2[1] = 96;
    a2[2] = v7;
    sub_1C0074068(a2 + 4);
    a2[8] = 0;
    v9 = a2 + 9;
    v10 = *(_QWORD *)(v3 + 24);
    v11 = 0;
    v12 = *(_DWORD *)(v10 + 4868);
    v13 = *(_DWORD *)(v10 + 4864) % v12;
    v24 = (v13 + 1) % v12;
    v14 = v24;
    if ( v13 == v24 )
    {
LABEL_28:
      a2[8] = v11;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    while ( 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 4872LL) + 48LL * v13;
      v16 = (unsigned __int64)*(unsigned int *)(v15 + 32) >> 24;
      *((_BYTE *)v9 + 16) = HIBYTE(*(_DWORD *)(v15 + 32));
      if ( !(_BYTE)v16 || (unsigned __int8)v16 <= 0x22u && (v17 = 0x5001D0180LL, _bittest64(&v17, v16)) )
      {
        if ( *(_DWORD *)v15 == 1 )
        {
          if ( (unsigned __int64)v8 + 60 < v7 )
          {
            *(_BYTE *)v9 = BYTE2(*(_DWORD *)(v15 + 32));
            v9[14] = *(_DWORD *)(v15 + 24);
            v9[13] = (unsigned __int8)*(_DWORD *)(v15 + 32);
            v18 = (unsigned __int64)*(unsigned int *)(v15 + 32) >> 8;
            *((_QWORD *)v9 + 4) = 0LL;
            v9[12] = (unsigned __int8)v18;
            *((_QWORD *)v9 + 5) = *(_QWORD *)(v15 + 40);
LABEL_22:
            v9 += 15;
            ++v11;
            v8 += 60;
            if ( v11 >= 0x80 )
              goto LABEL_28;
            goto LABEL_23;
          }
        }
        else if ( !*(_DWORD *)v15 )
        {
          v19 = 0;
          v20 = v9 - 15;
          v21 = (_DWORD *)(v15 + 24);
          if ( !v11 )
            goto LABEL_20;
          while ( *v21 != v20[14] )
          {
            ++v19;
            v20 -= 15;
            if ( v19 >= v11 )
              goto LABEL_20;
          }
          *((_QWORD *)v20 + 4) = *(_QWORD *)(v15 + 40);
          if ( v19 >= v11 )
          {
LABEL_20:
            if ( (unsigned __int64)v8 + 60 < v7 )
            {
              *(_BYTE *)v9 = BYTE2(*(_DWORD *)(v15 + 32));
              *((_BYTE *)v9 + 16) = HIBYTE(*(_DWORD *)(v15 + 32));
              v9[14] = *v21;
              v9[13] = (unsigned __int8)*(_DWORD *)(v15 + 32);
              v9[12] = (unsigned __int8)BYTE1(*(_DWORD *)(v15 + 32));
              v22 = *(_QWORD *)(v15 + 40);
              *((_QWORD *)v9 + 5) = 0LL;
              *((_QWORD *)v9 + 4) = v22;
              goto LABEL_22;
            }
          }
LABEL_23:
          v14 = v24;
        }
      }
      if ( v13 )
        v13 = (v13 - 1) % v12;
      else
        v13 = v12 - 1;
      if ( v13 == v14 )
        goto LABEL_28;
    }
  }
  *a3 = 216;
  return 3221225507LL;
}
