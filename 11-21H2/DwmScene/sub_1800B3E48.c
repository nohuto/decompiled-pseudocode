/*
 * XREFs of sub_1800B3E48 @ 0x1800B3E48
 * Callers:
 *     sub_1800B4A98 @ 0x1800B4A98 (sub_1800B4A98.c)
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 *     sub_1800B52F0 @ 0x1800B52F0 (sub_1800B52F0.c)
 *     sub_1800B53C0 @ 0x1800B53C0 (sub_1800B53C0.c)
 *     sub_1800B55A0 @ 0x1800B55A0 (sub_1800B55A0.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 *     sub_1800B6020 @ 0x1800B6020 (sub_1800B6020.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B44A4 @ 0x1800B44A4 (sub_1800B44A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B3E48(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax
  __int128 v17; // xmm0
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v20; // [rsp+40h] [rbp-18h] BYREF

  sub_1800B44A4();
  v4 = *a2;
  v5 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(volatile signed __int32 **)(a1 + 8);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = a2[2];
  v8 = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  v18[0] = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = v7;
  v18[1] = v9;
  *(_QWORD *)(a1 + 24) = v8;
  sub_180010910((__int64)v18);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 36) = *((_DWORD *)a2 + 9);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 11);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 13);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 15);
  *(_QWORD *)(a1 + 136) = a2[17];
  v10 = a2[18];
  v11 = a2[19];
  a2[18] = 0LL;
  a2[19] = 0LL;
  v19[0] = *(_QWORD *)(a1 + 144);
  v12 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 144) = v10;
  v19[1] = v12;
  *(_QWORD *)(a1 + 152) = v11;
  sub_180010910((__int64)v19);
  v13 = a2[20];
  v14 = a2[21];
  a2[20] = 0LL;
  a2[21] = 0LL;
  *(_QWORD *)&v20 = *(_QWORD *)(a1 + 160);
  v15 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 160) = v13;
  *((_QWORD *)&v20 + 1) = v15;
  *(_QWORD *)(a1 + 168) = v14;
  sub_180010910((__int64)&v20);
  *(_QWORD *)&v20 = 0LL;
  result = a1;
  BYTE8(v20) = 1;
  v17 = v20;
  *((_DWORD *)a2 + 9) = 4;
  *(_OWORD *)(a2 + 5) = v17;
  a2[7] = 0LL;
  a2[8] = 0LL;
  a2[9] = 0LL;
  a2[10] = 0LL;
  a2[11] = 0LL;
  a2[12] = 0LL;
  a2[13] = 0LL;
  a2[14] = 0LL;
  a2[15] = 0LL;
  a2[16] = 0LL;
  a2[17] = 0LL;
  return result;
}
