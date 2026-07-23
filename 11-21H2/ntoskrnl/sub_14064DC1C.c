/*
 * XREFs of sub_14064DC1C @ 0x14064DC1C
 * Callers:
 *     sub_14064DF74 @ 0x14064DF74 (sub_14064DF74.c)
 *     sub_14064E1FC @ 0x14064E1FC (sub_14064E1FC.c)
 *     sub_14064E738 @ 0x14064E738 (sub_14064E738.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     sub_14064D5F4 @ 0x14064D5F4 (sub_14064D5F4.c)
 *     sub_14064D8A0 @ 0x14064D8A0 (sub_14064D8A0.c)
 *     sub_14064E5D0 @ 0x14064E5D0 (sub_14064E5D0.c)
 *     sub_14064ED40 @ 0x14064ED40 (sub_14064ED40.c)
 */

__int64 __fastcall sub_14064DC1C(unsigned __int16 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  int v6; // r13d
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // r12d
  unsigned __int16 *v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // ecx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 result; // rax
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+50h] [rbp-28h]
  bool v29; // [rsp+54h] [rbp-24h]
  int v30; // [rsp+58h] [rbp-20h]
  int *v31; // [rsp+60h] [rbp-18h]
  int v33; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+58h] BYREF
  int v35; // [rsp+D8h] [rbp+60h] BYREF

  v33 = 0;
  v34 = 0;
  v35 = 0;
  v5 = 9LL * (int)a4;
  if ( qword_140D04CA8 )
    v6 = *(_DWORD *)qword_140D04CA8;
  else
    v6 = dword_140C0B2E0[18 * (int)a4 + 8] + dword_140C0B2E0[18 * (int)a4 + 4];
  if ( qword_140D04CB0 )
    v7 = *(_DWORD *)qword_140D04CB0;
  else
    v7 = dword_140C0B2E0[18 * (int)a4 + 8] + dword_140C0B2E0[18 * (int)a4 + 6] + dword_140C0B2E0[18 * (int)a4 + 4];
  v8 = qword_140C4EF78;
  v9 = HIDWORD(qword_140C4EF78);
  v10 = dword_140C4EF80;
  v11 = *(_QWORD *)(qword_140C5A830 + 24);
  v29 = 0;
  *(_DWORD *)(v11 + 56) = a2;
  *(_DWORD *)(qword_140C5A830 + 8) = a2;
  v31 = (int *)(v11 + 40);
  v12 = sub_14064D8A0((int)v11 + 40, (__int64)a1, &v35, a4);
  if ( v12 >= 0 )
    v29 = v8 + v35 > v7;
  LODWORD(v13) = (_DWORD)v31;
  v14 = v10 - v9;
  v15 = a1;
  v16 = 0;
  if ( v14 > 0 )
    v16 = v14;
  v17 = 0;
  v28 = *v31;
  v18 = *a1;
  v19 = 0LL;
  v35 = 0;
  if ( (v18 & 0xFFFFFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v29 && v17 <= (unsigned int)v19 )
      {
        v20 = *((_QWORD *)v15 + 1);
        v30 = 0;
        v35 = v19;
        v21 = (unsigned int)v19;
        if ( *(_WORD *)(v20 + 2 * v19) != 32 )
        {
          while ( 1 )
          {
            v22 = *(unsigned __int16 *)(v20 + 2 * v21);
            if ( v22 <= 0xD )
            {
              v23 = 9217;
              if ( _bittest(&v23, v22) )
                break;
            }
            v12 = sub_14064ED40(v13, v22, (unsigned int)&v33, v13, (__int64)&qword_140C0DEC0);
            if ( v12 < 0 )
              goto LABEL_40;
            v13 = (unsigned int)(v35 + 1);
            v30 += v33;
            ++v35;
            if ( v7 < v30 + v8 && v16 )
            {
              if ( v8 < v7 )
              {
                v12 = sub_14064E5D0(qword_140C5A830, v8, v7, v9, v28, (__int64)&v34);
                if ( v12 < 0 )
                  goto LABEL_40;
                if ( v16 < v34 )
                  v16 = v34;
              }
              v8 = v6;
              v9 += v16 + dword_140C0B2E0[2 * v5 + 10];
              v16 = 0;
              break;
            }
            v21 = (unsigned int)v13;
            v20 = *((_QWORD *)a1 + 1);
            if ( *(_WORD *)(v20 + 2 * v13) == 32 )
              break;
            LODWORD(v13) = (_DWORD)v31;
          }
        }
      }
      v12 = sub_14064ED40(
              (_DWORD)v31,
              *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * v19),
              (unsigned int)&v33,
              v13,
              (__int64)&qword_140C0DEC0);
      if ( v12 < 0 )
        goto LABEL_40;
      if ( v7 >= v8 + v33 )
        break;
      if ( v8 < v7 )
      {
        v12 = sub_14064E5D0(qword_140C5A830, v8, v7, v9, v28, (__int64)&v34);
        if ( v12 < 0 )
          goto LABEL_40;
        if ( v16 < v34 )
          v16 = v34;
      }
      v24 = (unsigned int)v19;
      v8 = v6;
      v25 = v16 + dword_140C0B2E0[2 * v5 + 10];
      v16 = 0;
      v9 += v25;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v19) != 32 )
        goto LABEL_36;
LABEL_39:
      v19 = (unsigned int)(v19 + 1);
      v15 = a1;
      v17 = v35;
      LODWORD(v13) = (_DWORD)v31;
      if ( (unsigned int)v19 >= *a1 >> 1 )
        goto LABEL_40;
    }
    v24 = (unsigned int)v19;
LABEL_36:
    v12 = sub_14064D5F4(
            *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v24),
            (__int64 *)qword_140C5A830,
            v8,
            v9,
            v28,
            -1,
            &v33,
            &v34,
            v27);
    if ( v12 < 0 )
      goto LABEL_40;
    v8 += v33;
    if ( v34 > v16 )
      v16 = v34;
    goto LABEL_39;
  }
LABEL_40:
  LODWORD(qword_140C4EF78) = v8;
  dword_140C4EF80 = v9 + v16;
  result = (unsigned int)v12;
  HIDWORD(qword_140C4EF78) = v9;
  return result;
}
