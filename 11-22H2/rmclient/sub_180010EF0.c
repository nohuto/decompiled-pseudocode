/*
 * XREFs of sub_180010EF0 @ 0x180010EF0
 * Callers:
 *     sub_180010E80 @ 0x180010E80 (sub_180010E80.c)
 * Callees:
 *     sub_180007A50 @ 0x180007A50 (sub_180007A50.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000CF24 @ 0x18000CF24 (sub_18000CF24.c)
 *     sub_18000E6A4 @ 0x18000E6A4 (sub_18000E6A4.c)
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 *     sub_1800103F4 @ 0x1800103F4 (sub_1800103F4.c)
 */

__int64 __fastcall sub_180010EF0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  WCHAR *v4; // rax
  __int64 v5; // r11
  __int64 v6; // rsi
  __int64 v7; // r8
  WCHAR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // r8
  WCHAR v12; // r9
  WCHAR *v13; // rax
  HANDLE v14; // rax
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rdx
  WCHAR *v19; // rax
  __int64 v20; // r8
  WCHAR *v21; // rdx
  __int64 v22; // rdi
  char *v23; // rax
  WCHAR v24; // cx
  WCHAR *v25; // rax
  HANDLE v26; // rax
  __int64 v27; // r8
  int v28; // r9d
  int v29; // eax
  __int64 v30; // r8
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE v35; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 retaddr; // [rsp+280h] [rbp+178h]

  *a3 = 0LL;
  sub_180007A50(Name, 260LL, a1);
  v4 = Name;
  v5 = 260LL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = 2147483646LL;
  v7 = (260 - v5) & -(__int64)(v5 != 0);
  if ( v5 )
  {
    v8 = &Name[v7];
    v9 = 260 - v7;
    if ( v7 != 260 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)L"_p0" - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
  }
  v14 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v36[0] = v14;
  if ( v14 )
  {
    v34 = 0LL;
    v15 = sub_18000E6A4(v14, (int *)&v34 + 1);
    v17 = v15;
    if ( v15 >= 0 )
    {
      v18 = 260LL;
      v19 = Name;
      do
      {
        if ( !*v19 )
          break;
        ++v19;
        --v18;
      }
      while ( v18 );
      v20 = (260 - v18) & -(__int64)(v18 != 0);
      if ( v18 )
      {
        v21 = &Name[v20];
        v22 = 260 - v20;
        if ( 260 != v20 )
        {
          v23 = (char *)((char *)L"h" - (char *)v21);
          do
          {
            if ( !v6 )
              break;
            v24 = *(WCHAR *)((char *)v21 + (_QWORD)v23);
            if ( !v24 )
              break;
            *v21 = v24;
            --v6;
            ++v21;
            --v22;
          }
          while ( v22 );
        }
        v25 = v21 - 1;
        if ( v22 )
          v25 = v21;
        *v25 = 0;
      }
      v26 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v35 = v26;
      if ( v26 )
      {
        v29 = sub_18000E6A4(v26, (int *)&v34);
        v17 = v29;
        if ( v29 >= 0 )
        {
          sub_18000CF24(&v35);
          *a3 = SHIDWORD(v34) | (unsigned __int64)((__int64)(int)v34 << 31);
          sub_18000CF24(v36);
          return 0LL;
        }
        sub_1800103F4(retaddr, 215LL, v30, (unsigned int)v29);
      }
      else
      {
        v17 = sub_1800103D4(retaddr, 213, v27, v28);
      }
      sub_18000CF24(&v35);
    }
    else
    {
      sub_1800103F4(retaddr, 207LL, v16, (unsigned int)v15);
    }
  }
  else if ( GetLastError() == 2 )
  {
    v17 = 0;
  }
  else
  {
    v17 = sub_1800103D4(retaddr, 201, v32, v33);
  }
  sub_18000CF24(v36);
  return v17;
}
