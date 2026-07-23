/*
 * XREFs of sub_140261CF8 @ 0x140261CF8
 * Callers:
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 * Callees:
 *     sub_140262118 @ 0x140262118 (sub_140262118.c)
 *     sub_1402621B0 @ 0x1402621B0 (sub_1402621B0.c)
 *     sub_140262650 @ 0x140262650 (sub_140262650.c)
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     sub_1403D735C @ 0x1403D735C (sub_1403D735C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409D5860 @ 0x1409D5860 (sub_1409D5860.c)
 *     sub_1409D5AC0 @ 0x1409D5AC0 (sub_1409D5AC0.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140261CF8(__int64 a1, __int64 *a2)
{
  int *v2; // r15
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char v10; // cl
  char v11; // dl
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  int v14; // eax
  int v15; // edi
  SIZE_T v16; // rsi
  PVOID v17; // rax
  int v18; // eax
  __int128 v19; // xmm0
  int v20; // [rsp+20h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+40h] [rbp-40h]
  int v23; // [rsp+44h] [rbp-3Ch]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  int v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+5Ch] [rbp-24h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h]

  v2 = (int *)*a2;
  v23 = 0;
  v27 = 0;
  v29 = 0LL;
  v5 = *v2;
  if ( (unsigned __int8)*v2 >= 2u )
    return 3221225485LL;
  if ( v2[5] )
    return 3221225485LL;
  if ( (unsigned int)(v2[3] - 1) > 0x3FFFF )
    return 3221225485LL;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)*v2 == 1 && (v5 & 0x100) != 0 )
    return 3221225659LL;
  v7 = *v2;
  if ( (v5 & 0x40000) != 0 )
  {
    v8 = v7 & 0xA0000;
  }
  else
  {
    v8 = v7 & 0xA0000;
    if ( v8 )
      return 3221225485LL;
  }
  if ( v8 == 655360 || (v5 & 0x100000) != 0 && (v5 & 0x40000) == 0 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 6720) = a2[4];
  v9 = *((_DWORD *)a2 + 14);
  if ( !v9 )
    v9 = 7;
  *(_DWORD *)(a1 + 6728) = v9;
  *(_BYTE *)(a1 + 6020) = *(_BYTE *)v2;
  *(_BYTE *)(a1 + 6021) ^= (*(_BYTE *)(a1 + 6021) ^ (4 * ((unsigned int)*v2 >> 18))) & 4;
  v10 = *(_BYTE *)(a1 + 6021) ^ (*(_BYTE *)(a1 + 6021) ^ (8 * ((unsigned int)*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 6021) = v10;
  v11 = v10 ^ (v10 ^ (32 * ((unsigned int)*v2 >> 19))) & 0x20;
  *(_BYTE *)(a1 + 6021) = v11;
  *(_DWORD *)(a1 + 6208) = v2[2];
  if ( *(_BYTE *)v2 )
  {
    sub_1409D5AC0(a1 + 6216);
    *(_DWORD *)(a1 + 6212) = v2[3];
    v15 = v2[6];
    result = sub_1409D5860(a1 + 6216, *((_QWORD *)v2 + 6));
LABEL_41:
    if ( (int)result < 0 )
      return result;
    goto LABEL_24;
  }
  if ( (v11 & 4) != 0 )
  {
    memset((void *)(a1 + 6232), 0, 0x80uLL);
    *(_WORD *)(a1 + 6240) = 0;
    *(_QWORD *)(a1 + 6256) = a1 + 6248;
    *(_QWORD *)(a1 + 6248) = a1 + 6248;
    *(_DWORD *)(a1 + 6244) = 0;
    *(_BYTE *)(a1 + 6242) = 6;
    *(_WORD *)(a1 + 6264) = 0;
    *(_DWORD *)(a1 + 6268) = 0;
    *(_BYTE *)(a1 + 6266) = 6;
    *(_QWORD *)(a1 + 6280) = a1 + 6272;
    *(_QWORD *)(a1 + 6272) = a1 + 6272;
    memset((void *)(a1 + 6360), 0, 0x80uLL);
    *(_BYTE *)(a1 + 6370) = 6;
    *(_WORD *)(a1 + 6368) = 0;
    *(_DWORD *)(a1 + 6372) = 0;
    *(_QWORD *)(a1 + 6384) = a1 + 6376;
    *(_QWORD *)(a1 + 6376) = a1 + 6376;
    *(_WORD *)(a1 + 6392) = 0;
    *(_DWORD *)(a1 + 6396) = 0;
    *(_BYTE *)(a1 + 6394) = 6;
    *(_QWORD *)(a1 + 6408) = a1 + 6400;
    *(_QWORD *)(a1 + 6400) = a1 + 6400;
    memset((void *)(a1 + 6488), 0, 0x50uLL);
    *(_BYTE *)(a1 + 6498) = 6;
    *(_QWORD *)(a1 + 6512) = a1 + 6504;
    *(_QWORD *)(a1 + 6504) = a1 + 6504;
    *(_WORD *)(a1 + 6496) = 0;
    *(_DWORD *)(a1 + 6500) = 0;
    *(_QWORD *)(a1 + 6536) = a1 + 6528;
    *(_QWORD *)(a1 + 6528) = a1 + 6528;
    *(_WORD *)(a1 + 6520) = 0;
    *(_DWORD *)(a1 + 6524) = 0;
    *(_BYTE *)(a1 + 6522) = 6;
    *(_QWORD *)(a1 + 6552) = a1 + 6544;
    *(_QWORD *)(a1 + 6544) = 0LL;
    *(_QWORD *)(a1 + 6560) = 0LL;
    *(_QWORD *)(a1 + 6584) = a2[5];
    result = sub_140262118(a1 + 6232, a2[6]);
    if ( (int)result < 0 )
      return result;
    result = sub_140262118(a1 + 6360, a2[6]);
    if ( (int)result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
      *(_QWORD *)(a1 + 6344) = &unk_140D32438;
    *(_QWORD *)(a1 + 6480) = &dword_140D32450;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6C526D73u);
    *(_QWORD *)(a1 + 6224) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x50uLL);
    if ( !(unsigned int)sub_140262ED4(*(unsigned int *)(a1 + 6208), 1LL, 0LL) )
      return 3221225626LL;
    *(_BYTE *)(a1 + 6021) |= 0x10u;
  }
  v14 = v2[3];
  *(_DWORD *)(a1 + 6212) = v14;
  v15 = 0;
  v16 = (unsigned int)(8 * v14);
  v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x67526D73u);
  if ( !v17 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 6216) = v17;
  memset(v17, 0, (unsigned int)v16);
  if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
  {
    v20 = ((*(_DWORD *)(a1 + 6208) >> 8) ^ 0x100005) & 0xFFFF0 ^ 0x100005;
    result = sub_1403D735C((PEX_SPIN_LOCK)(a1 + 6608));
    goto LABEL_41;
  }
LABEL_24:
  v18 = *(_DWORD *)(a1 + 6212);
  v23 = 0;
  v27 = 0;
  v29 = 0LL;
  v19 = *(_OWORD *)v2;
  v22 = v15;
  v24 = a1;
  v21 = v19;
  HIDWORD(v21) = v18;
  v28 = a2[3];
  if ( *(_BYTE *)v2 )
    v29 = *((_QWORD *)v2 + 8);
  v25 = a2[1];
  v26 = *((_DWORD *)a2 + 4);
  LODWORD(v21) = v21 & 0xFFFFF7FF | (v26 == 0 ? 0x800 : 0);
  result = sub_140262650(a1, &v21);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 4) == 0
      || (result = sub_1402621B0(a1, a2[6], sub_140237720, a1 + 6488, v20), (int)result >= 0) )
    {
      result = sub_1402621B0(a1, a2[6], sub_140238310, a1 + 6200, v20);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
