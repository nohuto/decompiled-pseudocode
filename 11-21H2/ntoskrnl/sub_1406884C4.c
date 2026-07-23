/*
 * XREFs of sub_1406884C4 @ 0x1406884C4
 * Callers:
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FADC8 @ 0x1403FADC8 (sub_1403FADC8.c)
 *     sub_1403FAF40 @ 0x1403FAF40 (sub_1403FAF40.c)
 *     sub_1403FB0EC @ 0x1403FB0EC (sub_1403FB0EC.c)
 *     sub_1403FB108 @ 0x1403FB108 (sub_1403FB108.c)
 */

__int64 __fastcall sub_1406884C4(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rdi
  size_t v7; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  _OWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v6 = *(_QWORD *)(a1 + 8) + 512LL;
  if ( !a3 )
    v6 = *(_QWORD *)(a1 + 8);
  sub_1403FB0EC((__int64)v11, (__int128 *)&unk_140CE23E0);
  v7 = (unsigned int)(*(_DWORD *)(a1 + 16) - 552);
  if ( !a3 )
    v7 = (unsigned int)(*(_DWORD *)(a1 + 16) - 40);
  sub_1403FAF40((__int64)v11, (char *)(v6 + 40), v7);
  if ( a2 > 1 )
  {
    v9 = a1 + 32;
    v10 = a2 - 1;
    do
    {
      sub_1403FAF40((__int64)v11, *(char **)v9, *(unsigned int *)(v9 + 8));
      v9 += 24LL;
      --v10;
    }
    while ( v10 );
  }
  sub_1403FB108((__int64)v11, (_DWORD *)(v6 + 24));
  return sub_1403FADC8((int *)&unk_140CE23E0, (unsigned __int16 *)v6, 0x20uLL, (_DWORD *)(v6 + 32));
}
