/*
 * XREFs of sub_14076DFF0 @ 0x14076DFF0
 * Callers:
 *     sub_1407894A8 @ 0x1407894A8 (sub_1407894A8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 */

__int64 __fastcall sub_14076DFF0(int a1, int a2, int a3, __int64 a4, unsigned int a5, __int64 a6, unsigned int a7)
{
  __int64 (**v7)[3]; // r10
  int v8; // esi
  unsigned int v9; // ebx
  int v14; // r9d
  __int64 *v15; // r11
  __int64 (**v16)[3]; // rdx
  __int64 v17; // r8
  int v18; // r8d
  int v19; // ebx
  int v20; // edi
  __int64 result; // rax
  _BYTE *v22; // rax
  int v23; // ecx
  int *v24; // rax
  int v25; // ecx
  __int64 v26; // [rsp+28h] [rbp-B0h]
  int v27; // [rsp+30h] [rbp-A8h]
  int v28; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v29[80]; // [rsp+50h] [rbp-88h] BYREF

  v28 = 0;
  v7 = &off_140A3AC00;
  v8 = *(_DWORD *)(a4 + 16);
  v9 = 0;
  v14 = 1;
  do
  {
    v15 = (__int64 *)*v7;
    v16 = v7;
    if ( v8 == LODWORD((**v7)[2]) )
    {
      v17 = *(_QWORD *)a4 - *v15;
      if ( *(_QWORD *)a4 == *v15 )
        v17 = *(_QWORD *)(a4 + 8) - v15[1];
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    ++v9;
    v7 += 3;
  }
  while ( v9 < 0x21 );
  if ( !v16 )
    return 3221226032LL;
  v18 = *((_DWORD *)v16 + 2);
  v19 = *((_DWORD *)v16 + 3);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return 3221225485LL;
    }
    else if ( a5 >= 2 )
    {
      return 3221225485LL;
    }
  }
  v20 = *((_DWORD *)v16 + 4);
  if ( v19 != 9 )
  {
    if ( v19 == 25 )
      return 3221225659LL;
    if ( v19 == 27 )
    {
      if ( a6 )
      {
        if ( !a7 )
          return 3221225485LL;
        if ( *(_BYTE *)a6 != 0xFF )
        {
          if ( *(_BYTE *)a6 )
            return 3221225485LL;
          v14 = 0;
        }
        v28 = v14;
        v24 = &v28;
        v25 = 4;
      }
      else
      {
        v24 = 0LL;
        v25 = 0;
      }
      return sub_14076FE20(a1, a2, a3, 27, v20, (__int64)v24, v25, 0);
    }
    if ( v19 != 37 )
    {
      v27 = a6 != 0 ? a7 : 0;
      v26 = a6 & -(__int64)(a6 != 0);
      return sub_14076FE20(a1, a2, a3, v19, v20, v26, v27, 0);
    }
  }
  if ( !a6 )
  {
    v22 = 0LL;
    v23 = 0;
    goto LABEL_21;
  }
  if ( a7 < 0x10 )
    return 3221225485LL;
  result = sub_140773030(a6, v29);
  if ( (int)result >= 0 )
  {
    v22 = v29;
    v23 = 78;
LABEL_21:
    v27 = v23;
    v26 = (__int64)v22;
    return sub_14076FE20(a1, a2, a3, v19, v20, v26, v27, 0);
  }
  return result;
}
