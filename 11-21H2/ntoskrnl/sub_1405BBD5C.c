/*
 * XREFs of sub_1405BBD5C @ 0x1405BBD5C
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 * Callees:
 *     sub_14026C124 @ 0x14026C124 (sub_14026C124.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     sub_1405B85F8 @ 0x1405B85F8 (sub_1405B85F8.c)
 *     sub_1405BA768 @ 0x1405BA768 (sub_1405BA768.c)
 */

__int64 __fastcall sub_1405BBD5C(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  int v8; // r13d
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 *v25; // rbx
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF
  __int128 v29; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v30; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  LODWORD(v30) = 0;
  v8 = 4;
  v28 = 0LL;
  v29 = 0LL;
  v9 = sub_14028F080(a2, a3, 0LL, a6, 4, &v30);
  v27 = v9;
  v10 = v9;
  if ( !v9 )
    return a3 + 8;
  v12 = sub_1402FDD20(v9 << 25 >> 16);
  if ( v12 )
  {
    v14 = v12;
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
    v15 = v12;
    result = v10 + 8;
    do
    {
      result = result << 25 >> 16;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    if ( ((v10 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      sub_140352E50((__int64)(v10 << 25) >> 16, (unsigned __int64 *)&v28);
      v17 = *a1;
      v18 = (unsigned __int64 *)&v29 + 1;
      a1[6] = v10;
      v19 = *(_QWORD *)(v17 + 40) >> 12;
      v20 = 0LL;
      v21 = v19;
      v22 = 3LL;
      do
      {
        v30 = (__int64 *)(sub_14026C124(a1[7], v19, 1073741856, 0) + 8LL * ((*(_DWORD *)v18 >> 3) & 0x1FF));
        v23 = sub_140317A10((unsigned __int64)v30);
        v26 = v23;
        v24 = v23;
        if ( v23 )
        {
          if ( (v23 & 1) != 0 )
          {
            v24 = sub_140317A10((unsigned __int64)&v26);
          }
          else if ( qword_140C50780 )
          {
            if ( (v23 & 0x10) != 0 )
              v24 = v23 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v24 = ~qword_140C50780 & v23;
          }
          v19 = (v24 >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v25 = &a1[4 - v8];
          sub_1405BA768(v25 + 1, a5, *a1, a6);
          v19 = v25[1];
          sub_1405B85F8(*a1, v19, *v18, v30, v21, v8 - 1);
          ++*v31;
          if ( v20 )
            sub_14028FB74(v20, 1u);
        }
        v20 = 48 * v19 - 0x220000000000LL;
        --v8;
        --v18;
        v21 = v19;
        --v22;
      }
      while ( v22 );
      v16 = sub_14026C124(a1[7], v19, 1073741856, 0);
      v10 = v27;
      a1[4] = v16;
      a1[8] = v20;
    }
    else
    {
      v16 = a1[4];
    }
    LOBYTE(v13) = a6;
    a1[5] = v16 | v10 & 0xFFF;
    sub_14032CE60(v10, 0LL, 0, v13, 1);
    return v10;
  }
  return result;
}
