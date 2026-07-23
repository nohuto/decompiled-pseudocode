/*
 * XREFs of sub_1407DE98C @ 0x1407DE98C
 * Callers:
 *     sub_140604D38 @ 0x140604D38 (sub_140604D38.c)
 *     sub_1406289C8 @ 0x1406289C8 (sub_1406289C8.c)
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140360C70 @ 0x140360C70 (sub_140360C70.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140586950 @ 0x140586950 (sub_140586950.c)
 *     sub_1407DECE0 @ 0x1407DECE0 (sub_1407DECE0.c)
 */

__int64 __fastcall sub_1407DE98C(ULONG_PTR **a1, __int64 a2)
{
  ULONG_PTR *v2; // r13
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r15
  int v9; // esi
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // esi
  __int64 j; // r12
  char *v26; // rax
  __int64 v27; // r10
  _QWORD *v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rax
  int i; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v41[22]; // [rsp+50h] [rbp-B0h] BYREF
  char v42[24]; // [rsp+100h] [rbp+0h] BYREF
  char v43; // [rsp+118h] [rbp+18h] BYREF

  v2 = *a1;
  v40 = 0LL;
  memset(v41, 0, sizeof(v41));
  if ( (*(_DWORD *)a2 & 0xFFFFFFFE) == 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = (unsigned __int16)word_140D05000;
    if ( (v4 == -1 || v4 < (unsigned __int16)word_140D05000) && *(_DWORD *)(a2 + 8) == -1 )
    {
      v6 = 0;
      v7 = 0;
      *(_QWORD *)(a2 + 224) = 0LL;
      for ( i = 0; ; v6 = i )
      {
        v8 = 0LL;
        v9 = v6;
        if ( v2 != &StartContext || (*(_DWORD *)a2 & 1) != 0 )
        {
          v32 = *(_DWORD *)(a2 + 4);
          if ( v32 != -1 )
            goto LABEL_46;
        }
        else
        {
          v10 = *(unsigned int *)(a2 + 4);
          if ( (_DWORD)v10 != -1 )
          {
            v8 = qword_140C4F040[v10 + 1506];
            v32 = *(_DWORD *)(a2 + 4);
LABEL_46:
            *(_DWORD *)(a2 + 12) = 0;
            v5 = v32 + 1;
            v7 = v32;
LABEL_47:
            i = 1;
LABEL_48:
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 32) = 0LL;
            *(_QWORD *)(a2 + 40) = 0LL;
            *(_QWORD *)(a2 + 216) = 0LL;
            memset((void *)(a2 + 88), 0, 0x80uLL);
            goto LABEL_24;
          }
          if ( v7 < v5 )
          {
            v11 = &qword_140C4F040[v7 + 1506];
            v12 = v5 - v7;
            do
            {
              v8 += *v11++;
              --v12;
            }
            while ( v12 );
          }
        }
        *(_DWORD *)(a2 + 12) = (unsigned __int16)word_140D05000;
        if ( (*(_DWORD *)a2 & 1) != 0 )
          goto LABEL_47;
        *(_QWORD *)(a2 + 16) = v2[2120];
        v13 = v2[2157];
        if ( v13 < v8 )
          goto LABEL_49;
        *(_QWORD *)(a2 + 24) = v13 - v8;
        v14 = v2[2187];
        if ( v14 < v8 )
          goto LABEL_49;
        *(_QWORD *)(a2 + 32) = v14 - v8;
        v15 = v2[2000];
        if ( v15 < v8 )
          goto LABEL_49;
        *(_QWORD *)(a2 + 40) = v15 - v8;
        sub_140360C70(v2, v41);
        memmove((void *)(a2 + 88), &v41[5], 0x40uLL);
        memmove((void *)(a2 + 152), &v41[13], 0x40uLL);
        v16 = v2[2001];
        if ( v16 < v8 )
          goto LABEL_49;
        *(_QWORD *)(a2 + 216) = v16 - v8;
        v17 = *(_QWORD *)(a2 + 216);
        v18 = *(_QWORD *)(a2 + 32);
        if ( v18 > v17 )
          v17 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(a2 + 216) = v17;
        v19 = *(_QWORD *)(a2 + 24);
        if ( *(_QWORD *)(a2 + 40) < v19 )
          *(_QWORD *)(a2 + 40) = v19;
        if ( v19 > v18 )
          *(_QWORD *)(a2 + 24) = v18;
        i = v9;
        if ( v9 )
          goto LABEL_48;
        i = 0;
LABEL_24:
        *(_QWORD *)(a2 + 64) = 0LL;
        v20 = 0LL;
        *(_QWORD *)(a2 + 72) = 0LL;
        v21 = 0LL;
        *(_QWORD *)(a2 + 80) = 0LL;
        v22 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
        v23 = 0LL;
        v24 = v7;
        for ( j = v2[2] + 24512LL * v7; v24 < v5; j += 24512LL )
        {
          if ( (*(_DWORD *)a2 & 1) != 0 )
          {
            v37 = 0LL;
            v38 = 0LL;
            v39 = 0LL;
            sub_140586950(j, &v39, &v37, &v38);
            v33 = v37;
            v34 = v38;
            v35 = v39;
            *(_QWORD *)(a2 + 80) = 0LL;
            v23 = *(_QWORD *)(a2 + 64) + (v33 << 18);
            v22 = *(_QWORD *)(a2 + 72) + (v34 << 18);
            *(_QWORD *)(a2 + 48) += v35 << 18;
            *(_QWORD *)(a2 + 64) = v23;
            v21 = 0LL;
            *(_QWORD *)(a2 + 72) = v22;
          }
          else
          {
            sub_1407DECE0(v2, v24, v42, &v40);
            v23 = *(_QWORD *)(a2 + 64);
            v22 = *(_QWORD *)(a2 + 72);
            v21 = *(_QWORD *)(a2 + 80);
            if ( (unsigned int)(v40 / 0x28) )
            {
              v26 = &v43;
              v27 = (unsigned int)(v40 / 0x28);
              do
              {
                v23 += *((_QWORD *)v26 - 1);
                v22 += *(_QWORD *)v26;
                v21 += *((_QWORD *)v26 + 1);
                v26 += 40;
                --v27;
              }
              while ( v27 );
            }
            *(_QWORD *)(a2 + 64) = v23;
            *(_QWORD *)(a2 + 72) = v22;
            *(_QWORD *)(a2 + 80) = v21;
            *(_QWORD *)(a2 + 48) += *(_QWORD *)(j + 22608);
          }
          v20 = *(_QWORD *)(a2 + 48);
          ++v24;
        }
        if ( v2 == &StartContext )
        {
          if ( v20 < v8 )
            goto LABEL_49;
          v20 -= v8;
          *(_QWORD *)(a2 + 48) = v20;
        }
        if ( *(_DWORD *)(a2 + 4) == -1 && (*(_DWORD *)a2 & 1) == 0 )
        {
          *(_QWORD *)(a2 + 80) = 0LL;
          v28 = (_QWORD *)(a2 + 88);
          v21 = 0LL;
          v29 = 8LL;
          do
          {
            v21 += *v28++;
            *(_QWORD *)(a2 + 80) = v21;
            --v29;
          }
          while ( v29 );
          v22 = *(_QWORD *)(a2 + 72);
          v23 = *(_QWORD *)(a2 + 64);
          v20 = *(_QWORD *)(a2 + 48);
        }
        v30 = v23 + v22 + v21;
        *(_QWORD *)(a2 + 56) = v30;
        if ( v30 <= v20 )
        {
          *(_DWORD *)(a2 + 232) = *(unsigned __int16 *)v2;
          return 0LL;
        }
LABEL_49:
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14003BE68);
      }
    }
  }
  return 3221225485LL;
}
