/*
 * XREFs of sub_140A61798 @ 0x140A61798
 * Callers:
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B9214 @ 0x1403B9214 (sub_1403B9214.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A61798(char a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp-40h]
  __int128 v9; // [rsp+48h] [rbp-28h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h]

  v8 = 0x8000000000000000uLL;
  LOBYTE(v8) = a1;
  v4 = *(_DWORD *)(a3 + 20);
  v9 = 0LL;
  v10 = 0LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        LODWORD(v9) = 2;
    }
    else
    {
      LODWORD(v9) = 4;
    }
  }
  else
  {
    LODWORD(v10) = *(_DWORD *)(a3 + 48);
  }
  DWORD2(v9) = 1;
  DWORD1(v9) = *(_DWORD *)(a3 + 8) == 0;
  result = sub_14042A5E0(v8, &v9);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a3 + 12) &= ~0x10u;
  }
  else
  {
    *(_DWORD *)(a3 + 32) = 0;
    *(_QWORD *)(a3 + 40) = 0LL;
    *(_DWORD *)(a3 + 24) = 8;
    *(_DWORD *)(a3 + 36) = 0;
  }
  return result;
}
