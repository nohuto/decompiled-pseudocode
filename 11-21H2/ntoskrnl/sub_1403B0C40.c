/*
 * XREFs of sub_1403B0C40 @ 0x1403B0C40
 * Callers:
 *     sub_1403B0A04 @ 0x1403B0A04 (sub_1403B0A04.c)
 * Callees:
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_1403B0D74 @ 0x1403B0D74 (sub_1403B0D74.c)
 */

__int64 __fastcall sub_1403B0C40(__int64 a1, int a2)
{
  bool v4; // zf
  int v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+24h] [rbp-3Ch]
  int v8; // [rsp+28h] [rbp-38h]
  int v9; // [rsp+2Ch] [rbp-34h]
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+3Ch] [rbp-24h]
  int v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+54h] [rbp-Ch]
  unsigned int v19; // [rsp+70h] [rbp+10h] BYREF
  int v20; // [rsp+74h] [rbp+14h]

  v7 = 0;
  v13 = 0;
  v15 = 0LL;
  v16 = 0;
  v4 = *(_DWORD *)(a1 + 224) == 2;
  v19 = *(_DWORD *)(a1 + 240);
  v20 = -8;
  if ( !v4 || !sub_1402520D4(&v19) )
    return 0LL;
  v7 = 0;
  v13 = 0;
  v15 = 0LL;
  v16 = 0;
  v10 = -1;
  v17 = 54;
  v6 = 1;
  v8 = 1;
  v9 = 16;
  v11 = 1;
  v12 = 4;
  v14 = a2;
  v18 = sub_1403B0D74(a1, 54LL);
  return sub_140251FD8(a1, (__int64)&v19, (__int64)&v6);
}
