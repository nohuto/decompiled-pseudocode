/*
 * XREFs of sub_1403D72C8 @ 0x1403D72C8
 * Callers:
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 * Callees:
 *     sub_1403D735C @ 0x1403D735C (sub_1403D735C.c)
 */

__int64 __fastcall sub_1403D72C8(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  __int64 result; // rax
  unsigned int i; // ecx
  int *v6; // rdx
  int *v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v10 = 1048832;
  v2 = 21;
  v8 = 1049217;
  v11 = 1049217;
  v3 = *(_DWORD *)(a1 + 1840);
  if ( (v3 & 2) != 0 )
    v2 = 1048597;
  v9 = v2;
  if ( (v3 & 1) == 0 )
  {
    for ( i = 0; i < 2; ++i )
    {
      v6 = (int *)&v12;
      if ( !i )
        v6 = &v10;
      v7 = &v10;
      if ( !i )
        v7 = &v8;
      while ( v7 < v6 )
        *v7++ &= 0xF00FFFFF;
    }
  }
  result = sub_1403D735C((PEX_SPIN_LOCK)(a1 + 1536));
  if ( (int)result >= 0 )
  {
    result = sub_1403D735C((PEX_SPIN_LOCK)(a1 + 1424));
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
