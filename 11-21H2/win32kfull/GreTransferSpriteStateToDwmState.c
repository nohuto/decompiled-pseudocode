/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C00ECC20
 * Callers:
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     UserGetMiniWinInfo @ 0x1C0005308 (UserGetMiniWinInfo.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002297C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0038B90 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00807CC (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00838C0 (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0083AA4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00843F8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0084ED0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0086D14 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0089970 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C00B5480 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00B5F68 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00ED388 (UserIsWindowOnDesktopAndComposed.c)
 *     DwmAsyncUpdateSprite @ 0x1C00ED5E8 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00ED78C (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00ED824 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00EDCCC (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C010B114 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0112D10 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C0116EE8 (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  HDEV v3; // r14
  int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // edx
  HSPRITE DwmSpriteObj; // rbx
  __int64 v12; // rdx
  struct DWMSPRITE *v13; // r13
  __int64 *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  struct _SURFOBJ *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // eax
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rsi
  struct _EPROCESS *HwndProcess; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  int v33; // ebx
  void *v34; // rax
  int v35; // r9d
  int v36; // edx
  __int64 v37; // r15
  int v38; // r14d
  void *v39; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v41; // rdi
  __int64 v42; // r9
  UINT_PTR v43; // r9
  unsigned int v44; // esi
  char *v45; // rcx
  char *v46; // rdi
  __int64 v47; // r8
  _QWORD *v48; // rdi
  _QWORD *v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rbx
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v56; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  struct SFMLOGICALSURFACE *v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v65[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v66[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v67[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v68[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct DWMSPRITE *v69; // [rsp+E0h] [rbp-20h]
  _BYTE v70[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 v72[18]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v73; // [rsp+1A0h] [rbp+A0h] BYREF
  int v74; // [rsp+1A8h] [rbp+A8h]
  int v75; // [rsp+1ACh] [rbp+ACh]
  struct tagRECT v76; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = a2;
  v63 = a2;
  v62 = a1;
  v59 = 0;
  v3 = (HDEV)a1;
  v64 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v59);
  v5 = (__int64)(v3 + 20);
  if ( *((_DWORD *)v3 + 35) )
    v5 = **((_QWORD **)v3 + 18) + 80LL;
  v6 = *(_QWORD *)(v5 + 8);
  v58 = 0;
  v56 = 0;
  v55 = 0;
  v57 = 0;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 && (unsigned int)UserIsWindowOnDesktopAndComposed(v7, v2) )
    {
      if ( *((_DWORD *)v3 + 35) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v8 = *(_QWORD *)(v6 + 8);
          v9 = 0;
          v10 = *(_DWORD *)(v8 + 20);
          if ( v10 )
          {
            while ( (**(_DWORD **)(v8 + 8LL * v9 + 24) & 0x20) == 0 )
            {
              if ( ++v9 >= v10 )
                goto LABEL_14;
            }
            v6 = *(_QWORD *)(v8 + 8LL * v9 + 24);
          }
        }
      }
LABEL_14:
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, v3, 0);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v68);
      v69 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v68, DwmSpriteObj);
      v13 = v69;
      if ( v69 )
      {
        v14 = *(__int64 **)(v6 + 16);
        v4 = 1;
        v15 = *((_QWORD *)v69 + 18);
        v61 = (struct SFMLOGICALSURFACE *)v15;
        v16 = *v14;
        *((_DWORD *)v69 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v16 + 2560);
        *((_DWORD *)v13 + 15) = *(_DWORD *)(v16 + 2564) + *(_DWORD *)(v6 + 116);
        v17 = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v16 + 2560);
        *((_DWORD *)v13 + 16) = v17;
        v18 = *(_DWORD *)(v16 + 2564) + *(_DWORD *)(v6 + 116);
        *((_DWORD *)v13 + 17) = v18;
        *((_QWORD *)v13 + 9) = *(_QWORD *)(v6 + 224);
        *((_DWORD *)v13 + 20) = *(_DWORD *)(v6 + 232);
        if ( (*(_DWORD *)v6 & 1) != 0
          || (*(_DWORD *)v6 & 0x10) != 0
          || *(_DWORD *)(v6 + 80) >= *(_DWORD *)(v6 + 88)
          || (v19 = 1, *(_DWORD *)(v6 + 84) >= *(_DWORD *)(v6 + 92)) )
        {
          v19 = 0;
        }
        *((_DWORD *)v13 + 35) = v19 | *((_DWORD *)v13 + 35) & 0xFFFFFFFE;
        v20 = *(_QWORD *)(v6 + 128);
        if ( !v20 )
          goto LABEL_36;
        *((_DWORD *)v13 + 16) = v17 + *(_DWORD *)(v20 + 32);
        *((_DWORD *)v13 + 17) = v18 + *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v21 = *(_QWORD *)(v6 + 240);
        if ( v21 )
        {
          LOBYTE(v12) = 5;
          v22 = HmgReferenceCheckLock(v21, v12, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, v3, (struct _SURFOBJ *)(v22 + 24));
          *(_DWORD *)(v15 + 252) |= 1u;
          *(_DWORD *)(v15 + 252) ^= ((unsigned __int8)*(_DWORD *)(v15 + 252) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_36;
        }
        SpCreateSurface(v70, v3, *(_QWORD *)(v6 + 128) + 32LL);
        v23 = v71;
        if ( v71 )
        {
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, v3, (struct _SURFOBJ *)(v71 + 24));
          v24 = *(struct _SURFOBJ **)(v15 + 184);
          v67[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v67, v24);
          if ( v67[0] )
          {
            v73 = 0LL;
            v25 = *(_QWORD *)(v6 + 128);
            v26 = *(_QWORD *)(v15 + 184);
            v74 = *(_DWORD *)(v25 + 32);
            v27 = *(_DWORD *)(v25 + 36);
            v60 = 0LL;
            v75 = v27;
            if ( (*(_DWORD *)(v26 + 88) & 0x400) != 0 )
              v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 352);
            else
              v28 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v64) )
              v28 = RedirCopyBits;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)v13 + 5));
            SURFACE::vAppContainerOwner((SURFACE *)(v26 - 24), HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v28)(
              *(_QWORD *)(v15 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v73,
              &v60);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v67);
          v23 = v71;
        }
        else
        {
          v4 = 0;
        }
        if ( v23 )
          DEC_SHARE_REF_CNT(v23);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v70);
        if ( v4 )
        {
LABEL_36:
          memset(v72, 0, 0x88uLL);
          v54 = 39168;
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v66, (struct DWMSPRITE *)((char *)v13 + 88));
          UserGetMiniWinInfo(*((_QWORD *)v13 + 5), (struct tagMINIWINDOWINFO *)v72, &v54);
          v30 = *((_QWORD *)v13 + 5);
          v31 = *(_QWORD *)v13;
          v32 = *((_DWORD *)v13 + 35) & 1;
          v33 = v32 | *(_DWORD *)(v15 + 252) & 0xC | (2
                                                    * (*(_DWORD *)(v15 + 252) & 1 | *((_DWORD *)v13 + 35) & 0x40 | (4 * (*((_DWORD *)v13 + 35) & 0xE))));
          v34 = (void *)UserReferenceDwmApiPort(v32);
          if ( (int)DwmAsyncCreateSprite(v34, v31, v30, (struct DWMSPRITE *)((char *)v13 + 56), v33, (__int64)v72, v54) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v15 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
            {
              *(_DWORD *)(v15 + 252) |= 8u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v15, v3, gpSfmState, v35);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v15,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v57,
                &v56,
                &v55,
                0LL,
                0LL);
              v36 = *(_DWORD *)(v15 + 252);
              v37 = *((_QWORD *)v13 + 13);
              v38 = *((_DWORD *)v13 + 29);
              *((_QWORD *)v13 + 13) = 0LL;
              v39 = (void *)UserReferenceDwmApiPort(v36 & 1);
              updated = DwmAsyncUpdateSprite(v39, (__int64)v13 + 72, (__int64)v72, v57, v56, v55, v38 >= 1, v37);
              v41 = v61;
              v4 = updated >= 0;
              *((_DWORD *)v61 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v65, (struct SFMLOGICALSURFACE *)((char *)v41 + 256));
                v76.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
                v76.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
                *(_QWORD *)&v76.left = 0LL;
                vSpUpdateDirtyRgn(v13, v41, 0LL, (struct _RECTL *)&v76, &v58, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v65);
                v42 = *((_QWORD *)v41 + 23);
                if ( v42 )
                  v43 = *(_QWORD *)(v42 + 8);
                else
                  v43 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v13, v41, v58, v43);
              }
              v3 = (HDEV)v62;
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v66);
        }
        v13 = v69;
        v2 = v63;
      }
      else
      {
        v4 = 0;
      }
      v6 = *(_QWORD *)(v6 + 24);
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      v69 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v68);
      goto LABEL_53;
    }
    v6 = *(_QWORD *)(v6 + 24);
LABEL_53:
    if ( !v4 )
    {
      v44 = 0;
      v45 = (char *)g_pDwmState + 80;
      v46 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v46 != v45 )
      {
        v47 = (unsigned __int64)(v46 - 24) & -(__int64)(v46 != 0LL);
        v46 = *(char **)(v47 + 0x18);
        GreDeleteSprite(v3, 0LL, *(HSPRITE *)v47, 1);
        v45 = (char *)g_pDwmState + 80;
      }
      goto LABEL_72;
    }
  }
  v44 = v4;
  if ( *((_DWORD *)v3 + 35) )
  {
    v48 = (_QWORD *)*((_QWORD *)v3 + 19);
    if ( v48 )
    {
      do
      {
        v49 = (_QWORD *)v48[1];
        if ( *v48 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v48, v2) )
        {
          GdiHintSpriteShape(v3, (HWND)*v48, 0LL, 0, 0);
          GdiDeleteSprite(v3, (HWND)*v48, v48);
        }
        v48 = v49;
      }
      while ( v49 );
    }
  }
  else
  {
    v50 = *((_QWORD *)v3 + 11);
    if ( v50 )
    {
      do
      {
        v51 = *(_QWORD *)(v50 + 72);
        v52 = *(_QWORD *)(v50 + 24);
        if ( v51 && (unsigned int)UserIsWindowOnDesktopAndComposed(v51, v2) )
        {
          if ( *(_QWORD *)(v50 + 240) )
            GdiHintSpriteShape(v3, *(HWND *)(v50 + 72), 0LL, 0, 0);
          GdiDeleteSprite(v3, *(HWND *)(v50 + 72), (void *)v50);
        }
        v50 = v52;
      }
      while ( v52 );
    }
  }
LABEL_72:
  LEAVE_GRE_DWM_CRIT((__int64)v3, v59);
  return v44;
}
