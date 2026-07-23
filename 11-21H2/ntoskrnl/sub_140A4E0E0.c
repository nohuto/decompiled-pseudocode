/*
 * XREFs of sub_140A4E0E0 @ 0x140A4E0E0
 * Callers:
 *     sub_140429620 @ 0x140429620 (sub_140429620.c)
 * Callees:
 *     sub_14038C498 @ 0x14038C498 (sub_14038C498.c)
 *     HalInitializeOnResume @ 0x14038D330 (HalInitializeOnResume.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405430DC @ 0x1405430DC (sub_1405430DC.c)
 *     sub_1405437A4 @ 0x1405437A4 (sub_1405437A4.c)
 *     sub_1405478E0 @ 0x1405478E0 (sub_1405478E0.c)
 *     sub_140549B18 @ 0x140549B18 (sub_140549B18.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 */

char sub_140A4E0E0()
{
  ULONG_PTR v0; // rbp
  char v1; // bl
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  _OWORD v19[20]; // [rsp+20h] [rbp-158h] BYREF

  memset(v19, 0, 0x138uLL);
  v0 = qword_140C22800;
  v1 = 0;
  v2 = *(_QWORD *)(qword_140C22800 + 200);
  if ( *(_DWORD *)v2 )
  {
    sub_140A4B974(25);
    sub_14042A5E0(0LL, v3);
    dword_140C23720 = 0;
    v4 = __rdtsc();
    byte_140C223A8 = 1;
    sub_14042A5E0(5LL, (unsigned __int64)HIDWORD(v4) << 32);
    sub_14042A5E0(1LL, v5);
    if ( byte_140D0688B )
    {
      sub_1405437A4(1);
      sub_14042A5E0(v18, v17);
    }
    sub_14042A5E0(5LL, v6);
    if ( byte_140D0688B )
    {
      sub_1405430DC(1);
      if ( (dword_140D0688C & 2) != 0 )
      {
        sub_1405478E0();
        sub_140549B18();
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !byte_140C09804 || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      sub_140A70470(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (dword_140C22278 & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    if ( *(_QWORD *)(v2 + 1032) )
    {
      v8 = *(_QWORD *)(v0 + 264);
      v9 = *(_OWORD *)(v2 + 1032);
      DWORD2(v19[0]) = 80;
      v10 = *(_OWORD *)(v2 + 1048);
      v11 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)&v19[2] = 0LL;
      *((_QWORD *)&v19[2] + 1) = 0x4000LL;
      v19[3] = v9;
      v19[4] = v10;
      sub_14038C498(v11, v7, (__int64)v19, 1);
      memset(*(void **)(*(_QWORD *)(v0 + 264) + 8LL), 0, 0x4000uLL);
    }
    v12 = &qword_140C22D18;
    v13 = 4LL;
    qword_140C15C78 = *(_QWORD *)(v2 + 1008);
    v14 = (_OWORD *)(v2 + 136);
    do
    {
      *(_OWORD *)v12 = *v14;
      *((_OWORD *)v12 + 1) = v14[1];
      *((_OWORD *)v12 + 2) = v14[2];
      *((_OWORD *)v12 + 3) = v14[3];
      *((_OWORD *)v12 + 4) = v14[4];
      *((_OWORD *)v12 + 5) = v14[5];
      *((_OWORD *)v12 + 6) = v14[6];
      v12 += 16;
      v15 = v14[7];
      v14 += 8;
      *((_OWORD *)v12 - 1) = v15;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v12 = *v14;
    *((_OWORD *)v12 + 1) = v14[1];
    *((_OWORD *)v12 + 2) = v14[2];
    *((_OWORD *)v12 + 3) = v14[3];
    *((_OWORD *)v12 + 4) = v14[4];
    *((_OWORD *)v12 + 5) = v14[5];
    *(_BYTE *)(v0 + 4) = 0;
    qword_140C22DE8 = v4;
    if ( (dword_140D0688C & 2) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}
