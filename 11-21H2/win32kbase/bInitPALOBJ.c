/*
 * XREFs of bInitPALOBJ @ 0x1C02E572C
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreCreateSemaphoreInternal @ 0x1C0045014 (GreCreateSemaphoreInternal.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00643E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0088360 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0088400 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 */

__int64 bInitPALOBJ()
{
  unsigned int v0; // edi
  int *v1; // rcx
  int v2; // edx
  int *v3; // r8
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  struct OBJECT *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r10
  HPALETTE v13; // rax
  struct PALETTE *v14; // rax
  struct OBJECT *v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]
  struct PALETTE *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  __int64 *v20; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  v1 = (int *)&unk_1C0299BCC;
  *(_QWORD *)&pArrayOfSquares.peRed = &unk_1C0299BCC;
  v2 = 0;
  v3 = (int *)&unk_1C0299BCC;
  LODWORD(v4) = 256;
  do
  {
    v5 = v2 * v2;
    ++v2;
    *v3-- = v5;
    *v1++ = v5;
  }
  while ( v2 < 256 );
  ghsemPalette = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
  if ( !ghsemPalette )
    return 0LL;
  if ( logDefaultPal == 768 && word_1C028F942 )
  {
    v17 = 0;
    v16 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                         (PALMEMOBJ *)&v16,
                         1,
                         (unsigned __int16)word_1C028F942,
                         dword_1C028F944,
                         0,
                         0,
                         0,
                         0x500u,
                         0) )
    {
      v17 = 1;
      v6 = *(_QWORD *)v16;
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
      goto LABEL_8;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
  }
  v6 = 0LL;
LABEL_8:
  if ( !(unsigned int)bSetStockObject(v6, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, (HPALETTE)gahStockObjects[15]);
  v7 = (__int64)v20;
  HmgSetOwner(*v20, 0, 8);
  ppalDefault = (struct PALETTE *)v7;
  dclevelDefault = (HPALETTE)gahStockObjects[15];
  qword_1C028F2D8 = v7;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
    HmgDecrementShareReferenceCountEx((unsigned int *)v7, 0LL);
    return 0LL;
  }
  v8 = v16;
  ppalDefaultSurface8bpp = v16;
  v9 = *(_DWORD *)(v7 + 28) >> 1;
  if ( v9 )
  {
    v10 = 0LL;
    v11 = v9;
    do
    {
      *(_DWORD *)(v10 + *((_QWORD *)v8 + 14)) = *(_DWORD *)(v10 + *(_QWORD *)(v7 + 112));
      v10 += 4LL;
      --v11;
    }
    while ( v11 );
    v12 = v9;
    do
    {
      v4 = (unsigned int)(v4 - 1);
      *(_DWORD *)(*((_QWORD *)v8 + 14) + 4 * v4) = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 4LL * (unsigned int)(v4 - 236));
      --v12;
    }
    while ( v12 );
  }
  v16 = 0LL;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
  HmgDecrementShareReferenceCountEx((unsigned int *)v7, 0LL);
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1, 2u, &gaulMono, 0, 0, 0, 0x2200u, 1) )
  {
    v13 = *(HPALETTE *)v18;
    ppalMono = v18;
    v19 = 1;
    hpalMono = v13;
    v17 = 0;
    v16 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      v14 = v16;
      v16 = 0LL;
      v0 = 1;
      gppalRGB = v14;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
  return v0;
}
