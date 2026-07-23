/*
 * XREFs of sub_140A13764 @ 0x140A13764
 * Callers:
 *     sub_140843CD4 @ 0x140843CD4 (sub_140843CD4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 *     sub_140A136D8 @ 0x140A136D8 (sub_140A136D8.c)
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 */

__int64 __fastcall sub_140A13764(__int64 a1, __int128 *a2, __int64 a3, PVOID ***a4, unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  PVOID **v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm0
  int v17; // [rsp+30h] [rbp-268h] BYREF
  int v18; // [rsp+34h] [rbp-264h] BYREF
  __int128 v19; // [rsp+38h] [rbp-260h]
  WCHAR v20[264]; // [rsp+50h] [rbp-248h] BYREF

  v18 = 0;
  v5 = 0;
  v17 = 0;
  v19 = 0LL;
  v9 = *a5 >> 28;
  if ( (*a5 & 0xF0000000) == 0 )
    v9 = *a5;
  if ( v9 >= 0x10
    || (sub_140A136D8(a1, (__int64)a2, v9),
        (unsigned int)sub_140A139FC(a1, (_DWORD)a2, (unsigned int)&v18, (unsigned int)&v17, (__int64)v20) - 1 > 0x102) )
  {
    v12 = 1LL;
    goto LABEL_18;
  }
  if ( *(_WORD *)(a1 + 576) != 0x7FFF && (*(_DWORD *)(a1 + 544) & v17) == 0 )
  {
    v12 = 3LL;
LABEL_18:
    sub_1406E0C3C(v12, (__int64)"SdbpOpenLocalDatabaseEx");
    return v5;
  }
  v13 = sub_140A108BC(v20, v10, v11);
  if ( v13 )
  {
    v14 = 32LL * v9;
    *(_QWORD *)(v14 + a1 + 48) = v13;
    *(_DWORD *)(v14 + a1 + 56) = 2;
    *(_DWORD *)(a1 + 28) |= 1 << v9;
    if ( a2 )
    {
      v15 = *a2;
      *(_DWORD *)(v14 + a1 + 56) |= 1u;
      *(_OWORD *)(v14 + a1 + 32) = v15;
    }
    else
    {
      *(_OWORD *)(v14 + a1 + 32) = 0LL;
    }
    v5 = 1;
    if ( v9 == 1 )
      *(_QWORD *)(a1 + 16) = v13;
    *a5 = v9 << 28;
    if ( a4 )
      *a4 = v13;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpOpenLocalDatabaseEx");
  }
  return v5;
}
