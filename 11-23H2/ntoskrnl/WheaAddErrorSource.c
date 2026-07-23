/*
 * XREFs of WheaAddErrorSource @ 0x14081EDF0
 * Callers:
 *     WheaRegisterErrorSourceOverride @ 0x140613A20 (WheaRegisterErrorSourceOverride.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x14081EC20 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     WheapIsNonHestErrorSource @ 0x140380D30 (WheapIsNonHestErrorSource.c)
 *     WheapCallErrorSourceInitialize @ 0x140380E44 (WheapCallErrorSourceInitialize.c)
 *     WheapAddErrorSource @ 0x140380F5C (WheapAddErrorSource.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WheapInitializeErrorSource @ 0x14081F090 (WheapInitializeErrorSource.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int v5; // edi
  __int64 Pool2; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  bool v23; // zf
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _DWORD Src[8]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v30[972]; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+414h] [rbp+30Ch]
  char v32; // [rsp+418h] [rbp+310h]

  memset(v30, 0, sizeof(v30));
  v4 = 7LL;
  if ( WheapIsNonHestErrorSource(a1) )
  {
    Pool2 = ExAllocatePool2(64LL, 1072LL, 1634035799LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = Pool2 + 96;
      v9 = a1;
      v10 = 7LL;
      do
      {
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)(v8 + 64) = *(_OWORD *)(v9 + 64);
        *(_OWORD *)(v8 + 80) = *(_OWORD *)(v9 + 80);
        *(_OWORD *)(v8 + 96) = *(_OWORD *)(v9 + 96);
        v8 += 128LL;
        v11 = *(_OWORD *)(v9 + 112);
        v9 += 128LL;
        *(_OWORD *)(v8 - 16) = v11;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)v8 = *(_OWORD *)v9;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
      *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + 64);
      *(_DWORD *)(v8 + 72) = *(_DWORD *)(v9 + 72);
      v5 = WheapInitializeErrorSource(v7);
      if ( v5 )
      {
        ExFreePoolWithTag((PVOID)v7, 0x61656857u);
      }
      else
      {
        *(_QWORD *)(v7 + 56) = a2;
        WheapAddErrorSource(v12, v7);
        if ( WheapInitializationComplete )
          *(_DWORD *)(v7 + 108) = 2;
        v5 = WheapCallErrorSourceInitialize(v7, 1u);
        if ( v5 < 0 )
          *(_DWORD *)(v7 + 108) = 1;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  Src[3] = 0;
  v13 = v30;
  Src[0] = 1733060695;
  v14 = a1;
  Src[1] = 1;
  Src[2] = 1009;
  Src[5] = -2147483636;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 977;
  do
  {
    v15 = *(_OWORD *)v14;
    v16 = *(_OWORD *)(v14 + 16);
    v14 += 128LL;
    *(_OWORD *)v13 = v15;
    v17 = *(_OWORD *)(v14 - 96);
    *((_OWORD *)v13 + 1) = v16;
    v18 = *(_OWORD *)(v14 - 80);
    *((_OWORD *)v13 + 2) = v17;
    v19 = *(_OWORD *)(v14 - 64);
    *((_OWORD *)v13 + 3) = v18;
    v20 = *(_OWORD *)(v14 - 48);
    *((_OWORD *)v13 + 4) = v19;
    v21 = *(_OWORD *)(v14 - 32);
    *((_OWORD *)v13 + 5) = v20;
    v22 = *(_OWORD *)(v14 - 16);
    *((_OWORD *)v13 + 6) = v21;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v22;
    --v4;
  }
  while ( v4 );
  v23 = *(_DWORD *)(a1 + 8) == 16;
  v24 = *(_QWORD *)(v14 + 64);
  v25 = *(_OWORD *)(v14 + 16);
  *(_OWORD *)v13 = *(_OWORD *)v14;
  v26 = *(_OWORD *)(v14 + 32);
  *((_OWORD *)v13 + 1) = v25;
  v27 = *(_OWORD *)(v14 + 48);
  *((_OWORD *)v13 + 2) = v26;
  *((_OWORD *)v13 + 3) = v27;
  *((_QWORD *)v13 + 8) = v24;
  *((_DWORD *)v13 + 18) = *(_DWORD *)(v14 + 72);
  if ( v23 )
  {
    memset(&v30[72], 0, 32);
    *(_QWORD *)&v30[144] = 0LL;
  }
  v31 = v5;
  v32 = 0;
  WheaLogInternalEvent(Src);
  return (unsigned int)v5;
}
