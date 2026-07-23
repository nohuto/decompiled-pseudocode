/*
 * XREFs of sub_1404091C8 @ 0x1404091C8
 * Callers:
 *     sub_140408B40 @ 0x140408B40 (sub_140408B40.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400EB4 @ 0x140400EB4 (sub_140400EB4.c)
 *     sub_140400F34 @ 0x140400F34 (sub_140400F34.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400FB0 @ 0x140400FB0 (sub_140400FB0.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 *     sub_1404012E4 @ 0x1404012E4 (sub_1404012E4.c)
 *     sub_1404068A4 @ 0x1404068A4 (sub_1404068A4.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_1404091C8(__int64 a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  _DWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v9; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  _BYTE *v15; // rdx
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // [rsp+30h] [rbp-89h]
  __int64 v25; // [rsp+38h] [rbp-81h]
  __int64 v26; // [rsp+40h] [rbp-79h]
  __int64 v27; // [rsp+48h] [rbp-71h]
  __int64 v28; // [rsp+58h] [rbp-61h]
  __int64 v29; // [rsp+60h] [rbp-59h]
  __int64 v30[8]; // [rsp+70h] [rbp-49h] BYREF

  v5 = *(_DWORD **)(a1 + 616);
  v6 = (__int64)(a2 + 32);
  v9 = *(unsigned int *)(a1 + 36);
  v25 = v6;
  v13 = (unsigned int)(2 * v9);
  v26 = (__int64)&a2[v9 + 32];
  v14 = (__int64)&a2[v13 + 32];
  v28 = (__int64)(a3 + 32);
  v27 = v14;
  v29 = (__int64)&a3[v9 + 32];
  v24 = (__int64)&a3[v13 + 32];
  memset(v30, 0, sizeof(v30));
  if ( (unsigned int)sub_140400FB0() )
  {
    v15 = a3;
    return sub_1404068A4(a1, v15, a4);
  }
  if ( (unsigned int)sub_140400FB0() )
  {
    v15 = a2;
    return sub_1404068A4(a1, v15, a4);
  }
  v17 = v30;
  v18 = 8LL;
  do
  {
    *v17++ = sub_140400F4C();
    a5 += *(unsigned int *)(a1 + 36);
    --v18;
  }
  while ( v18 );
  sub_1404012B0(v5);
  sub_1404011D4(v5, v14);
  sub_1404012B0(v5);
  v19 = v30[2];
  sub_1404011D4(v5, v25);
  v20 = v30[3];
  sub_1404011D4(v5, v28);
  sub_1404012E4(v5, v20);
  if ( (unsigned int)sub_140400FB0() )
  {
    sub_140400F34();
    sub_1404012B0(v5);
    sub_1404012B0(v5);
    sub_1404012B0(v5);
    sub_140400EB4(v5, v25);
    sub_1404012B0(v5);
    sub_1404012E4(v5, v30[1]);
    sub_1404012E4(v5, v30[1]);
    sub_140400EB4(v5, v30[1]);
    sub_1404012B0(v5);
    sub_1404011D4(v5, v19);
    sub_140400EB4(v5, v19);
    sub_140400EB4(v5, v30[0]);
    sub_140400EB4(v5, v19);
    sub_1404012B0(v5);
    sub_1404012E4(v5, v30[0]);
    sub_1404012E4(v5, v30[0]);
    sub_1404012E4(v5, v30[1]);
    sub_1404011D4(v5, v19);
    sub_140400EB4(v5, v30[5]);
    sub_140400EB4(v5, v30[5]);
    sub_140400EB4(v5, v30[5]);
    sub_1404012E4(v5, v30[1]);
    sub_140400EB4(v5, v26);
    sub_1404012B0(v5);
    sub_1404012E4(v5, v19);
    sub_1404012E4(v5, v19);
  }
  else
  {
    v21 = v30[4];
    sub_140400EB4(v5, v27);
    sub_1404012B0(v5);
    sub_1404012E4(v5, v21);
    sub_1404012E4(v5, v21);
    sub_1404011D4(v5, v21);
    sub_1404011D4(v5, v24);
    sub_1404011D4(v5, v26);
    v22 = v30[7];
    sub_1404011D4(v5, v29);
    sub_1404012E4(v5, v22);
    sub_140400EB4(v5, v22);
    sub_140400EB4(v5, v30[5]);
    sub_1404012B0(v5);
    sub_1404011D4(v5, v20);
    sub_1404011D4(v5, v30[2]);
    sub_1404012B0(v5);
    sub_1404012E4(v5, v30[2]);
    sub_1404012E4(v5, v30[2]);
    sub_1404012E4(v5, v30[2]);
    sub_1404012E4(v5, v20);
    sub_1404011D4(v5, v20);
    v23 = v30[6];
    sub_1404011D4(v5, v30[6]);
    sub_140400EB4(v5, v23);
    sub_1404012E4(v5, v20);
  }
  sub_140400F34();
  sub_140400F34();
  return (void *)sub_140400F34();
}
