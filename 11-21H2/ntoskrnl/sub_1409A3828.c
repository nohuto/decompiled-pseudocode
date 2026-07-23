/*
 * XREFs of sub_1409A3828 @ 0x1409A3828
 * Callers:
 *     sub_1409A4DA8 @ 0x1409A4DA8 (sub_1409A4DA8.c)
 * Callees:
 *     sub_1409AABA8 @ 0x1409AABA8 (sub_1409AABA8.c)
 */

_UNKNOWN **__fastcall sub_1409A3828(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rdi
  __int64 *v4; // rbx
  unsigned __int64 v5; // kr00_8
  _DWORD v6[8]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-40h]
  unsigned __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = (__int64 *)(a1 + 40);
  v4 = *(__int64 **)(a1 + 40);
  if ( v4 != (__int64 *)(a1 + 40) )
  {
    do
    {
      v16 = 0;
      v6[0] = *(_DWORD *)a1;
      v6[1] = *((_DWORD *)v4 + 7);
      v6[2] = *((_DWORD *)v4 + 9);
      v6[3] = *((_DWORD *)v4 + 10);
      v6[4] = *((_DWORD *)v4 + 11);
      v6[5] = *((_DWORD *)v4 + 12);
      v6[6] = *((_DWORD *)v4 + 13);
      v6[7] = *((_DWORD *)v4 + 14);
      v7 = v4[8] / 0x989680uLL;
      v5 = v4[9];
      v9 = v4[10];
      v10 = v4[32];
      v11 = *((_DWORD *)v4 + 66);
      v12 = *((_DWORD *)v4 + 67);
      v13 = *((_DWORD *)v4 + 68);
      v14 = *((_DWORD *)v4 + 69);
      v15 = *((_DWORD *)v4 + 70);
      v8 = v5 / 0x989680;
      result = (_UNKNOWN **)sub_1409AABA8(v6);
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v2 );
  }
  return result;
}
