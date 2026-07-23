/*
 * XREFs of sub_1405DC4F8 @ 0x1405DC4F8
 * Callers:
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 *     sub_1403B4C90 @ 0x1403B4C90 (sub_1403B4C90.c)
 * Callees:
 *     sub_14039AF3C @ 0x14039AF3C (sub_14039AF3C.c)
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405499F8 @ 0x1405499F8 (sub_1405499F8.c)
 */

char __fastcall sub_1405DC4F8(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  char v5; // bl
  unsigned int v7; // esi
  int *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r15
  _QWORD *v13; // r11
  __int64 v14; // r13
  char *v15; // r9
  __int64 v16; // r10
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned int i; // [rsp+34h] [rbp-5Dh]
  __int64 v24; // [rsp+48h] [rbp-49h]
  char v27; // [rsp+80h] [rbp-11h] BYREF

  v5 = 0;
  v7 = *(_DWORD *)(a1[1] + 20LL);
  for ( i = v7; ; v7 = i )
  {
    while ( sub_1405499F8(v7) )
      ;
    sub_14039AF3C();
    v8 = sub_14039E528(v7);
    if ( v8 )
    {
      v10 = *((_QWORD *)v8 + 4);
      v9 = *(_QWORD *)(v10 + 8LL * (unsigned int)qword_140CF70C0);
      v24 = *(_QWORD *)(v10 + 8LL * HIDWORD(qword_140CF70C0));
    }
    else
    {
      v9 = 0LL;
      v24 = 0LL;
    }
    if ( !sub_1405499F8(i) )
      break;
  }
  if ( !a3 )
  {
    a1[10] = 0LL;
    v11 = -v9;
    v12 = -v9 - a1[11];
    a1[11] = v11;
    if ( v12 )
    {
      v13 = a1 + 15;
      v14 = 2LL;
      v15 = &v27;
      do
      {
        v16 = *(v13 - 3);
        if ( v16 )
        {
          if ( *(_BYTE *)(v16 + 33) )
          {
            v17 = *((_QWORD *)v15 - 2);
            v18 = *(_QWORD *)(v16 + 16);
            if ( v17 == v18 )
            {
              LODWORD(v20) = *(_DWORD *)(v16 + 24);
            }
            else
            {
              v19 = *((_QWORD *)v15 - 1) - *(_QWORD *)(v16 + 8);
              *(_QWORD *)(v16 + 16) = v17;
              *(_QWORD *)(v16 + 8) = *((_QWORD *)v15 - 1);
              v20 = v19 * (unsigned __int64)*(unsigned __int8 *)(v16 + 35) / (v17 - v18);
              *(_DWORD *)(v16 + 24) = v20;
            }
            *(_DWORD *)v15 = v20;
          }
          else
          {
            LODWORD(v20) = *(_DWORD *)v15;
          }
          *v13 += v12 * (unsigned int)v20;
        }
        ++v13;
        v15 += 24;
        --v14;
      }
      while ( v14 );
    }
    if ( a1[12] )
    {
      v21 = a1[15];
    }
    else if ( a1[13] )
    {
      v21 = a1[16];
    }
    else
    {
      v21 = 100LL * a1[14];
    }
    a4[3] = v21;
    if ( a1[13] )
      v21 = a1[16];
    v5 = 1;
    a4[4] = v21;
    *a4 = 0LL;
    a4[1] = v11;
    *a5 = v24;
  }
  return v5;
}
