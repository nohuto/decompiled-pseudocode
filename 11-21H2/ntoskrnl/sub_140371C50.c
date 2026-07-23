/*
 * XREFs of sub_140371C50 @ 0x140371C50
 * Callers:
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 * Callees:
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140371E18 @ 0x140371E18 (sub_140371E18.c)
 *     sub_140372458 @ 0x140372458 (sub_140372458.c)
 */

__int64 __fastcall sub_140371C50(__int128 *a1)
{
  __int128 v1; // xmm0
  unsigned int v2; // ebx
  char *v4; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v11[3]; // [rsp+40h] [rbp-20h] BYREF
  int v12; // [rsp+4Ch] [rbp-14h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v2 = 0;
  v12 = 0;
  v9 = v1;
  if ( BYTE3(v1) )
    v11[0] = BYTE3(v1) - 1;
  else
    v11[0] = -1;
  v11[1] = BYTE1(v1);
  v11[2] = BYTE2(v1);
  if ( (v1 & 8) != 0 )
    v12 = 1;
  v13 = *((_QWORD *)&v1 + 1);
  v10 = v1;
  v4 = (char *)sub_140362B58(&v10);
  if ( v5 )
  {
    v6 = 0x200000LL;
    if ( BYTE1(v1) == 4 )
      v6 = 0x40000000LL;
    v7 = sub_140371E18(v4 + 88, v11, v6);
    if ( v7 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v9) = v7 + 1;
      *a1 = v9;
    }
  }
  else
  {
    sub_140372458(v4 + 88, v11);
  }
  return v2;
}
