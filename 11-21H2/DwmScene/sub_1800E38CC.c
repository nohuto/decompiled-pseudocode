/*
 * XREFs of sub_1800E38CC @ 0x1800E38CC
 * Callers:
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800E519C @ 0x1800E519C (sub_1800E519C.c)
 */

__int64 __fastcall sub_1800E38CC(__int64 a1, _DWORD *a2, int a3)
{
  int v6; // edx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // eax
  int v13; // eax
  _DWORD v15[4]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 4) = a2[1];
  *(_DWORD *)(a1 + 16) = sub_1800E519C((unsigned int)a2[4], (unsigned int)a2[5]);
  if ( (a2[5] & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 40) |= 4u;
    *(_DWORD *)(a1 + 12) = 6;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 1;
  }
  v6 = 0;
  if ( (a2[5] & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    v8 = 0;
    if ( *(_DWORD *)a1 >= v7 )
      v7 = *(_DWORD *)a1;
    while ( v7 > 1 )
    {
      v7 >>= 1;
      ++v8;
    }
    v9 = v8 + 1;
    v10 = 15;
    if ( v9 < 0xF )
      v10 = v9;
    *(_DWORD *)(a1 + 40) |= 1u;
    *(_DWORD *)(a1 + 32) |= 0x28u;
    *(_DWORD *)(a1 + 8) = v10;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a3;
  }
  v11 = v15;
  do
    *v11++ = v6++;
  while ( v6 < 4 );
  *(_DWORD *)(a1 + 28) = v15[a2[6]];
  v12 = a2[6];
  if ( v12 == 2 || v12 == 3 )
  {
    *(_DWORD *)(a1 + 36) |= 0x10000u;
    if ( a2[6] == 3 )
      *(_DWORD *)(a1 + 36) |= 0x20000u;
  }
  v13 = a2[5];
  if ( (v13 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 8u;
    v13 = a2[5];
  }
  if ( (v13 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x20u;
    v13 = a2[5];
  }
  if ( (v13 & 4) != 0 )
    *(_DWORD *)(a1 + 32) |= 0x40u;
  return a1;
}
