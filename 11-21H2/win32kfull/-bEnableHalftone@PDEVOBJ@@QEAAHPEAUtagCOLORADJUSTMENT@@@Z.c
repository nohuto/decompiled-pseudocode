/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0096C18
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0091710 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C013CE28 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B5EAC (GreCreateHalftonePalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0096118 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C009700C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C009726C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  __int16 v6; // r9
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 ThreadWin32Thread; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  signed __int32 v12; // ett
  __int64 v13; // rbx
  unsigned int v14; // edi
  signed __int32 v16; // ett
  __int64 v17; // rdi
  _QWORD *v18; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+30h] [rbp-D0h]
  __int128 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+48h] [rbp-B8h]
  int Src; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v24; // [rsp+64h] [rbp-9Ch]
  __int16 v25; // [rsp+66h] [rbp-9Ah]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  _WORD *v28; // [rsp+80h] [rbp-80h]
  _WORD *v29; // [rsp+88h] [rbp-78h]
  __int16 v30; // [rsp+90h] [rbp-70h]
  __int16 v31; // [rsp+92h] [rbp-6Eh]
  __int16 v32; // [rsp+94h] [rbp-6Ch]
  __int16 v33; // [rsp+96h] [rbp-6Ah]
  __int128 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int16 v36; // [rsp+B0h] [rbp-50h]
  __int16 v37; // [rsp+B2h] [rbp-4Eh]
  __int16 v38; // [rsp+B4h] [rbp-4Ch]
  char v39; // [rsp+B6h] [rbp-4Ah]
  char v40; // [rsp+B7h] [rbp-49h]
  _WORD v41[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v42[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v20 = 0;
  v19 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v19,
                        *(_DWORD *)(v2 + 2344),
                        (struct _GDIINFO *)(v2 + 2104)) )
  {
LABEL_22:
    v14 = 0;
    goto LABEL_16;
  }
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v25 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v24 = *(_WORD *)(v5 + 2348);
  v39 = *(_BYTE *)(v5 + 2351);
  v40 = 0;
  if ( *(_DWORD *)(v5 + 2340) > 0x12u )
  {
    v6 = 17;
    v25 = 17;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v5 + 2340);
    v25 = v6;
  }
  v30 = (*(_DWORD *)(v5 + 2296) + *(_DWORD *)(v5 + 2304) + *(_DWORD *)(v5 + 2300)) / 3;
  v36 = *(_WORD *)(v5 + 2296);
  v37 = *(_WORD *)(v5 + 2300);
  v38 = *(_WORD *)(v5 + 2304);
  v26 = 0LL;
  v27 = 0LL;
  if ( v6 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2376) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2380) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2384)
      && *(_QWORD *)(v5 + 2392)
      && *(_QWORD *)(v5 + 2400) )
    {
      LODWORD(v21) = 32;
      WORD2(v21) = *(_WORD *)(v5 + 2376);
      WORD3(v21) = *(_WORD *)(v5 + 2380);
      *((_QWORD *)&v21 + 1) = *(_QWORD *)(v5 + 2384);
      v22 = *(_OWORD *)(v5 + 2392);
      *(_QWORD *)&v27 = &v21;
    }
    else
    {
      v25 = 17;
    }
  }
  v42[0] = *(_WORD *)(v5 + 2212);
  v42[1] = *(_WORD *)(v5 + 2216);
  v42[2] = *(_WORD *)(v5 + 2220);
  v42[3] = *(_WORD *)(v5 + 2224);
  v42[4] = *(_WORD *)(v5 + 2228);
  v42[5] = *(_WORD *)(v5 + 2232);
  v42[6] = *(_WORD *)(v5 + 2236);
  v42[7] = *(_WORD *)(v5 + 2240);
  v42[8] = *(_WORD *)(v5 + 2244);
  v42[9] = *(_WORD *)(v5 + 2248);
  v42[10] = *(_WORD *)(v5 + 2252);
  v42[11] = *(_WORD *)(v5 + 2256);
  v42[12] = *(_WORD *)(v5 + 2260);
  v42[13] = *(_WORD *)(v5 + 2264);
  v42[14] = *(_WORD *)(v5 + 2268);
  v42[15] = *(_WORD *)(v5 + 2272);
  v42[16] = *(_WORD *)(v5 + 2276);
  v42[17] = *(_WORD *)(v5 + 2280);
  v42[18] = *(_WORD *)(v5 + 2284);
  v42[19] = *(_WORD *)(v5 + 2288);
  v42[20] = *(_WORD *)(v5 + 2292);
  v28 = v42;
  v41[0] = *(_WORD *)(v5 + 2308);
  v41[1] = *(_WORD *)(v5 + 2312);
  v41[2] = *(_WORD *)(v5 + 2316);
  v41[3] = *(_WORD *)(v5 + 2320);
  v41[4] = *(_WORD *)(v5 + 2324);
  v41[5] = *(_WORD *)(v5 + 2328);
  v29 = v41;
  v31 = *(_WORD *)(v5 + 2144);
  v32 = *(_WORD *)(v5 + 2148);
  v33 = *(_WORD *)(v5 + 2332);
  if ( a2 )
  {
    v7 = *(_OWORD *)&a2->caSize;
    v8 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v7 = DefaultCA;
    v8 = 0LL;
  }
  v35 = v8;
  v34 = v7;
  v18 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src, &v18) <= 0 )
  {
    EngSetLastError(8u);
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v17 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v17 + 104) || *(_DWORD *)(v17 + 108)) )
      *(_QWORD *)(v17 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1504LL) = 0LL;
    goto LABEL_22;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    *(_QWORD *)(ThreadWin32Thread + 288) = v18;
    *(_DWORD *)(ThreadWin32Thread + 296) = gcModeChanges;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = v18;
  }
  v11 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v12 = *(_DWORD *)(v11 + 40);
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 40), v12 & 0xFFFFFDFF, v12) );
  v13 = *(_QWORD *)this;
  v14 = 1;
  if ( (*(_DWORD *)(v13 + 40) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v19, *(_QWORD *)(v13 + 1776)) )
  {
    _m_prefetchw((const void *)(v13 + 40));
    do
      v16 = *(_DWORD *)(v13 + 40);
    while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 40), v16 | 0x200, v16) );
  }
  LOBYTE(v10) = 8;
  *v18 = *v19;
  HmgSetOwner(*v19, 0LL, v10);
  v20 = 1;
LABEL_16:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v19);
  return v14;
}
