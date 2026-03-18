/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C02A08A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02A4998 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02A4CB4 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        ULONG a3,
        char a4,
        struct DHSURF__ *a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  HBITMAP RedirectionDeviceBitmap; // r15
  __int64 v13; // rbx
  _QWORD *v14; // r13
  _QWORD *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // r14
  __int64 v19; // rax
  HSURF v20; // rax
  HSURF v21; // rbp
  SURFOBJ *v22; // r12
  HSURF v23; // rcx
  __int64 (__fastcall *v24)(_QWORD, SIZEL); // r10
  HSURF v25; // rax
  SURFOBJ *v26; // rax
  DHSURF v27; // rax
  DHSURF v28; // rax
  DHSURF v29; // rax
  SURFOBJ *v30; // rdx
  int v32; // [rsp+50h] [rbp-68h]
  int v33; // [rsp+54h] [rbp-64h]
  DHSURF dhsurf; // [rsp+58h] [rbp-60h]
  void *v35; // [rsp+60h] [rbp-58h]
  __int64 v36[10]; // [rsp+68h] [rbp-50h] BYREF
  char v39; // [rsp+D8h] [rbp+20h]

  v39 = a4;
  v8 = *((_QWORD *)a1 + 4);
  v9 = 0LL;
  dhsurf = 0LL;
  RedirectionDeviceBitmap = 0LL;
  v13 = 0LL;
  if ( _bittest((const signed __int32 *)(v8 + 40), 0x1Au)
    && ((a4 & 2) != 0 || !g_pDwmState || !gfDwmDeviceBitmapsEnabledForMultiAdapter) )
  {
    return (HBITMAP)v9;
  }
  v35 = 0LL;
  if ( (a4 & 2) != 0 && a8 )
    v35 = *a8;
  v14 = 0LL;
  if ( _bittest((const signed __int32 *)(v8 + 40), 0x1Au) )
  {
    v15 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15[7] + 2552LL);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 248) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v16 + 252) == *((_DWORD *)a1 + 27) )
            break;
        }
        v15 = (_QWORD *)*v15;
        if ( !v15 )
          goto LABEL_16;
      }
      v14 = v15;
    }
LABEL_16:
    v17 = *(_QWORD *)(v8 + 1768);
    if ( v17 )
      *(_QWORD *)(v17 + 104) = 0LL;
    if ( v14 )
    {
      v18 = v14;
      goto LABEL_21;
    }
  }
  v18 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
  {
LABEL_63:
    if ( a8 && (a4 & 2) == 0 )
      *a8 = v35;
    return RedirectionDeviceBitmap;
  }
LABEL_21:
  while ( 1 )
  {
    v19 = v18[6];
    v33 = 0;
    v36[0] = v19;
    if ( (*(_DWORD *)(v19 + 1792) & 0x8000000) == 0 )
      break;
    if ( (*(_DWORD *)(v19 + 2096) & 0x8000) == 0 )
      goto LABEL_27;
    if ( !*(_QWORD *)(v19 + 2744) )
      goto LABEL_27;
    v20 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, SIZEL))(v19 + 2744))(*(_QWORD *)(v19 + 1768), a2);
    v21 = v20;
    if ( !v20 )
      goto LABEL_27;
    v22 = EngLockSurface(v20);
    v33 = 1;
    if ( !v22 )
      goto LABEL_26;
LABEL_34:
    v27 = dhsurf;
    if ( !dhsurf )
    {
      v32 = 0;
      v28 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
      dhsurf = v28;
      if ( !v28 )
      {
        v32 = 0;
        if ( RedirectionDeviceBitmap )
        {
LABEL_59:
          EngDeleteSurface((HSURF)RedirectionDeviceBitmap);
          if ( !v32 )
          {
            v29 = dhsurf;
            if ( dhsurf )
LABEL_61:
              EngFreeMem(v29);
          }
        }
        EngUnlockSurface(v22);
        v23 = v21;
        goto LABEL_29;
      }
      RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v28, a2, a3);
      v29 = dhsurf;
      if ( !RedirectionDeviceBitmap )
        goto LABEL_61;
      if ( !EngModifySurface(
              (HSURF)RedirectionDeviceBitmap,
              *((HDEV *)a1 + 4),
              *((_DWORD *)a1 + 17),
              3u,
              dhsurf,
              0LL,
              0,
              0LL) )
        goto LABEL_59;
      v32 = 1;
      v30 = EngLockSurface((HSURF)RedirectionDeviceBitmap);
      if ( !v30 )
        goto LABEL_59;
      *(_QWORD *)dhsurf = a1;
      *((_QWORD *)dhsurf + 1) = dhsurf + 6;
      dhsurf[4] = (struct DHSURF__)v18[2];
      LODWORD(v30[1].hsurf) |= 0x800000u;
      *(_QWORD *)&v30[6].lDelta = v35;
      *(_QWORD *)&v30[6].iBitmapFormat = v13;
      HIDWORD(v30[1].dhpdev) = a6;
      if ( (v39 & 0x10) != 0 )
      {
        if ( (HIDWORD(v22[1].hsurf) & 0x2000) != 0 )
          HIDWORD(v30[1].hsurf) |= 0x2000u;
        v39 &= ~0x10u;
      }
      EngUnlockSurface(v30);
      v27 = dhsurf;
    }
    *(_QWORD *)(*((_QWORD *)v27 + 1) + 8LL * *((unsigned int *)v18 + 4)) = v22;
    if ( v33 )
    {
      LODWORD(v22[1].hsurf) |= 0x80000u;
      HIDWORD(v22[1].hsurf) |= 1u;
    }
    else if ( (v39 & 1) != 0 )
    {
      HIDWORD(v22[1].hsurf) |= 1u;
      *(_QWORD *)&v22[6].lDelta = v35;
      HIDWORD(v22[1].dhpdev) = a6;
      *(_QWORD *)&v22[6].iBitmapFormat = v13;
    }
    else if ( (v39 & 2) != 0 )
    {
      HIDWORD(v22[1].hsurf) |= 8u;
    }
    HIDWORD(v22[1].hsurf) |= 4u;
    *(_QWORD *)&v22[1].cjBits = RedirectionDeviceBitmap;
    vSetupDevBitmap((struct PDEVOBJ *)v36, (struct SURFACE *)&v22[-1].pvScan0);
    LODWORD(v22[1].hsurf) |= 0x800000u;
    GreMarkUndeletableBitmap(v22->hsurf);
    if ( !v14 || (v18 != v14 ? (v18 = (_QWORD *)*v18) : (v18 = *(_QWORD **)a1), v18 == v14) )
      v18 = (_QWORD *)*v18;
    a4 = v39;
    if ( !v18 )
      goto LABEL_63;
  }
  v24 = *(__int64 (__fastcall **)(_QWORD, SIZEL))(v19 + 3416);
  if ( !v24 )
    goto LABEL_27;
  v25 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD))v24)(*(_QWORD *)(v19 + 1768), a2);
  v21 = v25;
  if ( !v25 )
    goto LABEL_27;
  v26 = EngLockSurface(v25);
  v22 = v26;
  if ( v26 )
  {
    v13 = *(_QWORD *)&v26[6].iBitmapFormat;
    goto LABEL_34;
  }
LABEL_26:
  EngDeleteSurface(v21);
LABEL_27:
  if ( !RedirectionDeviceBitmap )
    return (HBITMAP)v9;
  v23 = (HSURF)RedirectionDeviceBitmap;
LABEL_29:
  EngDeleteSurface(v23);
  return (HBITMAP)v9;
}
