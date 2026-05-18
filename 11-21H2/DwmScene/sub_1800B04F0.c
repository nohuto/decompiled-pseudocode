/*
 * XREFs of sub_1800B04F0 @ 0x1800B04F0
 * Callers:
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B04F0(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 result; // rax
  __int128 v12; // xmm0
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)(a1 + 1088) = 1;
  v2 = (__int64 *)(a1 + 496);
  v3 = 15LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = *v2;
    }
    v13[0] = *(v2 - 61);
    *(v2 - 61) = *(v2 - 1);
    v5 = *(v2 - 60);
    *(v2 - 60) = v4;
    v13[1] = v5;
    sub_180010910((__int64)v13);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v6 = *(_DWORD *)(a1 + 904);
  v7 = *(_OWORD *)(a1 + 864);
  *(_OWORD *)(a1 + 728) = *(_OWORD *)(a1 + 848);
  v8 = *(_OWORD *)(a1 + 880);
  *(_OWORD *)(a1 + 744) = v7;
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 896);
  *(_OWORD *)(a1 + 760) = v8;
  v9 = *(_OWORD *)(a1 + 1028);
  *(_QWORD *)(a1 + 776) = v7;
  v10 = *(_OWORD *)(a1 + 1044);
  *(_DWORD *)(a1 + 784) = v6;
  result = *(unsigned int *)(a1 + 1084);
  *(_OWORD *)(a1 + 908) = v9;
  v12 = *(_OWORD *)(a1 + 1060);
  *(_OWORD *)(a1 + 924) = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 1076);
  *(_OWORD *)(a1 + 940) = v12;
  *(_QWORD *)(a1 + 956) = v10;
  *(_DWORD *)(a1 + 964) = result;
  return result;
}
