/*
 * XREFs of sub_140B51500 @ 0x140B51500
 * Callers:
 *     sub_140B51320 @ 0x140B51320 (sub_140B51320.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B51500(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r11
  unsigned __int16 v5; // r9
  __int64 result; // rax
  __int64 v8; // rdi
  unsigned __int16 v9; // cx
  char v10; // bl
  unsigned __int16 v11; // r10
  __int64 *v12; // rax
  __int64 v13; // rbp
  __int64 *v14; // rax
  unsigned __int16 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r14
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  unsigned int v23; // edi
  __int64 v24; // rdx
  unsigned __int16 i; // r9
  __int64 v26; // rdx
  unsigned __int16 j; // r9
  __int64 v28; // rdx
  unsigned __int16 k; // r9
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int16 v34; // [rsp+0h] [rbp-68h]
  unsigned __int16 v35; // [rsp+2h] [rbp-66h]
  unsigned int v36; // [rsp+4h] [rbp-64h]
  int v37; // [rsp+8h] [rbp-60h]
  __int64 *v38; // [rsp+10h] [rbp-58h]
  __int64 *v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+20h] [rbp-48h]
  __int64 v41; // [rsp+28h] [rbp-40h]
  char v42; // [rsp+78h] [rbp+10h]

  v4 = word_140C2B0F0;
  v5 = 0;
  LODWORD(result) = 0;
  v8 = a3;
  v37 = 0;
  v9 = 64;
  do
  {
    v10 = 0;
    v11 = 0;
    v42 = 0;
    if ( v4 )
    {
      v12 = a1;
      v39 = a1;
      while ( 1 )
      {
        v13 = *v12;
        v41 = *v12;
        if ( (*(_BYTE *)(*v12 + 5) & 1) == 0 )
          goto LABEL_48;
        v14 = a1;
        v34 = 64;
        v38 = a1;
        v15 = 0;
        v36 = 0;
        v35 = 0;
        do
        {
          v16 = *v14;
          v40 = *v14;
          if ( (*(_BYTE *)(*v14 + 5) & 1) != 0 && v11 != v15 )
          {
            v17 = *(unsigned __int16 *)(v13 + 6);
            v18 = *(unsigned __int16 *)(v16 + 6);
            if ( (_WORD)v17 != (_WORD)v18 )
            {
              v19 = *(unsigned __int8 *)(v16 + 4);
              v20 = *(unsigned __int8 *)(v13 + 4);
              v21 = v20 - v19;
              if ( (unsigned __int8)v19 >= (unsigned __int8)v20 )
                v21 = *(unsigned __int8 *)(v16 + 4) - v20;
              v22 = *(_WORD *)(v16 + 6);
              if ( (unsigned __int8)v19 >= (unsigned __int8)v20 )
                v22 = *(_WORD *)(v13 + 6);
              if ( *(_DWORD *)(v8 + 4LL * v22) >= v21 )
              {
                v23 = 0;
                do
                {
                  if ( v5 != v11 )
                  {
                    v24 = a1[v5];
                    if ( (*(_BYTE *)(v24 + 5) & 1) != 0 && *(_WORD *)(v24 + 6) == (_WORD)v17 )
                      v23 = *((_DWORD *)off_140D05088
                            + *(unsigned __int16 *)(v24 + 2)
                            + *(unsigned __int16 *)(v13 + 2) * (unsigned __int16)word_140D05000)
                          / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v17)
                          + v23
                          - 1;
                  }
                  ++v5;
                }
                while ( v5 < v4 );
                for ( i = 0; i < v4; ++i )
                {
                  if ( i != v11 )
                  {
                    v26 = a1[i];
                    if ( (*(_BYTE *)(v26 + 5) & 1) != 0 && *(_WORD *)(v26 + 6) == (_WORD)v18 )
                      v23 = *((_DWORD *)off_140D05088
                            + *(unsigned __int16 *)(v26 + 2)
                            + (unsigned __int16)word_140D05000 * *(unsigned __int16 *)(v40 + 2))
                          / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v18)
                          + v23
                          - 1;
                  }
                }
                for ( j = 0; j < v4; ++j )
                {
                  if ( j != v11 )
                  {
                    v28 = a1[j];
                    if ( (*(_BYTE *)(v28 + 5) & 1) != 0 && *(_WORD *)(v28 + 6) == (_WORD)v17 )
                      v23 = *((_DWORD *)off_140D05088
                            + *(unsigned __int16 *)(v28 + 2)
                            + (unsigned __int16)word_140D05000 * *(unsigned __int16 *)(v40 + 2))
                          / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v17)
                          + v23
                          - 1;
                  }
                }
                v13 = v41;
                for ( k = 0; k < v4; ++k )
                {
                  if ( k != v11 )
                  {
                    v30 = a1[k];
                    if ( (*(_BYTE *)(v30 + 5) & 1) != 0 && *(_WORD *)(v30 + 6) == (_WORD)v18 )
                      v23 = *((_DWORD *)off_140D05088
                            + *(unsigned __int16 *)(v30 + 2)
                            + *(unsigned __int16 *)(v41 + 2) * (unsigned __int16)word_140D05000)
                          / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v18)
                          + v23
                          - 1;
                  }
                }
                v15 = v35;
                v5 = 0;
                if ( v23 && v36 < v23 )
                {
                  v9 = v35;
                  v36 = v23;
                  v8 = a3;
                  v34 = v35;
                  goto LABEL_43;
                }
                v8 = a3;
              }
              v9 = v34;
            }
          }
LABEL_43:
          ++v15;
          v14 = v38 + 1;
          v35 = v15;
          ++v38;
        }
        while ( v15 < v4 );
        if ( v9 == 64 )
        {
          v10 = v42;
        }
        else
        {
          v10 = 1;
          v42 = 1;
          v31 = a1[v9];
          v32 = *(unsigned __int16 *)(v13 + 6);
          v33 = *(unsigned __int16 *)(v31 + 6);
          *(_WORD *)(v13 + 6) = v33;
          *(_WORD *)(v31 + 6) = v32;
          *(_DWORD *)(v8 + 4 * v32) -= *(unsigned __int8 *)(v13 + 4);
          *(_DWORD *)(v8 + 4 * v32) += *(unsigned __int8 *)(v31 + 4);
          *(_DWORD *)(v8 + 4 * v33) -= *(unsigned __int8 *)(v31 + 4);
          *(_DWORD *)(v8 + 4 * v33) += *(unsigned __int8 *)(v13 + 4);
        }
        v9 = 64;
LABEL_48:
        ++v11;
        v12 = v39 + 1;
        v5 = 0;
        ++v39;
        if ( v11 >= v4 )
        {
          LODWORD(result) = v37;
          break;
        }
      }
    }
    result = (unsigned int)(result + 1);
    v37 = result;
  }
  while ( v10 && (unsigned int)result < 0xA );
  return result;
}
