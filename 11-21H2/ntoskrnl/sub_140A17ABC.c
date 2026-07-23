/*
 * XREFs of sub_140A17ABC @ 0x140A17ABC
 * Callers:
 *     sub_140A13FC0 @ 0x140A13FC0 (sub_140A13FC0.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 *     sub_140A17D10 @ 0x140A17D10 (sub_140A17D10.c)
 */

__int64 __fastcall sub_140A17ABC(_WORD *a1, __int64 a2, _WORD *a3, __int16 a4, _WORD *a5)
{
  __int64 v8; // r8
  _WORD *v9; // rcx
  __int16 v10; // ax
  _WORD *v11; // rax
  unsigned int v12; // edi
  __int64 v13; // r8
  _WORD *v14; // rax
  __int64 v15; // r9
  signed int v16; // eax
  char *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // r8
  __int16 v21; // r9
  char *v22; // rax
  int v23; // ebx
  _WORD v25[64]; // [rsp+30h] [rbp-B8h] BYREF

  *a1 = 0;
  if ( a5 && *a5 != a4 )
  {
    memset(v25, 0, sizeof(v25));
    v8 = 64LL;
    v9 = v25;
    do
    {
      if ( v8 == -2147483582 )
        break;
      v10 = *(_WORD *)((char *)v9 + (char *)L"\\SystemRoot" - (char *)v25);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v8;
    }
    while ( v8 );
    v11 = v9 - 1;
    if ( v8 )
      v11 = v9;
    *v11 = 0;
    v12 = v8 == 0 ? 0x80000005 : 0;
    if ( !v8 )
      goto LABEL_23;
    v13 = 64LL;
    v14 = v25;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v12 = -1073741811;
    v15 = (64 - v13) & -(__int64)(v13 != 0);
    v16 = v13 == 0 ? 0xC000000D : 0;
    if ( v13 )
    {
      v17 = (char *)&v25[v15];
      v18 = 64 - v15;
      if ( 64 != v15 )
      {
        v19 = 2147483646LL;
        v20 = (char *)L"\\SysNative" - v17;
        do
        {
          if ( !v19 )
            break;
          v21 = *(_WORD *)&v17[v20];
          if ( !v21 )
            break;
          *(_WORD *)v17 = v21;
          --v19;
          v17 += 2;
          --v18;
        }
        while ( v18 );
      }
      v22 = v17 - 2;
      if ( v18 )
        v22 = v17;
      *(_WORD *)v22 = 0;
      v16 = v18 == 0 ? 0x80000005 : 0;
    }
    if ( v16 < 0 )
    {
LABEL_23:
      v23 = v12;
      sub_1406E0C3C(1LL, (__int64)"AslPathToSystemPathBuf");
LABEL_29:
      sub_1406E0C3C(1LL, (__int64)"AslEnvGetSysNativeDirPathForGuestBuf");
      return (unsigned int)v23;
    }
    if ( a3 && *a3 )
    {
      v23 = sub_140A15B1C(v25, a3, a1, a2);
      if ( v23 < 0 )
        goto LABEL_29;
    }
    else
    {
      v23 = sub_1402E0200(a1, a2, (__int64)v25);
      if ( v23 < 0 )
        goto LABEL_29;
    }
    return (unsigned int)v23;
  }
  return sub_140A17D10((_DWORD)a1, a2, (_DWORD)a3, a4, (__int64)a5);
}
