/*
 * XREFs of ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02ADF94
 * Callers:
 *     GreGetBitmapBits @ 0x1C02AE2F0 (GreGetBitmapBits.c)
 *     NtGdiGetBitmapBits @ 0x1C02C22E0 (NtGdiGetBitmapBits.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngCopyBits @ 0x1C0030980 (EngCopyBits.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00E16E0 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapBitsInternal(HSURF a1, __int64 a2, unsigned int *a3)
{
  ULONG cjBits; // edi
  __int64 v7; // rsi
  LONG v8; // ecx
  LONG v9; // edx
  HDEV v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  struct _SURFOBJ *v13; // rdx
  ULONG v14; // ecx
  unsigned int v15; // r14d
  struct _SURFOBJ *v16; // rdx
  void *v17; // rax
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  char v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  struct _SURFOBJ v31; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v33; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+138h] [rbp+38h] BYREF

  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v19);
  SURFREF::SURFREF((SURFREF *)v32, a1);
  v7 = v33;
  if ( v33 && (*(_DWORD *)(v33 + 112) & 0x4000000) != 0 )
  {
    v21 = 0LL;
    v22 = 0;
    v23 = 0;
    v8 = *(_DWORD *)(v33 + 56);
    v9 = *(_DWORD *)(v33 + 60);
    cjBits = v9
           * (((unsigned int)(*(_DWORD *)&gaulConvert[2 * *(unsigned int *)(v33 + 96)] * v8 + 15) >> 3) & 0x1FFFFFFE);
    if ( !*(_QWORD *)a2 )
    {
LABEL_28:
      SURFMEM::~SURFMEM((SURFMEM *)&v21);
      goto LABEL_30;
    }
    *(_OWORD *)&v31.dhsurf = 0LL;
    v31.dhpdev = *(DHPDEV *)(v33 + 40);
    v10 = *(HDEV *)(v33 + 48);
    v31.sizlBitmap.cx = v8;
    v31.sizlBitmap.cy = v9;
    prclDest.right = v8;
    prclDest.bottom = v9;
    v31.hdev = v10;
    memset(&v31.cjBits, 0, 40);
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v24 = *(_QWORD *)(v33 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v25, (struct PDEVOBJ *)&v24);
    v11 = 0LL;
    if ( v7 )
    {
      if ( v7 != -24 )
      {
        v12 = *(_DWORD *)(v7 + 112);
        if ( (v12 & 0x80004000) != 0 && (v12 & 0x200) == 0 )
        {
          v11 = v7;
          GreLockDisplayDevice(*(_QWORD *)(v7 + 48));
        }
      }
    }
    v26[0] = 0LL;
    v13 = (struct _SURFOBJ *)(v33 + 24);
    if ( !v33 )
      v13 = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v26, v13) )
    {
      if ( *(_WORD *)(v33 + 100) == 3 )
      {
        v27[3] = 0;
        v30 = 0;
        v27[0] = *(_DWORD *)(v33 + 96);
        v27[1] = *(_DWORD *)(v33 + 56);
        v27[2] = *(_DWORD *)(v33 + 60);
        v28 = 0LL;
        v29 = *(_DWORD *)(v33 + 112) & 0x40000;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v21, (struct _DEVBITMAPINFO *)v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
LABEL_24:
          cjBits = 0;
          goto LABEL_25;
        }
        v7 = v21;
        EngCopyBits(
          (SURFOBJ *)(-(__int64)(v21 != 0) & (v21 + 24)),
          (SURFOBJ *)((v33 + 24) & -(__int64)(v33 != 0)),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      if ( cjBits )
      {
        v14 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16);
        v15 = *a3;
        if ( (*a3 & 0x80000000) == 0 && v15 < cjBits )
        {
          if ( v14 + v15 > cjBits )
            v14 = cjBits - v15;
          if ( v14 )
          {
            v16 = (struct _SURFOBJ *)(v7 + 24);
            v17 = (void *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 16));
            v31.cjBits = v14;
            v31.lDelta = v15;
            v31.pvBits = v17;
            if ( !v7 )
              v16 = 0LL;
            bDoGetSetBitmapBits(&v31, v16, 1);
            cjBits = v31.cjBits;
            *a3 = v15 + v31.cjBits;
            goto LABEL_25;
          }
        }
        goto LABEL_24;
      }
    }
LABEL_25:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v26);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v26);
    if ( v11 )
      GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v25);
    goto LABEL_28;
  }
  EngSetLastError(6u);
LABEL_30:
  if ( v33 )
    DEC_SHARE_REF_CNT(v33);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v32);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v19);
  return cjBits;
}
