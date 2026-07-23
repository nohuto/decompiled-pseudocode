/*
 * XREFs of sub_140379EC8 @ 0x140379EC8
 * Callers:
 *     sub_140379C88 @ 0x140379C88 (sub_140379C88.c)
 * Callees:
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 */

__int64 __fastcall sub_140379EC8(__int64 a1, unsigned int *a2, unsigned int *a3, _DWORD *a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v7; // esi
  unsigned int v8; // r9d
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // edi
  __m128i *v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // [rsp+70h] [rbp+8h]

  v5 = *a2;
  v6 = 0;
  v7 = 0;
  v8 = *a3;
  v9 = 1024;
  v10 = *(_DWORD *)(a5 + 24);
  v11 = *a3 + *a2 - 1;
  v22 = *a3;
  if ( v10 == -1 || !v10 )
    v12 = (__m128i *)(a5 + 8);
  else
    v12 = (__m128i *)(*(_QWORD *)a5 + 16LL * (unsigned int)(v10 - 1));
  v13 = v12->m128i_i64[0];
  v14 = _mm_srli_si128(*v12, 8).m128i_u64[0] - 8;
  while ( 1 )
  {
    if ( !v13 )
    {
      v15 = 0LL;
LABEL_30:
      v18 = v11;
      v20 = 1;
      goto LABEL_31;
    }
    v14 += 8LL;
    v15 = v14;
    if ( v14 >= v13 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v13 + 2) )
    {
      v16 = *(_QWORD *)(v13 + 8);
      if ( v16 )
      {
        v14 = v16 + 16;
        v13 = *(_QWORD *)(v13 + 8);
        v17 = v16 + 16;
      }
      else
      {
        v17 = 16LL;
      }
      v15 = v17 & -(__int64)(v16 != 0);
    }
    if ( !v15 )
      goto LABEL_30;
    v18 = *(_DWORD *)v15;
    if ( v5 >= *(_DWORD *)v15 && (*(_BYTE *)(v15 + 7) & 1) == 0 )
      goto LABEL_14;
    if ( v11 < v18 )
      goto LABEL_30;
    v20 = 0;
LABEL_31:
    v7 += v18 - v5;
    v21 = v7;
    if ( v6 )
      break;
    if ( v20 )
    {
LABEL_27:
      ++v7;
      goto LABEL_21;
    }
    v6 = v18 - v5;
    v5 = v18;
    if ( (*(_BYTE *)(v15 + 7) & 1) == 0 )
    {
LABEL_14:
      if ( v9 != 1024 && v9 != *(unsigned __int16 *)(v15 + 4) )
        goto LABEL_21;
      if ( *(_BYTE *)(v15 + 6) == 2 )
      {
        if ( v9 != 1024 )
          goto LABEL_21;
      }
      else
      {
        if ( v6 )
        {
          if ( v9 == 1024 )
            goto LABEL_21;
        }
        else
        {
          if ( !sub_14035F5AC((__int64)&unk_140D31A00, *(unsigned __int16 *)(v15 + 4)) )
            goto LABEL_27;
          v9 = *(unsigned __int16 *)(v15 + 4);
          v8 = v22;
        }
        *(_BYTE *)(v15 + 6) = 2;
      }
    }
    ++v6;
    ++v7;
    if ( v6 == v8 )
      goto LABEL_21;
    ++v5;
  }
  ++v7;
  if ( !v20 )
    v7 = v21;
LABEL_21:
  *a3 = v6;
  *a4 = v7;
  return v9;
}
