/*
 * XREFs of sub_1409638AC @ 0x1409638AC
 * Callers:
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14075B7F4 @ 0x14075B7F4 (sub_14075B7F4.c)
 *     sub_14075C424 @ 0x14075C424 (sub_14075C424.c)
 *     sub_14075C588 @ 0x14075C588 (sub_14075C588.c)
 *     sub_14075C68C @ 0x14075C68C (sub_14075C68C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140843CD4 @ 0x140843CD4 (sub_140843CD4.c)
 *     sub_14085CF70 @ 0x14085CF70 (sub_14085CF70.c)
 *     sub_140963878 @ 0x140963878 (sub_140963878.c)
 *     sub_140A1329C @ 0x140A1329C (sub_140A1329C.c)
 */

__int64 __fastcall sub_1409638AC(__int64 a1, unsigned int a2)
{
  __m128i *v3; // rsi
  __int64 v4; // r14
  int v5; // eax
  __int64 *v6; // r13
  int v7; // edi
  __int64 v8; // r15
  __m128i *v9; // rax
  __int64 v10; // rcx
  __m128i *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r9
  void *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rbx
  unsigned int v21; // eax
  __m128i *v22; // rax
  __m128i v23; // xmm1
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  char *v28; // rdx
  _DWORD *v29; // rcx
  __int128 v30; // xmm0
  unsigned int v32; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-85h]
  __int128 v34; // [rsp+48h] [rbp-79h] BYREF
  __int64 v35; // [rsp+58h] [rbp-69h] BYREF
  __int64 v36; // [rsp+60h] [rbp-61h]
  __int64 v37; // [rsp+68h] [rbp-59h]
  __int64 v38; // [rsp+70h] [rbp-51h]
  _OWORD v39[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v40; // [rsp+98h] [rbp-29h]
  char v41[24]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-9h]

  v38 = a1;
  v32 = 0;
  v35 = 0LL;
  v42 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v4 = a2;
  v5 = sub_14075C68C(&v34);
  v6 = (__int64 *)v34;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v4;
    v9 = (__m128i *)sub_1402D84BC(80 * v4);
    v33 = 0;
    v3 = v9;
    v10 = *v6;
    v7 = -1073741275;
    v36 = *v6;
    if ( (_DWORD)v4 )
    {
      v11 = v9 + 4;
      v12 = a1 - (_QWORD)v9;
      v37 = a1 - (_QWORD)v3;
      while ( 1 )
      {
        v13 = *(_QWORD *)((char *)&v11[-2] + v12 - 8);
        v14 = *(void **)(v10 + 8);
        LODWORD(v34) = 0;
        v40 = 0LL;
        memset(v39, 0, sizeof(v39));
        v15 = sub_14075B7F4(v14, 28709LL, 24577, v13, (unsigned int *)v39);
        v16 = (__int64)v14;
        v17 = v36;
        v18 = sub_14085CF70(v36, v16, v15, (int *)&v34);
        v19 = v18 != 0 ? v34 : 0;
        if ( !v19 )
          break;
        if ( (unsigned int)sub_140843CD4(v17, v19, &v35, (int *)&v32) )
        {
          v20 = v35;
          v21 = sub_140792CCC(v35, v32, 36880);
          if ( !v21 )
            break;
          v34 = 0LL;
          v22 = (__m128i *)sub_140A1329C(v41, v20, v21, &v34);
          v23 = *v22;
          v24 = v22->m128i_i64[0] - v42;
          if ( !v24 )
            v24 = _mm_srli_si128(v23, 8).m128i_u64[0] - *((_QWORD *)&v42 + 1);
          if ( !v24 )
            break;
          v25 = v32;
          v11[-4] = v23;
          v26 = sub_140792CCC(v20, v25, 24579);
          if ( !v26 )
            break;
          v7 = sub_140963878(v20, v26, (__int64)v3[5 * v33 + 2].m128i_i64);
          if ( v7 < 0 )
            break;
          v27 = sub_140792CCC(v20, v32, 16407);
          if ( !v27 )
            break;
          v11->m128i_i32[0] = sub_1407ECF5C(v20, v27, 0);
        }
        v11 += 5;
        v10 = v36;
        ++v33;
        v12 = v37;
        if ( v33 >= (unsigned int)v4 )
        {
          v28 = &v3->m128i_i8[-v38];
          v29 = (_DWORD *)(v38 + 64);
          do
          {
            *v29 = *(_DWORD *)((char *)v29 + (_QWORD)v28);
            v30 = *(_OWORD *)((char *)v29 + (_QWORD)v28 - 32);
            v29 += 20;
            *((_OWORD *)v29 - 7) = v30;
            *((_OWORD *)v29 - 9) = *(_OWORD *)((char *)v29 + (_QWORD)v28 - 144);
            --v8;
          }
          while ( v8 );
          goto LABEL_17;
        }
      }
    }
    else
    {
LABEL_17:
      v7 = 0;
    }
  }
  if ( v6 )
    sub_14075C588((__int64)v6);
  if ( v7 >= 0 )
    sub_1402D8494(v3);
  else
    sub_14075C424(v3, v4);
  return (unsigned int)v7;
}
