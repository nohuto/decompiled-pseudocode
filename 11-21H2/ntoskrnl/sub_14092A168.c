/*
 * XREFs of sub_14092A168 @ 0x14092A168
 * Callers:
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 * Callees:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     LpcSendWaitReceivePort @ 0x1406CE2B0 (LpcSendWaitReceivePort.c)
 *     sub_14092AC20 @ 0x14092AC20 (sub_14092AC20.c)
 */

__int64 __fastcall sub_14092A168(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  ULONG_PTR v7; // rbp
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v20; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v21[688]; // [rsp+40h] [rbp-2D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v7 = *((_QWORD *)CurrentThread + 23);
  if ( a3 )
    v4 = sub_14092AC20(*((_QWORD *)CurrentThread + 23));
  *(_DWORD *)(a1 + 44) = 259;
  v20 = 688LL;
  v8 = LpcSendWaitReceivePort(a2, 0x20000, a1, (__int64)v21, (__int64)&v20, 0LL);
  v9 = v8;
  if ( v8 == 192 )
  {
    v9 = -1073741749;
  }
  else if ( v8 >= 0 )
  {
    v10 = 2LL;
    v11 = v21;
    do
    {
      v12 = v11[1];
      *(_OWORD *)a1 = *v11;
      v13 = v11[2];
      *(_OWORD *)(a1 + 16) = v12;
      v14 = v11[3];
      *(_OWORD *)(a1 + 32) = v13;
      v15 = v11[4];
      *(_OWORD *)(a1 + 48) = v14;
      v16 = v11[5];
      *(_OWORD *)(a1 + 64) = v15;
      v17 = v11[6];
      *(_OWORD *)(a1 + 80) = v16;
      v18 = v11[7];
      v11 += 8;
      *(_OWORD *)(a1 + 96) = v17;
      a1 += 128LL;
      *(_OWORD *)(a1 - 16) = v18;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)a1 = *v11;
  }
  if ( v4 )
  {
    sub_140257280(v7, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return v9;
}
