/*
 * XREFs of sub_140AAC868 @ 0x140AAC868
 * Callers:
 *     sub_140AAB88C @ 0x140AAB88C (sub_140AAB88C.c)
 *     sub_140AAB930 @ 0x140AAB930 (sub_140AAB930.c)
 *     sub_140AAE79C @ 0x140AAE79C (sub_140AAE79C.c)
 * Callees:
 *     sub_14025E2BC @ 0x14025E2BC (sub_14025E2BC.c)
 *     sub_1403A8954 @ 0x1403A8954 (sub_1403A8954.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403CAD78 @ 0x1403CAD78 (sub_1403CAD78.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AABE98 @ 0x140AABE98 (sub_140AABE98.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 *     sub_140AAD404 @ 0x140AAD404 (sub_140AAD404.c)
 */

__int64 __fastcall sub_140AAC868(_DWORD *a1, _DWORD *a2, __int64 a3, _QWORD *a4, __int64 *a5, char a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  int v8; // edi
  _DWORD *v11; // rdx
  void *v12; // rax
  __int64 v13; // rbx
  unsigned int *v14; // r13
  _QWORD *v15; // r12
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  __int64 *v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h]
  _DWORD v26[6]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v22 = 0LL;
  v23 = 0LL;
  *a5 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v25 = *(_QWORD *)sub_14025E2BC(v26);
      if ( *v11 <= (unsigned int)v25 && v11[1] <= HIDWORD(v25) )
      {
        v12 = (void *)sub_1403AA2B8(0x50uLL);
        v13 = (__int64)v12;
        if ( !v12 )
        {
          v8 = -1073741801;
LABEL_24:
          *a5 = v13;
          return (unsigned int)v8;
        }
        memset(v12, 0, 0x50uLL);
        if ( a3 )
        {
          v14 = (unsigned int *)(v13 + 40);
          *(_OWORD *)(v13 + 40) = *(_OWORD *)a3;
          *(_QWORD *)(v13 + 56) = *(_QWORD *)(a3 + 16);
        }
        else
        {
          v8 = sub_140AABE98(0LL, &v24);
          if ( v8 < 0 )
            goto LABEL_37;
          *(_DWORD *)(v13 + 44) = -1;
          v14 = (unsigned int *)(v13 + 40);
          *(_DWORD *)(v13 + 40) = 0;
          v21 = v24;
          *(_DWORD *)(v13 + 60) = 0;
          *(_QWORD *)(v13 + 48) = v21;
          *(_DWORD *)(v13 + 56) = 18;
        }
        v15 = (_QWORD *)(v13 + 64);
        if ( a4 )
        {
          *v15 = *a4;
          goto LABEL_10;
        }
        v8 = sub_1403CAD78((__int64)v14, v13 + 64);
        if ( v8 >= 0 )
        {
LABEL_10:
          if ( (a6 & 1) == 0 )
          {
            v16 = *(_DWORD *)(v13 + 68);
            if ( a2[1] < v16 )
              a2[1] = v16;
            if ( *a2 < *(_DWORD *)v15 )
              *a2 = *(_DWORD *)v15;
          }
          if ( *a1 + *a2 > (unsigned int)v25 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v25) )
          {
            v8 = -1073741811;
            goto LABEL_33;
          }
          if ( (a6 & 2) == 0 )
          {
            v20 = sub_140AAD404(a2, 32LL, &v22);
            v6 = v22;
            v8 = v20;
            if ( v20 < 0 )
              goto LABEL_33;
            sub_1403A8954(v22, *v14);
          }
          if ( (a6 & 9) == 0 )
            goto LABEL_21;
          v17 = sub_140AAD404(a2, 32LL, &v23);
          v7 = v23;
          v8 = v17;
          if ( v17 >= 0 )
          {
            *(_QWORD *)(v13 + 32) = v23;
LABEL_21:
            *(_QWORD *)v13 = *(_QWORD *)a1;
            *(_QWORD *)(v13 + 8) = *(_QWORD *)a2;
            v18 = a2[2];
            *(_DWORD *)(v13 + 76) = 0;
            *(_DWORD *)(v13 + 16) = v18;
            *(_QWORD *)(v13 + 24) = v6;
            *(_DWORD *)(v13 + 72) = 1;
            if ( (a6 & 4) != 0 )
              *(_DWORD *)(v13 + 72) = 5;
            if ( v8 >= 0 )
              goto LABEL_24;
          }
LABEL_33:
          if ( v6 )
            sub_140AAD3E0(v6);
          if ( v7 )
            sub_140AAD3E0(v7);
        }
LABEL_37:
        sub_1403A8CB4(v13);
        goto LABEL_24;
      }
    }
  }
  return 3221225485LL;
}
