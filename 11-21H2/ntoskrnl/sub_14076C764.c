/*
 * XREFs of sub_14076C764 @ 0x14076C764
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     sub_14076C91C @ 0x14076C91C (sub_14076C91C.c)
 *     sub_14076CE48 @ 0x14076CE48 (sub_14076CE48.c)
 *     sub_14076DAF0 @ 0x14076DAF0 (sub_14076DAF0.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_1409496C0 @ 0x1409496C0 (sub_1409496C0.c)
 *     sub_140A26854 @ 0x140A26854 (sub_140A26854.c)
 */

__int64 __fastcall sub_14076C764(__int64 a1, int a2, const wchar_t *a3)
{
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  _BYTE v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[80]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t v16[40]; // [rsp+100h] [rbp+0h] BYREF

  v10[0] = 0;
  P[0] = 0LL;
  v12 = 0;
  v11 = 0;
  v6 = sub_140779DC4(P);
  if ( v6 >= 0 )
  {
    v11 = 78;
    v7 = sub_14077CD90(qword_140D00AC0, a1, a2, 37, (__int64)&v12, (__int64)Str2, (__int64)&v11, 0);
    v6 = v7;
    if ( v7 < 0 )
    {
      if ( v7 != -1073741275 )
        goto LABEL_12;
    }
    else if ( wcsicmp(a3, Str2) )
    {
      v6 = sub_14076CE48(*(_QWORD *)&qword_140D00AC0, a1, Str2, v15);
      if ( v6 < 0 )
        goto LABEL_12;
      v6 = sub_140A26854(*(_QWORD *)&qword_140D00AC0, v15, Str2, a1);
      if ( v6 < 0 )
        goto LABEL_12;
      sub_1409496C0(a1, v15);
    }
    v6 = sub_14076CE48(*(_QWORD *)&qword_140D00AC0, a1, a3, v16);
    if ( v6 >= 0 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
      v6 = sub_14076FE20(qword_140D00AC0, a1, a2, 37, 1, (__int64)a3, 2 * (int)v8 + 2, 0);
      if ( v6 >= 0 )
      {
        if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
        {
          v6 = sub_14076C91C(qword_140D00AC0, (unsigned int)v16, (__int64)v10);
          if ( v6 >= 0 && !v10[0] )
            sub_14076DAF0(v16);
        }
      }
    }
  }
LABEL_12:
  if ( P[0] )
    sub_140779A50(P[0]);
  return (unsigned int)v6;
}
