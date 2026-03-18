/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02A9BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01267F4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0129C10 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0129CE0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0129D50 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0129FAC (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C012A700 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C012B224 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02AB3A8 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int Size,
        void *a8)
{
  unsigned int v10; // esi
  int v11; // r12d
  UMPDOBJ *v12; // rbx
  ULONG v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // edx
  unsigned int v16; // r8d
  ULONG v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  char *v21; // rdx
  char *KernelPtr; // rax
  size_t v24; // [rsp+20h] [rbp-118h]
  int v25; // [rsp+40h] [rbp-F8h] BYREF
  int v26; // [rsp+44h] [rbp-F4h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-F0h] BYREF
  int v28; // [rsp+4Ch] [rbp-ECh] BYREF
  UMPDOBJ *v29; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-E0h] BYREF
  void *v31; // [rsp+60h] [rbp-D8h]
  void *v32; // [rsp+68h] [rbp-D0h] BYREF
  void *v33; // [rsp+70h] [rbp-C8h] BYREF
  struct _XLATEOBJ *v34; // [rsp+78h] [rbp-C0h]
  struct _XFORMOBJ *v35; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+88h] [rbp-B0h]
  struct _SURFOBJ *v37; // [rsp+90h] [rbp-A8h]
  _QWORD v38[10]; // [rsp+A0h] [rbp-98h] BYREF

  v27 = a4;
  v35 = a3;
  v34 = a2;
  v31 = a8;
  v36 = (unsigned __int64)a6;
  v37 = a1;
  v10 = 1;
  v25 = 1;
  v28 = 0;
  v11 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v32 = 0LL;
  v33 = 0LL;
  memset(v38, 0, sizeof(v38));
  v12 = v29;
  if ( !v29 )
    goto LABEL_36;
  if ( !*((_DWORD *)v29 + 106) )
  {
    v14 = a5;
    goto LABEL_14;
  }
  v13 = a2 ? ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120 : 96;
  v14 = a5;
  if ( a5 + 7 < a5 )
    goto LABEL_36;
  v15 = (a5 + 7) & 0xFFFFFFF8;
  if ( Size + 7 < Size )
    goto LABEL_36;
  v16 = (Size + 7) & 0xFFFFFFF8;
  v17 = v13 + v15;
  if ( v13 + v15 < v13 )
    goto LABEL_36;
  v18 = v13 + v15;
  v19 = v17 + v16;
  v20 = -1;
  if ( v18 + v16 >= v18 )
    v20 = v19;
  v30 = v20;
  if ( v19 < v18 )
  {
LABEL_36:
    XUMPDOBJ::~XUMPDOBJ(&v29);
    return 0LL;
  }
  v10 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v32, &v33, &v28, &v26, &v30);
  v25 = v10;
  v11 = v26;
LABEL_14:
  if ( v10 )
  {
    v38[0] = 0x4C00000050LL;
    v38[2] = *(_QWORD *)v12;
    v38[3] = a1;
    v38[4] = v34;
    v38[5] = v35;
    v31 = (void *)((unsigned __int64)v31 & -(__int64)(Size != 0));
    v38[6] = __PAIR64__(v14, v27);
    v38[7] = v36 & -(__int64)(v14 != 0);
    LODWORD(v38[8]) = Size;
    v38[9] = v31;
    if ( (!v14 || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v38[7], v14))
      && (!Size || (v38[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v38[3])
      && (unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&v38[4])
      && (!v38[5]
       || (v27 = 0,
           (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 272), (const void **)&v38[5], 4u, &v27)))
      && (LODWORD(v24) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v38, 0x50u, &v25, v24) != -1) )
    {
      if ( Size )
      {
        v21 = (char *)v38[9];
        if ( (unsigned __int64)Size + v38[9] > MmUserProbeAddress || (unsigned __int64)Size + v38[9] < v38[9] )
          *(_BYTE *)MmUserProbeAddress = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, v21);
        memmove(v31, KernelPtr, Size);
      }
      v10 = v25;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v28 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v32;
    a1->pvScan0 = v33;
  }
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v10;
}
