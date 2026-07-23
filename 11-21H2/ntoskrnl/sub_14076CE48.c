/*
 * XREFs of sub_14076CE48 @ 0x14076CE48
 * Callers:
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_14076CFE4 @ 0x14076CFE4 (sub_14076CFE4.c)
 *     sub_14076D788 @ 0x14076D788 (sub_14076D788.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_14076CE48(__int64 a1, __int64 a2, const wchar_t *a3, _WORD *a4)
{
  ULONG v4; // edi
  int v9; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  char v14; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v15[7]; // [rsp+41h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v17[4]; // [rsp+50h] [rbp-41h] BYREF
  char v18[80]; // [rsp+60h] [rbp-31h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v15[0] = 0;
  v14 = 0;
  v9 = sub_1402E0200(a4, 39LL, (__int64)a3);
  if ( v9 >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      v9 = sub_14078014C(a1, 10LL, &KeyHandle);
      if ( v9 >= 0 )
      {
        v9 = sub_14076CFE4(a1, (_DWORD)KeyHandle, (_DWORD)a3, (_DWORD)a3, a2, (__int64)v15, (__int64)&v14);
        if ( v9 >= 0 && !v14 )
        {
          while ( 1 )
          {
            v17[0] = 39;
            v11 = sub_1406CB3B4(KeyHandle, v4, v18, v17);
            v9 = v11;
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -1073741789 )
            {
              if ( v11 < 0 )
                return (unsigned int)v9;
              v13 = sub_14076D788(v12, v18);
              v9 = v13;
              if ( v13 != -1073741773 )
              {
                if ( v13 < 0 )
                  return (unsigned int)v9;
                v9 = sub_14076CFE4(
                       a1,
                       (_DWORD)KeyHandle,
                       (unsigned int)v18,
                       (_DWORD)a3,
                       a2,
                       (__int64)v15,
                       (__int64)&v14);
                if ( v9 < 0 )
                  return (unsigned int)v9;
                if ( v15[0] )
                {
                  v9 = sub_1402E0200(a4, 39LL, (__int64)v18);
                  if ( v9 < 0 )
                    return (unsigned int)v9;
                }
                if ( v14 )
                  return (unsigned int)v9;
              }
            }
            ++v4;
          }
          return 0;
        }
      }
    }
  }
  return (unsigned int)v9;
}
