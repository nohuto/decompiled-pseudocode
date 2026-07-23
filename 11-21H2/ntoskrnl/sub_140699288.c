/*
 * XREFs of sub_140699288 @ 0x140699288
 * Callers:
 *     sub_1406986FC @ 0x1406986FC (sub_1406986FC.c)
 *     sub_1406988E0 @ 0x1406988E0 (sub_1406988E0.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 */

__int64 __fastcall sub_140699288(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5, unsigned int *a6)
{
  _WORD *v6; // r15
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // eax
  unsigned int v13; // eax
  __int64 v15; // rdi
  __int64 v16; // [rsp+90h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-78h]
  __int64 v18; // [rsp+A0h] [rbp-70h]
  _WORD v19[48]; // [rsp+B0h] [rbp-60h] BYREF
  WCHAR v20[88]; // [rsp+110h] [rbp+0h] BYREF

  v6 = a4;
  v16 = a2;
  v18 = a1;
  *a6 = 0;
  Handle = 0LL;
  if ( a5 )
    *a4 = 0;
  v7 = sub_1402DFBC4(
         v19,
         0x30uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
         *(_DWORD *)a3,
         *(unsigned __int16 *)(a3 + 4),
         *(unsigned __int16 *)(a3 + 6),
         *(unsigned __int8 *)(a3 + 8),
         *(unsigned __int8 *)(a3 + 9),
         *(unsigned __int8 *)(a3 + 10),
         *(unsigned __int8 *)(a3 + 11),
         *(unsigned __int8 *)(a3 + 12),
         *(unsigned __int8 *)(a3 + 13),
         *(unsigned __int8 *)(a3 + 14),
         *(unsigned __int8 *)(a3 + 15),
         *(_DWORD *)(a3 + 16));
  if ( v7 >= 0 )
  {
    v8 = sub_14077EF20(v18, v16, (unsigned int)v19, 1, 0);
    v7 = v8;
    if ( v8 == -1073741772 )
    {
      return 0;
    }
    else if ( v8 >= 0 )
    {
      v10 = a5;
      v11 = 0;
      while ( 1 )
      {
        do
        {
          LODWORD(v16) = 85;
          v12 = sub_14069946C(v9, Handle, v11++, v20, &v16, 0LL, 0LL, 0LL);
        }
        while ( v12 == -1073741789 );
        if ( v12 )
          break;
        if ( v20[0] )
        {
          v15 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v15 < v10 )
          {
            sub_1402E0340(v6, v10, v20, 0LL, 0LL, 2304);
            v10 -= v15;
            v6 += v15;
          }
          *a6 += v15;
        }
      }
      ZwClose(Handle);
      v13 = *a6 + 1;
      *a6 = v13;
      if ( v6 && a5 >= v13 )
        *v6 = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
