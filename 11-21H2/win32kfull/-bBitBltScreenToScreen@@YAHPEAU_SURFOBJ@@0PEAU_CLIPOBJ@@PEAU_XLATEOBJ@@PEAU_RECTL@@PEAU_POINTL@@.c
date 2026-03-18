/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A3D30
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C016F090 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C01568A8 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C016FBC8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C029FBD8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C029FCBC (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C029FEC0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bBitBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  DHPDEV dhpdev; // rbx
  unsigned int v13; // r14d
  LONG left; // r12d
  LONG top; // ecx
  int v16; // r12d
  int v17; // r9d
  _QWORD *v18; // r15
  __int64 v19; // rsi
  int v20; // ebx
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rax
  struct PALETTE *v25; // r12
  __int64 v26; // rbx
  int v27; // r15d
  int v28; // r12d
  ULONG v29; // r8d
  SURFOBJ *v30; // rax
  SURFOBJ *v31; // r8
  __int64 v32; // rcx
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  int v34; // eax
  __int64 v35; // r11
  __int64 v36; // rbx
  __int64 v37; // r15
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r15
  struct PALETTE *v42; // rax
  int v43; // edx
  int v44; // edi
  int v45; // ecx
  int v46; // r8d
  __int16 v47; // di
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v50; // rbx
  _QWORD *v51; // rax
  __int16 v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+74h] [rbp-8Ch]
  int v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  int v58[2]; // [rsp+90h] [rbp-70h]
  struct PALETTE *v59; // [rsp+98h] [rbp-68h]
  SIZEL sizl; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  SURFOBJ *pso; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  HSURF hsurf; // [rsp+C0h] [rbp-40h]
  _QWORD *v65; // [rsp+C8h] [rbp-38h]
  _QWORD *v66; // [rsp+D0h] [rbp-30h]
  const struct _RECTL *v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  struct PALETTE *v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v75; // [rsp+120h] [rbp+20h]
  _DWORD v76[12]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v77[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v78[2]; // [rsp+168h] [rbp+68h] BYREF
  RECTL rclBounds; // [rsp+178h] [rbp+78h] BYREF

  v56 = 0LL;
  dhpdev = a1->dhpdev;
  v13 = 1;
  left = a5->left;
  sizl = 0LL;
  pso = 0LL;
  v67 = a5;
  top = a5->top;
  v63 = (__int64)a4;
  v72 = (__int64)a7;
  v73 = (__int64)a2;
  v16 = left - a6->x;
  v17 = top - a6->y;
  v55 = v17;
  v71 = (__int64)a8;
  v70 = (__int64)a9;
  *(_OWORD *)v77 = 0LL;
  v54 = v16;
  *(_OWORD *)v78 = 0LL;
  rclBounds = 0LL;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)&v74, (struct _VDEV *)dhpdev, v16, v17);
  v18 = v75;
  v66 = v75;
  if ( !v75
    || (MULTIBRUSH::MULTIBRUSH(
          (MULTIBRUSH *)v76,
          a8,
          *((_DWORD *)dhpdev + 4),
          (struct _VDEV *)dhpdev,
          *((struct _SURFOBJ **)dhpdev + 6),
          ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F),
        !v76[0]) )
  {
    v13 = 0;
    goto LABEL_57;
  }
  if ( a3 )
    rclBounds = a3->rclBounds;
  v53 = a1->fjBitmap & 0x40;
  do
  {
    v19 = v18[1];
    v20 = v55;
    v21 = v19;
    v65 = v18;
    while ( 1 )
    {
      LODWORD(v77[0]) = v16 + *(_DWORD *)(v21 + 28);
      LODWORD(v77[1]) = v16 + *(_DWORD *)(v21 + 36);
      HIDWORD(v77[0]) = v20 + *(_DWORD *)(v21 + 32);
      HIDWORD(v77[1]) = v20 + *(_DWORD *)(v21 + 40);
      if ( bIntersect(v67, (const struct _RECTL *)v77, (struct _RECTL *)v77) )
      {
        v22 = bIntersect((const struct _RECTL *)v77, (const struct _RECTL *)(v19 + 28), (struct _RECTL *)v77);
        v23 = 0LL;
        if ( v22 )
        {
          *(_QWORD *)v58 = v21 + 72;
          LODWORD(v56) = LODWORD(v77[0]) - v16;
          hsurf = 0LL;
          HIDWORD(v56) = HIDWORD(v77[0]) - v20;
          v24 = *(_QWORD *)(v21 + 64);
          v25 = *(struct PALETTE **)(v19 + 64);
          v57 = v24;
          v59 = v25;
          if ( (struct PALETTE *)v24 == v25 )
            goto LABEL_17;
          if ( *(_DWORD *)(v21 + 20) )
          {
            v26 = *(_QWORD *)(v21 + 48);
            v27 = LODWORD(v77[1]) - LODWORD(v77[0]);
            v28 = HIDWORD(v77[1]) - HIDWORD(v77[0]);
            sizl.cx = LODWORD(v77[1]) - LODWORD(v77[0]);
            v29 = *(_DWORD *)(v26 + 2076);
            sizl.cy = HIDWORD(v77[1]) - HIDWORD(v77[0]);
            hsurf = (HSURF)EngCreateBitmap(sizl, 0, v29, 0, 0LL);
            v30 = EngLockSurface(hsurf);
            v23 = 0LL;
            pso = v30;
            v31 = v30;
            if ( v30 )
            {
              v32 = *(_QWORD *)(v26 + 2528);
              v78[0] = 0LL;
              v78[1] = __PAIR64__(v28, v27);
              if ( (*(_DWORD *)(v32 + 112) & 0x400) != 0 )
                v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v26 + 2816);
              else
                v33 = EngCopyBits;
              v34 = OffCopyBits(
                      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v33,
                      (LONG *)&gptlZero,
                      (__int64)v30,
                      *(int **)v58,
                      v57,
                      0LL,
                      0LL,
                      v78,
                      &v56);
              v31 = pso;
              v13 &= v34;
              v23 = 0LL;
            }
            v56 = 0LL;
            v25 = v59;
            v24 = (__int64)v31;
            v57 = (__int64)v31;
            *(_QWORD *)v58 = &gptlZero;
LABEL_17:
            if ( v24 )
            {
              v35 = v63;
              v36 = *(_QWORD *)(v19 + 48);
              v37 = v63;
              v61 = 0LL;
              if ( v25 == (struct PALETTE *)v24 )
                goto LABEL_31;
              v38 = *(_DWORD *)(v19 + 24);
              if ( !v38 && !*(_DWORD *)(v21 + 24) )
                goto LABEL_31;
              v39 = *(_QWORD *)(v21 + 56);
              v40 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 2528LL);
              v41 = *(_QWORD *)(v39 + 2528);
              v68 = v40;
              v69 = ppalDefault;
              v59 = ppalDefault;
              if ( v38 && (*(_DWORD *)(v36 + 2140) & 0x100) != 0 )
              {
                v42 = DrvRealizeHalftonePalette((_QWORD *)v36, 0);
                v39 = *(_QWORD *)(v21 + 56);
                v23 = 0LL;
                v40 = v68;
                v35 = v63;
                v59 = v42;
              }
              v43 = 32 * (*(_DWORD *)(v39 + 2140) & 0x100);
              if ( v35 )
              {
                v44 = *(_DWORD *)(v35 + 28);
                v45 = *(_DWORD *)(v35 + 32);
                v46 = *(_DWORD *)(v35 + 24);
              }
              else
              {
                v44 = 0;
                v45 = 0;
                v46 = 0;
              }
              if ( v35 )
              {
                v23 = *(_QWORD *)(v35 + 64);
                LODWORD(v35) = *(_DWORD *)(v35 + 72);
              }
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v61,
                                   v23,
                                   v35,
                                   *(_QWORD *)(v41 + 128),
                                   *(_QWORD *)(v40 + 128),
                                   (__int64)v69,
                                   (__int64)v59,
                                   v44,
                                   v45,
                                   v46,
                                   v43) )
              {
                v37 = v61;
LABEL_31:
                if ( !a3 || bIntersect(&rclBounds, (const struct _RECTL *)v77, &a3->rclBounds) )
                {
                  if ( a10 == 52428 )
                  {
                    v47 = *((_WORD *)v25 + 39);
                    if ( v53 )
                      *((_WORD *)v25 + 39) = v47 | 0x40;
                    if ( (*(_DWORD *)(*(_QWORD *)(v36 + 2528) + 112LL) & 0x400) != 0 )
                      v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v36 + 2816);
                    else
                      v48 = EngCopyBits;
                    v13 &= OffCopyBits(
                             (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v48,
                             (LONG *)(v19 + 72),
                             (__int64)v25,
                             *(int **)v58,
                             v57,
                             a3,
                             v37,
                             v77,
                             &v56);
                    *((_WORD *)v25 + 39) = v47;
                  }
                  else
                  {
                    MULTIBRUSH::LoadElement(
                      (MULTIBRUSH *)v76,
                      (struct _DISPSURF *)v19,
                      (struct PALETTE *)((char *)v25 - 24));
                    if ( (*(_DWORD *)(*(_QWORD *)(v36 + 2528) + 112LL) & 1) != 0 )
                      v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v36 + 2808);
                    else
                      v49 = EngBitBlt;
                    v13 &= OffBitBlt(
                             (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v49,
                             (LONG *)(v19 + 72),
                             (__int64)v25,
                             *(_DWORD **)v58,
                             v57,
                             v73,
                             a3,
                             v37,
                             (int *)v77,
                             &v56,
                             v72,
                             v71,
                             (__int64 *)v70,
                             a10);
                    MULTIBRUSH::StoreElement((MULTIBRUSH *)v76, *(_DWORD *)(v19 + 16));
                  }
                }
                else
                {
                  a3->rclBounds = rclBounds;
                }
              }
              else
              {
                v13 = 0;
              }
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v61);
            }
            v50 = hsurf;
            if ( hsurf )
            {
              EngUnlockSurface(pso);
              EngDeleteSurface(v50);
            }
            v20 = v55;
          }
          v16 = v54;
        }
      }
      v51 = (_QWORD *)*v65;
      v65 = v51;
      if ( !v51 )
        break;
      v21 = v51[1];
    }
    v18 = (_QWORD *)*v66;
    v66 = v18;
  }
  while ( v18 );
  if ( a3 )
    a3->rclBounds = rclBounds;
LABEL_57:
  if ( v74 )
    Win32FreePool(v74);
  return v13;
}
