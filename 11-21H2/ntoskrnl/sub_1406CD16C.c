/*
 * XREFs of sub_1406CD16C @ 0x1406CD16C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeFindFirstSetLeftGroupAffinity @ 0x14024C330 (KeFindFirstSetLeftGroupAffinity.c)
 *     sub_14024C360 @ 0x14024C360 (sub_14024C360.c)
 */

__int64 __fastcall sub_1406CD16C(unsigned __int16 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned int v6; // r14d
  unsigned int v7; // edi
  unsigned int *v8; // r11
  unsigned int v9; // r12d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbp
  bool v15; // al
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // r12
  unsigned int v19; // edx
  __int64 *v20; // r9
  _QWORD *v21; // rbx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // r9
  unsigned int v25; // r10d
  __int64 v26; // rax
  __int64 result; // rax
  _QWORD *v28; // [rsp+20h] [rbp-58h]
  _OWORD v29[5]; // [rsp+28h] [rbp-50h] BYREF
  int v30; // [rsp+88h] [rbp+10h]

  v4 = 0LL;
  v5 = a1;
  v30 = 0;
  v29[0] = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = a4;
  v9 = a3;
  if ( (_DWORD)dword_140D06884 )
  {
    do
    {
      v11 = qword_140D088C0[v4];
      v12 = *(unsigned __int8 *)(v11 + 208);
      if ( (_WORD)v12 == (_WORD)v5 )
      {
        v13 = *(_QWORD *)(v11 + 8 * v12 + 34584);
        *(_QWORD *)&v29[0] = v13;
        WORD4(v29[0]) = v12;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v29) )
        {
          v7 += 32;
          if ( v7 > v9 )
          {
            v6 = -1073741820;
          }
          else
          {
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_QWORD *)a2 = v13;
            *(_DWORD *)(a2 + 8) = 3;
            a2 += 32LL;
          }
        }
        v14 = *(_QWORD *)(v11 + 34912);
        *(_QWORD *)&v29[0] = v14;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v29) )
        {
          v15 = *(_QWORD *)(v11 + 200) != v14;
          v7 += 32;
          if ( v7 <= v9 )
          {
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_DWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_BYTE *)(a2 + 16) = v15;
            *(_QWORD *)a2 = v14;
            a2 += 32LL;
          }
          else
          {
            v6 = -1073741820;
          }
        }
        v16 = 0LL;
        if ( *(_DWORD *)(v11 + 34452) )
        {
          v28 = (_QWORD *)(a2 + 16);
          do
          {
            WORD4(v29[0]) = v5;
            v17 = v11 + 264LL * (unsigned int)v16;
            if ( (unsigned __int16)v5 >= *(_WORD *)(v17 + 40632) )
              v18 = 0LL;
            else
              v18 = *(_QWORD *)(v17 + 8 * v5 + 40640);
            *(_QWORD *)&v29[0] = v18;
            if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v29) )
            {
              v7 += 32;
              if ( v7 > a3 )
              {
                v6 = -1073741820;
              }
              else
              {
                *(_QWORD *)a2 = v18;
                a2 += 32LL;
                v28[1] = 0LL;
                *v28 = 0LL;
                *((_DWORD *)v28 - 2) = 2;
                *v28 = *(_QWORD *)(v11 + 12 * v16 + 34392);
                *((_DWORD *)v28 + 2) = *(_DWORD *)(v11 + 12 * v16 + 34400);
                v28 += 4;
              }
            }
            v16 = (unsigned int)(v16 + 1);
          }
          while ( (unsigned int)v16 < *(_DWORD *)(v11 + 34452) );
          LODWORD(v4) = v30;
          v9 = a3;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      v30 = v4;
    }
    while ( (unsigned int)v4 < (unsigned int)dword_140D06884 );
    v8 = a4;
  }
  if ( word_140D05000 )
  {
    v19 = v5;
    v20 = qword_140D31700;
    v21 = (_QWORD *)(a2 + 16);
    do
    {
      v22 = sub_14024C360(*v20, v19);
      if ( v22 )
      {
        v26 = *(_QWORD *)(v22 + 128);
        if ( v26 )
        {
          v7 += 32;
          if ( v7 <= v9 )
          {
            *v21 = 0LL;
            v21[1] = 0LL;
            *(_DWORD *)v21 = v23;
            *(v21 - 2) = v26;
            *((_DWORD *)v21 - 2) = 1;
            v21 += 4;
          }
          else
          {
            v6 = -1073741820;
          }
        }
      }
      v20 = (__int64 *)(v24 + 8);
    }
    while ( v23 + 1 < v25 );
  }
  result = v6;
  *v8 = v7;
  return result;
}
