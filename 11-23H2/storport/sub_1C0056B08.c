/*
 * XREFs of sub_1C0056B08 @ 0x1C0056B08
 * Callers:
 *     sub_1C005961C @ 0x1C005961C (sub_1C005961C.c)
 * Callees:
 *     sub_1C0022F08 @ 0x1C0022F08 (sub_1C0022F08.c)
 */

__int64 __fastcall sub_1C0056B08(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  _WORD *v5; // rcx
  _DWORD *v6; // rcx
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = a4;
  *(_DWORD *)a1 = 1130980673;
  *(_DWORD *)(a1 + 12) = 4;
  result = 0LL;
  *(_DWORD *)(a1 + 4) = 1297302623;
  *(_DWORD *)(a1 + 8) = 64;
  *(_DWORD *)(a1 + 16) = 1048578;
  *(_OWORD *)(a1 + 20) = xmmword_1C008A510;
  *(_DWORD *)(a1 + 36) = 0x40000;
  *(_DWORD *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 44) = 0x40000;
  *(_DWORD *)(a1 + 48) = a3;
  v5 = (_WORD *)(a1 + 52);
  *v5 = 4;
  if ( a3 == 3 )
  {
    v5[1] = 8;
    v6 = v5 + 2;
    *v6 = 262146;
    return sub_1C0022F08(v6 + 1, 4uLL, &v7, 4uLL);
  }
  else
  {
    v5[1] = 0;
  }
  return result;
}
