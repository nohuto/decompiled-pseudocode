/*
 * XREFs of sub_1405DEB88 @ 0x1405DEB88
 * Callers:
 *     sub_1405DE9D4 @ 0x1405DE9D4 (sub_1405DE9D4.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

int __fastcall sub_1405DEB88(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 i; // rdi
  unsigned __int16 *v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rcx
  int v9; // edx
  int v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  int *v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  __int64 *v18; // [rsp+88h] [rbp-80h]
  __int64 v19; // [rsp+90h] [rbp-78h]
  __int64 *v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h] BYREF
  int *v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h] BYREF
  int *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  unsigned __int16 *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]

  LOWORD(v12) = 0;
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    LOWORD(v11) = 1;
    v16 = &v11;
    v17 = 2LL;
    v18 = &v21;
    v20 = (__int64 *)*((_QWORD *)a1 + 1);
    v21 = *a1;
    v13 = *((_DWORD *)a1 + 12);
    v22 = (__int64 *)&v13;
    v14 = *((_DWORD *)a1 + 7);
    v24 = (__int64 *)&v14;
    v19 = 2LL;
    v23 = 4LL;
    v25 = 4LL;
    sub_14024A9B0((__int64)&dword_140C03A00, (unsigned __int8 *)&word_140031FBE, 0LL, 1u, 0, 0, 7u, v15);
  }
  v2 = *((_QWORD *)a1 + 6);
  for ( i = 0LL; i < v2; ++i )
  {
    v4 = *(unsigned __int16 **)(*((_QWORD *)a1 + 7) + 8 * i);
    LOWORD(v12) = 4;
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      LOWORD(v11) = 1;
      v16 = &v11;
      v17 = 2LL;
      v18 = &v21;
      v20 = (__int64 *)*((_QWORD *)v4 + 1);
      v21 = *v4;
      v22 = &v25;
      v24 = (__int64 *)*((_QWORD *)a1 + 1);
      v25 = *a1;
      v14 = *((_DWORD *)v4 + 18);
      v26 = &v14;
      v13 = *((_DWORD *)v4 + 8);
      v28 = &v13;
      v30 = &v12;
      v32 = v4 + 18;
      v19 = 2LL;
      v23 = 2LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 2LL;
      v33 = 32LL;
      sub_14024A9B0((__int64)&dword_140C03A00, (unsigned __int8 *)&byte_1400320A9, 0LL, 1u, 0, 0, 0xBu, v15);
    }
    v2 = *((_QWORD *)a1 + 6);
  }
  v5 = 0LL;
  if ( v2 )
  {
    do
    {
      v2 = *((_QWORD *)a1 + 7);
      v6 = 0LL;
      v7 = *(_QWORD **)(v2 + 8 * v5);
      if ( v7[9] )
      {
        do
        {
          v2 = v7[10];
          v8 = *(_QWORD *)(v2 + 8 * v6);
          v9 = *(unsigned __int16 *)(v8 + 24);
          LOWORD(v12) = *(_WORD *)(v8 + 24);
          if ( (unsigned int)dword_140C03A00 > 5 )
          {
            v18 = (__int64 *)v8;
            v16 = &v11;
            LOWORD(v11) = 1;
            v20 = &v23;
            v22 = (__int64 *)v7[1];
            v23 = *(unsigned __int16 *)v7;
            v24 = &v27;
            v26 = (int *)*((_QWORD *)a1 + 1);
            v27 = *a1;
            v28 = &v12;
            v30 = (int *)(v8 + 32);
            v17 = 2LL;
            v31 = (unsigned int)(8 * v9);
            v19 = 16LL;
            v21 = 2LL;
            v25 = 2LL;
            v29 = 2LL;
            LODWORD(v2) = sub_14024A9B0(
                            (__int64)&dword_140C03A00,
                            (unsigned __int8 *)&dword_14003201C,
                            0LL,
                            1u,
                            0,
                            0,
                            0xAu,
                            v15);
          }
          ++v6;
        }
        while ( v6 < v7[9] );
      }
      ++v5;
    }
    while ( v5 < *((_QWORD *)a1 + 6) );
  }
  return v2;
}
