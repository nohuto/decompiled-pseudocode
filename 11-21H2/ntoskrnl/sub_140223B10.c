/*
 * XREFs of sub_140223B10 @ 0x140223B10
 * Callers:
 *     sub_140421050 @ 0x140421050 (sub_140421050.c)
 *     sub_140421230 @ 0x140421230 (sub_140421230.c)
 *     sub_140421380 @ 0x140421380 (sub_140421380.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140223B10(__int64 a1, int a2, __int64 a3)
{
  int v4; // r9d
  __int16 v5; // si
  __int64 result; // rax
  unsigned int v7; // ebx
  bool i; // zf
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v16[3]; // [rsp+48h] [rbp-30h] BYREF
  int v17; // [rsp+60h] [rbp-18h]
  int v18; // [rsp+64h] [rbp-14h]

  v15 = 0;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v13 = *(_QWORD *)(a1 + 32);
      v4 = 16;
      v5 = 3890;
      v15 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v5 = 3907;
      v13 = *(_QWORD *)(a1 + 24);
      v4 = 12;
    }
  }
  else
  {
    v5 = 3935;
    v13 = *(_QWORD *)(a1 + 24);
    v4 = 12;
  }
  v14 = a2;
  v16[2] = &v13;
  result = qword_140D05008;
  v17 = v4;
  v18 = 0;
  v7 = *(_DWORD *)(qword_140D05008 + 4248);
  for ( i = !_BitScanForward(&v9, v7); !i; i = !_BitScanForward(&v9, v7) )
  {
    v7 &= v7 - 1;
    v10 = v9;
    result = 32LL * v9;
    v11 = result + qword_140D05008 + 4284;
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 4) & 0x4000) != 0 )
      {
        v12 = *(unsigned __int8 *)(qword_140D05008 + 2 * v10 + 4233) - 1LL;
        v16[1] = 8LL;
        v16[0] = a3 + 8 * v12;
        result = sub_1402AB170(
                   (unsigned int)v16,
                   qword_140D05008,
                   *(unsigned __int8 *)(qword_140D05008 + 2 * v10 + 4232),
                   2,
                   v5,
                   4196866);
      }
    }
  }
  return result;
}
