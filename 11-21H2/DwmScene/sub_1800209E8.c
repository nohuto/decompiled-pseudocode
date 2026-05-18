/*
 * XREFs of sub_1800209E8 @ 0x1800209E8
 * Callers:
 *     sub_1800209BC @ 0x1800209BC (sub_1800209BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180020DB0 @ 0x180020DB0 (sub_180020DB0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800209E8(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cbMultiByte; // esi
  CHAR *lpMultiByteStr; // rdx
  LPSTR v10[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v11; // [rsp+58h] [rbp-40h]

  v3 = a3;
  if ( a3 )
  {
    v6 = WideCharToMultiByte(0xFDE9u, 0, a2, a3, 0LL, 0, 0LL, 0LL);
    cbMultiByte = v6;
    *(_QWORD *)&v11 = 0LL;
    *((_QWORD *)&v11 + 1) = 15LL;
    LOBYTE(v10[0]) = 0;
    if ( v6 <= 0 )
      __fastfail(7u);
    sub_180020DB0(v10, v6);
    lpMultiByteStr = (CHAR *)v10;
    if ( *((_QWORD *)&v11 + 1) >= 0x10uLL )
      lpMultiByteStr = v10[0];
    WideCharToMultiByte(0xFDE9u, 0, a2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    *(_OWORD *)a1 = *(_OWORD *)v10;
    *(_OWORD *)(a1 + 16) = v11;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  return a1;
}
