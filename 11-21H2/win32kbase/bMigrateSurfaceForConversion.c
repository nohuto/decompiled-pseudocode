/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C0061D70
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001C9F4 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001E8AC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0021AA0 (HmgShareLock.c)
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C00820A0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C00820D0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C0082590 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C00AC930 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     HmgQueryAltLock @ 0x1C00C1310 (HmgQueryAltLock.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C00C1628 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00C18E0 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C00C5D84 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C00C5DE0 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     HmgSwapLockedHandleContents @ 0x1C00CCC50 (HmgSwapLockedHandleContents.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00DA9BC (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00DA9FC (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C016F4F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     IsMulReplaceRedirectionChildSupported @ 0x1C023DA9C (IsMulReplaceRedirectionChildSupported.c)
 *     MulReplaceRedirectionChild @ 0x1C023DAF4 (MulReplaceRedirectionChild.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(SURFACE *this, SURFACE *a2, int a3, _DWORD *a4)
{
  unsigned int v7; // r12d
  struct _SURFOBJ *v8; // rdi
  int v9; // eax
  SURFACE *v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  HLSURF *v13; // rsi
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rsi
  int AltLock; // eax
  __int64 v18; // rbx
  int v19; // edi
  int v20; // eax
  int locked; // eax
  int v22; // edi
  HLSURF v23; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int16 v30; // dx
  __int16 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm2
  __int128 v58; // xmm3
  struct _EPROCESS *v59; // rdx
  struct _EPROCESS *v60; // rbx
  __int64 v61; // rax
  int v62; // xmm0_4
  int v63; // xmm1_4
  int v64; // eax
  HLSURF v65; // rdx
  struct SFMLOGICALSURFACE *v66; // rbx
  int IsEnabled; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rdi
  int v74; // ebx
  int v75; // eax
  int v76; // eax
  int v79; // [rsp+40h] [rbp-C0h]
  int v80; // [rsp+44h] [rbp-BCh]
  _QWORD v81[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v82; // [rsp+58h] [rbp-A8h]
  _QWORD v83[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v84; // [rsp+70h] [rbp-90h]
  __int64 v85; // [rsp+78h] [rbp-88h] BYREF
  __int128 v86; // [rsp+80h] [rbp-80h] BYREF
  __int128 v87; // [rsp+90h] [rbp-70h]
  int v88; // [rsp+A0h] [rbp-60h]
  _BYTE v89[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-38h]
  int v91; // [rsp+D0h] [rbp-30h]
  __int128 v92; // [rsp+E0h] [rbp-20h]
  __int128 v93; // [rsp+F0h] [rbp-10h]
  __int128 v94; // [rsp+100h] [rbp+0h]
  __int128 v95; // [rsp+110h] [rbp+10h]
  __int128 v96; // [rsp+120h] [rbp+20h]
  __int128 v97; // [rsp+130h] [rbp+30h]
  __int128 v98; // [rsp+140h] [rbp+40h]
  __int128 v99; // [rsp+150h] [rbp+50h]
  __int128 v100; // [rsp+160h] [rbp+60h]
  __int128 v101; // [rsp+170h] [rbp+70h]
  __int64 v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+190h] [rbp+90h] BYREF
  int v104; // [rsp+198h] [rbp+98h]
  int v105; // [rsp+19Ch] [rbp+9Ch]

  v104 = *((_DWORD *)this + 14);
  v105 = *((_DWORD *)this + 15);
  v84 = a4;
  v103 = 0LL;
  v7 = 1;
  v81[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v81, v8);
  v83[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v83, (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)));
  *a4 = 0;
  v9 = *((_DWORD *)this + 28);
  if ( (v9 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
    v83[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v81);
    v81[0] = 0LL;
    goto LABEL_87;
  }
  if ( *((_WORD *)this + 50) == 3 )
  {
LABEL_5:
    v10 = this;
    goto LABEL_8;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v9 & 0x400000) != 0 )
      goto LABEL_5;
    if ( !_bittest((const signed __int32 *)a2 + 28, 0x16u) )
    {
LABEL_87:
      v7 = 0;
      goto LABEL_88;
    }
  }
  v10 = a2;
LABEL_8:
  v11 = *((_QWORD *)v10 + 6);
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
    *((_DWORD *)this + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v10 + 28) & 0x400) == 0
      ? (v12 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v103,
                 &v103))
      : (v12 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))(v11 + 2816))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v103,
                 &v103)),
        v13 = 0LL,
        v12) )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
      *((_DWORD *)this + 29) &= ~0x10u;
    v14 = *(_DWORD *)this;
    v82 = *((_DWORD *)this + 29) & 0x80;
    v15 = v14 & 0x800000;
    if ( v15 && _bittest16((const signed __int16 *)this + 51, 9u) )
    {
      v80 = 1;
    }
    else
    {
      v80 = 0;
      if ( !v15 )
      {
        v80 = 0;
        goto LABEL_25;
      }
    }
    if ( (*((_WORD *)this + 51) & 0x400) != 0 )
    {
      v79 = 1;
      goto LABEL_26;
    }
LABEL_25:
    v79 = 0;
LABEL_26:
    v16 = *((_QWORD *)this + 4);
    AltLock = HmgQueryAltLock(v16);
    v18 = *((_QWORD *)a2 + 4);
    v19 = AltLock;
    v20 = HmgQueryAltLock(v18);
    locked = HmgSwapLockedHandleContents(v16, v19, v18, v20, 5);
    v13 = 0LL;
    if ( !locked )
    {
      v7 = 0;
      goto LABEL_79;
    }
    v22 = 0;
    v23 = 0LL;
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(v89);
    v90 = 0LL;
    v91 = 0;
    FirstLSurf = SURFACE::GetFirstLSurf(this);
    v13 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_35;
    v22 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_35;
    if ( qword_1C029B070 && (int)qword_1C029B070() >= 0 && qword_1C029B078 )
      v23 = (HLSURF)qword_1C029B078(*((_QWORD *)this + 6), v13, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v89, v23);
    if ( !v90 )
    {
      v7 = 0;
    }
    else
    {
LABEL_35:
      OBJECT::SwapShareCount(this, a2);
      v25 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 70) = a2;
      *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
      v26 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v25;
      v27 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v26;
      v28 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v27;
      v29 = *((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = v28;
      v30 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v29;
      v31 = v30 & 0x8000 | *((_WORD *)this + 7) & 0x4000;
      *((_WORD *)this + 7) = *((_WORD *)this + 7) & 0x8000 | v30 & 0x4000;
      LODWORD(v28) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v31;
      LODWORD(v29) = *((_DWORD *)this + 42);
      *((_DWORD *)this + 42) = v28;
      v32 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v29;
      v33 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v32;
      *((_QWORD *)a2 + 22) = v33;
      v34 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v34;
      v35 = *((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v34) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v35;
      LODWORD(v35) = *((_DWORD *)this + 80);
      *((_DWORD *)this + 80) = v34;
      LODWORD(v34) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v35;
      LODWORD(v35) = *((_DWORD *)this + 81);
      *((_DWORD *)this + 81) = v34;
      *((_DWORD *)a2 + 81) = v35;
      v36 = *((_QWORD *)this + 61);
      v37 = *(_OWORD *)((char *)this + 344);
      v92 = *(_OWORD *)((char *)this + 328);
      v38 = *(_OWORD *)((char *)this + 360);
      v93 = v37;
      v39 = *(_OWORD *)((char *)this + 376);
      v94 = v38;
      v40 = *(_OWORD *)((char *)this + 392);
      v95 = v39;
      v41 = *(_OWORD *)((char *)this + 408);
      v96 = v40;
      v42 = *(_OWORD *)((char *)this + 424);
      v97 = v41;
      v43 = *(_OWORD *)((char *)this + 440);
      v98 = v42;
      v44 = *(_OWORD *)((char *)this + 456);
      v99 = v43;
      v45 = *(_OWORD *)((char *)this + 472);
      v100 = v44;
      v101 = v45;
      v102 = v36;
      *(_OWORD *)((char *)this + 328) = *(_OWORD *)((char *)a2 + 328);
      *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a2 + 344);
      *(_OWORD *)((char *)this + 360) = *(_OWORD *)((char *)a2 + 360);
      *(_OWORD *)((char *)this + 376) = *(_OWORD *)((char *)a2 + 376);
      *(_OWORD *)((char *)this + 392) = *(_OWORD *)((char *)a2 + 392);
      *(_OWORD *)((char *)this + 408) = *(_OWORD *)((char *)a2 + 408);
      *(_OWORD *)((char *)this + 424) = *(_OWORD *)((char *)a2 + 424);
      *(_OWORD *)((char *)this + 440) = *(_OWORD *)((char *)a2 + 440);
      *(_OWORD *)((char *)this + 456) = *(_OWORD *)((char *)a2 + 456);
      *(_OWORD *)((char *)this + 472) = *(_OWORD *)((char *)a2 + 472);
      *((_QWORD *)this + 61) = *((_QWORD *)a2 + 61);
      v46 = v93;
      *(_OWORD *)((char *)a2 + 328) = v92;
      v47 = v94;
      *(_OWORD *)((char *)a2 + 344) = v46;
      v48 = v95;
      *(_OWORD *)((char *)a2 + 360) = v47;
      v49 = v96;
      *(_OWORD *)((char *)a2 + 376) = v48;
      v50 = v97;
      *(_OWORD *)((char *)a2 + 392) = v49;
      v51 = v98;
      *(_OWORD *)((char *)a2 + 408) = v50;
      v52 = v99;
      *(_OWORD *)((char *)a2 + 424) = v51;
      v53 = v100;
      *(_OWORD *)((char *)a2 + 440) = v52;
      v54 = v101;
      v55 = v102;
      *(_OWORD *)((char *)a2 + 456) = v53;
      v56 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v54;
      *((_QWORD *)a2 + 61) = v55;
      v57 = *((_OWORD *)this + 31);
      v58 = *((_OWORD *)this + 32);
      *((_OWORD *)this + 31) = v56;
      *((_OWORD *)this + 32) = *((_OWORD *)a2 + 32);
      LODWORD(v55) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 31) = v57;
      *((_OWORD *)a2 + 32) = v58;
      LODWORD(v35) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28) ^ (v35 ^ v55) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v35) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v35) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v35 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v35) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v59 = (struct _EPROCESS *)*((_QWORD *)a2 + 80);
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v60 = (struct _EPROCESS *)*((_QWORD *)this + 80);
      SURFACE::vAppContainerOwner(this, v59);
      SURFACE::vAppContainerOwner(a2, v60);
      if ( (*((_DWORD *)this + 29) & 0x800) != 0 )
      {
        v61 = *(_QWORD *)((char *)this + 668);
        v62 = *((_DWORD *)this + 165);
        v63 = *((_DWORD *)this + 166);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v62;
        *((_DWORD *)a2 + 166) = v63;
        *(_QWORD *)((char *)a2 + 668) = v61;
      }
      if ( v80 )
      {
        *((_WORD *)this + 51) &= ~0x200u;
        v64 = *(_DWORD *)a2 & 0x800000;
        if ( v64 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v79 && v64 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v84 = 1;
      }
      if ( v13 )
      {
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(&v85);
        v65 = *v13;
        *((_QWORD *)&v87 + 1) = 0LL;
        v88 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v85, v65);
        v13 = 0LL;
        if ( v22 && qword_1C029B010 && (int)qword_1C029B010() >= 0 && qword_1C029B018 )
          qword_1C029B018(*((_QWORD *)v10 + 6), *((_QWORD *)&v87 + 1), a2, v90);
        while ( 1 )
        {
          v66 = SURFACE::GetFirstLSurf(this);
          if ( !v66 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v10 + 6), v66, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v85);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        IsEnabled = Feature_3101493560__private_IsEnabled();
        v68 = *((_QWORD *)a2 + 18);
        if ( IsEnabled )
        {
          v85 = HmgShareLock(v68, 5);
          v86 = 0LL;
          v87 = 0LL;
          if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
            PushThreadGuardedObject(
              &v86,
              (__int64)&v85,
              (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic);
          if ( v85 && *(HLSURF **)(v85 + 24) != v13 && (int)IsMulReplaceRedirectionChildSupported() >= 0 )
            MulReplaceRedirectionChild(*(_QWORD *)(v85 + 24), (char *)this + 24, (char *)a2 + 24);
          HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(&v85);
        }
        else
        {
          v69 = HmgShareLock(v68, 5);
          v70 = v69;
          if ( v69 )
          {
            if ( *(HLSURF **)(v69 + 24) != v13 && (int)IsMulReplaceRedirectionChildSupported() >= 0 )
              MulReplaceRedirectionChild(*(_QWORD *)(v70 + 24), (char *)this + 24, (char *)a2 + 24);
            DEC_SHARE_REF_CNT((unsigned int *)v70);
          }
        }
      }
      if ( v82 != (_DWORD)v13 )
      {
        DEC_SHARE_REF_CNT((unsigned int *)this);
        INC_SHARE_REF_CNT((unsigned int *)a2);
      }
      if ( *((_DWORD *)this + 2) != (_DWORD)v13 )
      {
        *v84 = 1;
        goto LABEL_76;
      }
      SURFREF::SURFREF((SURFREF *)&v85, *((HSURF *)this + 4));
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v81);
      v81[0] = v13;
      v7 = SURFREF::bDeleteSurface((__int64)&v85, 0LL);
      if ( !v7 )
        *((_QWORD *)this + 70) = v13;
      SURFREF::~SURFREF((SURFREF *)&v85);
      if ( v7 )
      {
LABEL_76:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v89);
        if ( v7 )
          goto LABEL_85;
LABEL_79:
        if ( v80 != (_DWORD)v13 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v76 = *(_DWORD *)this & 0x800000;
          if ( v76 )
            *((_WORD *)this + 51) |= 0x200u;
          if ( v79 != (_DWORD)v13 && v76 )
            *((_WORD *)this + 51) |= 0x400u;
        }
        goto LABEL_85;
      }
    }
    v71 = *((_QWORD *)this + 4);
    v72 = HmgQueryAltLock(v71);
    v73 = *((_QWORD *)a2 + 4);
    v74 = v72;
    v75 = HmgQueryAltLock(v73);
    HmgSwapLockedHandleContents(v73, v75, v71, v74, 5);
    v13 = 0LL;
    goto LABEL_76;
  }
  v7 = 0;
LABEL_85:
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
  v83[0] = v13;
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v81);
  v81[0] = v13;
LABEL_88:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v83);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v81);
  return v7;
}
