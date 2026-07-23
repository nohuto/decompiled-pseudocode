/*
 * XREFs of sub_140861984 @ 0x140861984
 * Callers:
 *     sub_1409AC6C0 @ 0x1409AC6C0 (sub_1409AC6C0.c)
 *     sub_140B2E6EC @ 0x140B2E6EC (sub_140B2E6EC.c)
 * Callees:
 *     sub_1402516A0 @ 0x1402516A0 (sub_1402516A0.c)
 *     sub_1406D972C @ 0x1406D972C (sub_1406D972C.c)
 *     sub_1408619F4 @ 0x1408619F4 (sub_1408619F4.c)
 */

__int64 __fastcall sub_140861984(char *a1)
{
  int v2; // ecx
  __int64 v4; // rax
  char v5; // al
  _QWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v7; // [rsp+40h] [rbp-10h] BYREF
  char v8; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF

  v6[0] = 4587588LL;
  v6[1] = L"ext-ms-win-session-wtsapi32-l1-1-0";
  v8 = 0;
  v7 = 0LL;
  v9 = 0;
  v2 = sub_1408619F4(&v9);
  if ( v2 >= 0 )
  {
    if ( v9 <= 1 )
    {
      v4 = sub_1406D972C();
      v2 = sub_1402516A0(v4, (unsigned __int16 *)v6, 0LL, &v8, (__int64)&v7);
      if ( v2 >= 0 )
      {
        v5 = v8;
        if ( v8 && !(_WORD)v7 )
          v5 = 0;
        *a1 = v5;
      }
    }
    else
    {
      *a1 = 1;
    }
  }
  return (unsigned int)v2;
}
