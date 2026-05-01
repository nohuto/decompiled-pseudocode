/*
 * XREFs of sub_18000D65C @ 0x18000D65C
 * Callers:
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F1DC @ 0x18000F1DC (sub_18000F1DC.c)
 * Callees:
 *     sub_180007A50 @ 0x180007A50 (sub_180007A50.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_1800103F4 @ 0x1800103F4 (sub_1800103F4.c)
 *     sub_180011784 @ 0x180011784 (sub_180011784.c)
 *     sub_180011890 @ 0x180011890 (sub_180011890.c)
 */

__int64 __fastcall sub_18000D65C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _WORD *v6; // rax
  __int64 v7; // r11
  unsigned int v8; // edi
  __int64 v9; // rbp
  __int64 v10; // r8
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  signed __int64 v14; // r8
  __int16 v15; // r9
  char *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  unsigned int v19; // esi
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // esi
  __int64 v24; // rdx
  _WORD *v25; // rax
  __int64 v26; // r8
  char *v27; // rcx
  __int64 v28; // rbx
  signed __int64 v29; // rax
  __int16 v30; // dx
  char *v31; // rax
  int v32; // eax
  __int64 v33; // r8
  unsigned int v34; // ebx
  _WORD v35[264]; // [rsp+30h] [rbp-248h] BYREF
  void *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_180011784();
  sub_180007A50(v35, 260LL, a2);
  v6 = v35;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = 2147483646LL;
  v10 = (260 - v7) & -(__int64)(v7 != 0);
  if ( v7 )
  {
    v11 = (char *)&v35[v10];
    v12 = 260 - v10;
    if ( v10 != 260 )
    {
      v13 = 2147483646LL;
      v14 = (char *)L"_p0" - v11;
      do
      {
        if ( !v13 )
          break;
        v15 = *(_WORD *)&v11[v14];
        if ( !v15 )
          break;
        *(_WORD *)v11 = v15;
        --v13;
        v11 += 2;
        --v12;
      }
      while ( v12 );
    }
    v16 = v11 - 2;
    if ( v12 )
      v16 = v11;
    *(_WORD *)v16 = 0;
  }
  v17 = 1LL;
  v18 = a4 >> 31;
  v19 = a4 & 0x7FFFFFFF;
  if ( v19 )
    v17 = v19;
  v20 = sub_180011890(a1, v19, v17, v35);
  v22 = v20;
  if ( v20 >= 0 )
  {
    v24 = 260LL;
    v25 = v35;
    do
    {
      if ( !*v25 )
        break;
      ++v25;
      --v24;
    }
    while ( v24 );
    v26 = (260 - v24) & -(__int64)(v24 != 0);
    if ( v24 )
    {
      v27 = (char *)&v35[v26];
      v28 = 260 - v26;
      if ( 260 != v26 )
      {
        v29 = (char *)L"h" - v27;
        do
        {
          if ( !v9 )
            break;
          v30 = *(_WORD *)&v27[v29];
          if ( !v30 )
            break;
          *(_WORD *)v27 = v30;
          --v9;
          v27 += 2;
          --v28;
        }
        while ( v28 );
      }
      v31 = v27 - 2;
      if ( v28 )
        v31 = v27;
      *(_WORD *)v31 = 0;
    }
    if ( (_DWORD)v18 )
      v8 = v18;
    v32 = sub_180011890(a1 + 8, (unsigned int)v18, v8, v35);
    v34 = v32;
    if ( v32 >= 0 )
    {
      return 0LL;
    }
    else
    {
      sub_1800103F4(retaddr, 137LL, v33, (unsigned int)v32);
      return v34;
    }
  }
  else
  {
    sub_1800103F4(retaddr, 133LL, v21, (unsigned int)v20);
    return v22;
  }
}
