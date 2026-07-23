/*
 * XREFs of sub_140A22790 @ 0x140A22790
 * Callers:
 *     sub_140A22520 @ 0x140A22520 (sub_140A22520.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _snwscanf_s @ 0x1403E6720 (_snwscanf_s.c)
 *     sub_1406BAF60 @ 0x1406BAF60 (sub_1406BAF60.c)
 *     sub_1406BB218 @ 0x1406BB218 (sub_1406BB218.c)
 *     sub_1406BB4A0 @ 0x1406BB4A0 (sub_1406BB4A0.c)
 *     sub_140A218B8 @ 0x140A218B8 (sub_140A218B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_140A22790(int a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // bl
  bool result; // al
  __int64 v6; // r8
  int v7; // r9d
  wchar_t *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  int v14; // [rsp+30h] [rbp-9h] BYREF
  int v15; // [rsp+34h] [rbp-5h] BYREF
  int v16; // [rsp+38h] [rbp-1h] BYREF
  wchar_t *Src; // [rsp+40h] [rbp+7h] BYREF
  wchar_t *v18; // [rsp+48h] [rbp+Fh] BYREF
  int v19; // [rsp+50h] [rbp+17h] BYREF
  __int64 v20; // [rsp+54h] [rbp+1Bh]
  __int128 v21; // [rsp+60h] [rbp+27h] BYREF
  __int128 v22; // [rsp+70h] [rbp+37h]
  __int64 v23; // [rsp+80h] [rbp+47h]

  v4 = 0;
  Src = 0LL;
  v18 = 0LL;
  v15 = 0;
  v14 = 0;
  HIDWORD(v20) = 0;
  v16 = 0;
  result = sub_1406BAF60(a1, a2, a3, a4);
  if ( result )
  {
    if ( (int)sub_1406BB218((int)L"FirmwareBootDevice", &Src, v6, v7) >= 0 )
    {
      v8 = Src;
      v9 = -1LL;
      do
        ++v9;
      while ( Src[v9] );
      if ( snwscanf_s(Src, v9 + 1, L"multi(%d)disk(%d)rdisk(%d)", &v14, &v15, &v16) == 3
        && !v14
        && !v15
        && !v16
        && sub_1406BB4A0(L"\\ArcName\\multi(0)disk(0)rdisk(0)", &v18) >= 0 )
      {
        ExFreePoolWithTag(v8, 0);
        v23 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        v19 = 0;
        v22 = 0LL;
        v12 = sub_140A218B8(v18, v10, &v19, v11, &v21, 0x28u);
        if ( v12 >= 0 )
          v13 = HIDWORD(v22) == 7;
        else
          v13 = v12 == -1073741766;
        if ( v13 )
          return 1;
      }
    }
    return v4;
  }
  return result;
}
