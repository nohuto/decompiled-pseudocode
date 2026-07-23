/*
 * XREFs of sub_14050EF38 @ 0x14050EF38
 * Callers:
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050EF38(char a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int128 *v5; // rdi
  int v7; // eax
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // [rsp+30h] [rbp-40h]
  _QWORD v12[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  __int128 v14; // [rsp+58h] [rbp-18h]

  v5 = &v13;
  v12[0] = 2LL;
  v11 = 0x8000000000000000uLL;
  v12[1] = *(_QWORD *)(a3 + 40);
  v7 = *(_DWORD *)(a3 + 48);
  *a5 = 0;
  LOBYTE(v11) = a1;
  if ( *(_DWORD *)(a3 + 8) )
    v5 = 0LL;
  v14 = 0LL;
  LODWORD(v14) = v7;
  v13 = 0LL;
  result = sub_14042A5E0(v11, v12);
  if ( (int)result >= 0 && v5 )
  {
    v9 = DWORD2(v13);
    v10 = HIDWORD(v13);
    if ( *((_QWORD *)&v13 + 1) != *(_QWORD *)(a3 + 32) )
    {
      *a5 = 1;
      *(_DWORD *)(a3 + 32) = v9;
      *(_DWORD *)(a3 + 36) = v10;
    }
  }
  return result;
}
