/*
 * XREFs of sub_14083673C @ 0x14083673C
 * Callers:
 *     sub_1408365F8 @ 0x1408365F8 (sub_1408365F8.c)
 * Callees:
 *     sub_1402E0A04 @ 0x1402E0A04 (sub_1402E0A04.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 */

__int64 __fastcall sub_14083673C(_WORD *a1, HANDLE *a2)
{
  __int64 v3; // r8
  WCHAR *v4; // rdx
  WCHAR v5; // ax
  WCHAR *v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  WCHAR *v9; // rax
  __int64 v10; // r8
  WCHAR *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  char *v14; // rdx
  WCHAR v15; // r8
  WCHAR *v16; // rax
  WCHAR v17[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  v3 = 256LL;
  v4 = v17;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v5 = *(WCHAR *)((char *)v4 + (char *)L"Time Zones\\" - (char *)v17);
    if ( !v5 )
      break;
    *v4++ = v5;
    --v3;
  }
  while ( v3 );
  v6 = v4 - 1;
  if ( v3 )
    v6 = v4;
  *v6 = 0;
  result = v3 == 0 ? 0x80000005 : 0;
  if ( v3 )
  {
    result = sub_1402E0A04(v17, 0x200uLL, (__int64)a1);
    if ( (int)result >= 0 )
    {
      v8 = 256LL;
      v9 = v17;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      v10 = (256 - v8) & -(__int64)(v8 != 0);
      result = v8 == 0 ? 0xC000000D : 0;
      if ( v8 )
      {
        v11 = &v17[v10];
        v12 = 256 - v10;
        if ( 256 != v10 )
        {
          v13 = 2147483646LL;
          v14 = (char *)((char *)L"\\Dynamic DST" - (char *)v11);
          do
          {
            if ( !v13 )
              break;
            v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
            if ( !v15 )
              break;
            *v11 = v15;
            --v13;
            ++v11;
            --v12;
          }
          while ( v12 );
        }
        v16 = v11 - 1;
        if ( v12 )
          v16 = v11;
        *v16 = 0;
        result = v12 == 0 ? 0x80000005 : 0;
      }
      if ( (int)result >= 0 )
        return sub_14077FDA0(3, v17, 0, a2);
    }
  }
  return result;
}
