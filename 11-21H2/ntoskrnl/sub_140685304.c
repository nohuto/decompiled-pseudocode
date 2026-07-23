/*
 * XREFs of sub_140685304 @ 0x140685304
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 * Callees:
 *     sub_140209F40 @ 0x140209F40 (sub_140209F40.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F5120 @ 0x1402F5120 (sub_1402F5120.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406855F4 @ 0x1406855F4 (sub_1406855F4.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 */

__int64 __fastcall sub_140685304(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _OWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  char *v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21[86]; // [rsp+40h] [rbp-C0h] BYREF

  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v21, 0, sizeof(v21));
  sub_1406855F4(Object, CurrentThread, &v20);
  if ( Object != v20 )
    ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
  sub_1406FF880(Object, (__int64)v21, 1);
  v5 = v21[14];
  *(_QWORD *)a2 = v21[14] + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v5;
  v6 = v21[13];
  *(_QWORD *)(a2 + 8) = v21[13] + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v6;
  *(_DWORD *)(a2 + 32) = LODWORD(v21[31]) + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v21[18] + *((_QWORD *)Object + 73);
  *(_QWORD *)(a2 + 56) = v21[19] + *((_QWORD *)Object + 74);
  *(_QWORD *)(a2 + 64) = v21[20] + *((_QWORD *)Object + 75);
  *(_QWORD *)(a2 + 72) = v21[21] + *((_QWORD *)Object + 76);
  *(_QWORD *)(a2 + 80) = v21[22] + *((_QWORD *)Object + 77);
  *(_QWORD *)(a2 + 88) = v21[23] + *((_QWORD *)Object + 78);
  *(_QWORD *)(a2 + 96) = v21[26] + *((_QWORD *)Object + 79);
  *(_QWORD *)(a2 + 104) = v21[27] + *((_QWORD *)Object + 80);
  *(_QWORD *)(a2 + 112) = v21[28] + *((_QWORD *)Object + 81);
  *(_QWORD *)(a2 + 120) = v21[29] + *((_QWORD *)Object + 82);
  *(_QWORD *)(a2 + 128) = v21[30] + *((_QWORD *)Object + 83);
  *(_QWORD *)(a2 + 136) = v21[17] + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v21[16] + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = v21[15] + *((_QWORD *)Object + 152);
  *(_QWORD *)(a2 + 432) = v21[24] + *((_QWORD *)Object + 222);
  *(_QWORD *)(a2 + 440) = v21[25] + *((_QWORD *)Object + 223);
  v7 = *((_QWORD *)Object + 150);
  if ( v7 )
    *(_QWORD *)(a2 + 152) += sub_140209F40(v7 + 128);
  v8 = *((_QWORD *)Object + 190);
  v9 = (_OWORD *)(a2 + 160);
  if ( v8 )
  {
    sub_1402F5120((__int64)&v21[32], v8);
    v10 = 2LL;
    v11 = &v21[32];
    do
    {
      v12 = *((_OWORD *)v11 + 1);
      *v9 = *(_OWORD *)v11;
      v13 = *((_OWORD *)v11 + 2);
      v9[1] = v12;
      v14 = *((_OWORD *)v11 + 3);
      v9[2] = v13;
      v15 = *((_OWORD *)v11 + 4);
      v9[3] = v14;
      v16 = *((_OWORD *)v11 + 5);
      v9[4] = v15;
      v17 = *((_OWORD *)v11 + 6);
      v9[5] = v16;
      v18 = *((_OWORD *)v11 + 7);
      v11 += 16;
      v9[6] = v17;
      v9 += 8;
      *(v9 - 1) = v18;
      --v10;
    }
    while ( v10 );
    *v9 = *(_OWORD *)v11;
  }
  else
  {
    memset(v9, 0, 0x110uLL);
  }
  if ( Object != v20 )
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return sub_1406FFE90(v20, CurrentThread);
}
