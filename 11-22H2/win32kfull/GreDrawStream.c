/*
 * XREFs of GreDrawStream @ 0x1C00F9710
 * Callers:
 *     NtGdiDrawStream @ 0x1C009BBC0 (NtGdiDrawStream.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00F3A70 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C00F7380 (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FA390 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011CB30 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0277800 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C028E8FC (--0SURFREFDC@@QEAA@XZ.c)
 */

__int64 __fastcall GreDrawStream(Gre::Base *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // r15
  struct Gre::Base::SESSION_GLOBALS *v5; // rsi
  SURFACE *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  char *v11; // rsi
  __int64 top; // rcx
  __int64 right; // r8
  int v14; // eax
  unsigned int *v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // r11d
  int v19; // eax
  signed int v20; // edx
  int v21; // edx
  int v22; // r10d
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  LONG left; // edx
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // eax
  struct SURFACE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  SURFACE *v34; // rbx
  HDC v35; // rdx
  struct _DC_ATTR *UserAttr; // rax
  int v37; // r8d
  LONG v38; // edx
  LONG v39; // r10d
  LONG v40; // eax
  LONG bottom; // r9d
  SURFACE *v42; // rax
  unsigned __int64 v43; // rax
  Gre::Base *v44; // rsi
  Gre::Base *v45; // rdi
  Gre::Base *v46; // rbx
  __int64 v47; // rbx
  int v48; // eax
  struct Gre::Base::SESSION_GLOBALS *v49; // rax
  int v50; // eax
  struct Gre::Base::SESSION_GLOBALS *v51; // rax
  int v52; // eax
  struct Gre::Base::SESSION_GLOBALS *v53; // rax
  int cEntries; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  SURFACE *v58; // rbx
  __int64 v60; // rcx
  DC *v61; // rcx
  struct _DC_ATTR *v62; // rax
  __int64 v63; // rbx
  int v65; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+64h] [rbp-9Ch]
  unsigned int v67; // [rsp+68h] [rbp-98h]
  char *v68; // [rsp+70h] [rbp-90h]
  int v69; // [rsp+78h] [rbp-88h]
  Gre::Base *v70; // [rsp+80h] [rbp-80h] BYREF
  Gre::Base *v71; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v72; // [rsp+90h] [rbp-70h]
  Gre::Base *v73; // [rsp+98h] [rbp-68h] BYREF
  DC *v74; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-58h]
  _BYTE v76[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v77; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v78; // [rsp+D8h] [rbp-28h] BYREF
  char *v79; // [rsp+E0h] [rbp-20h] BYREF
  int v80; // [rsp+E8h] [rbp-18h]
  int v81; // [rsp+ECh] [rbp-14h]
  SURFACE *v82; // [rsp+F0h] [rbp-10h]
  struct _XLATEOBJ *v83; // [rsp+F8h] [rbp-8h]
  _BYTE v84[32]; // [rsp+100h] [rbp+0h] BYREF
  SURFACE *v85; // [rsp+120h] [rbp+20h]
  struct Gre::Base::SESSION_GLOBALS *v86; // [rsp+128h] [rbp+28h]
  Gre::Base *v87; // [rsp+130h] [rbp+30h]
  __int64 v88; // [rsp+138h] [rbp+38h]
  __int128 v89; // [rsp+140h] [rbp+40h] BYREF
  __int64 v90; // [rsp+150h] [rbp+50h]
  int v91; // [rsp+158h] [rbp+58h]
  _QWORD v92[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v93[32]; // [rsp+170h] [rbp+70h] BYREF
  __int16 v94; // [rsp+190h] [rbp+90h]
  __int64 v95; // [rsp+198h] [rbp+98h]
  __int64 v96; // [rsp+1A0h] [rbp+A0h]
  __int64 v97; // [rsp+1A8h] [rbp+A8h]
  __int128 v98; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v99; // [rsp+1C0h] [rbp+C0h]
  __int128 v100; // [rsp+1D0h] [rbp+D0h]
  __int128 v101; // [rsp+1E0h] [rbp+E0h]
  __int64 v102; // [rsp+1F0h] [rbp+F0h]
  struct _RECTL v103; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v104; // [rsp+210h] [rbp+110h] BYREF

  v66 = a2;
  v87 = a1;
  v4 = 0LL;
  v5 = Gre::Base::Globals(a1);
  v86 = v5;
  v75 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v76);
  v74 = 0LL;
  SURFREFDC::SURFREFDC((SURFREFDC *)v84);
  v65 = 0;
  v79 = 0LL;
  v81 = 0;
  v92[0] = 0LL;
  v92[1] = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v93);
  v94 = 256;
  v89 = 0LL;
  v90 = 0LL;
  v6 = 0LL;
  v91 = 0;
  v7 = 0LL;
  v92[0] = 0LL;
  v8 = 0LL;
  v97 = 0LL;
  v9 = 0LL;
  v96 = 0LL;
  v95 = 0LL;
  v10 = *((_QWORD *)v5 + 751);
  v11 = 0LL;
  v88 = v10;
  v102 = 0LL;
  v82 = 0LL;
  v77 = 0LL;
  v83 = 0LL;
  v78 = 0LL;
  v69 = 0;
  v68 = 0LL;
  v98 = 0LL;
  v67 = 0;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  top = *(_QWORD *)(SGDGetSessionState(0LL) + 32);
  if ( !*(_DWORD *)(top + 8740) || v66 < 4 || (v14 = *a3, v15 = a3 + 1, v72 = v15, v14 != 1148352339) )
  {
LABEL_135:
    LODWORD(v45) = 0;
    goto LABEL_136;
  }
  v16 = v66 - 4;
  v66 = v16;
  if ( (unsigned int)v16 >= 4 )
  {
    while ( 1 )
    {
      top = *v15;
      if ( (_DWORD)top )
      {
        top = (unsigned int)(top - 1);
        if ( (_DWORD)top )
        {
          if ( (_DWORD)top != 8 )
            goto LABEL_132;
          v17 = 60;
          if ( (unsigned int)v16 < 0x3C )
            goto LABEL_132;
          v18 = v15[9];
          if ( (v18 & 0xFFFFFF80) != 0 )
            goto LABEL_132;
          if ( !v6 )
            goto LABEL_132;
          right = v15[5];
          if ( (int)right < 0 )
            goto LABEL_132;
          v19 = v15[6];
          if ( v19 < 0 )
            goto LABEL_132;
          v20 = v15[7];
          if ( v20 > *((_DWORD *)v6 + 14) )
            goto LABEL_132;
          top = v15[8];
          if ( (int)top > *((_DWORD *)v6 + 15) )
            goto LABEL_132;
          v21 = v20 - right;
          top = (unsigned int)(top - v19);
          if ( v21 <= 0 )
            goto LABEL_132;
          if ( (int)top <= 0 )
            goto LABEL_132;
          if ( (v18 & 0x20) == 0 )
          {
            v22 = v15[10];
            if ( v22 < 0 )
              goto LABEL_132;
            v23 = v15[11];
            if ( v23 < 0 )
              goto LABEL_132;
            v24 = v15[12];
            if ( v24 < 0 )
              goto LABEL_132;
            right = v15[13];
            if ( (int)right < 0
              || v22 > v21
              || v23 > v21
              || v24 > (int)top
              || (int)right > (int)top
              || v22 + v23 > v21
              || (int)right + v24 > (int)top )
            {
              goto LABEL_132;
            }
          }
          if ( (v18 & 0xC) == 0xC )
            goto LABEL_132;
          if ( (v18 & 8) != 0 )
          {
            v15[14] = ulGetNearestIndexFromColorref(v4, v7, v15[14], 1LL);
          }
          else
          {
            v25 = v69;
            if ( (v18 & 4) != 0 )
              v25 = 1;
            v69 = v25;
          }
          if ( v68 )
          {
            left = v104.left;
            right = (unsigned int)v104.right;
            if ( v104.left == v104.right || (top = (unsigned int)v104.top, v104.top == v104.bottom) )
            {
              v104 = *(struct _RECTL *)(v15 + 1);
            }
            else
            {
              if ( (int)v15[1] < v104.left )
                left = v15[1];
              v27 = v15[2];
              v104.left = left;
              if ( v27 < v104.top )
                top = (unsigned int)v27;
              v28 = v15[3];
              v104.top = top;
              if ( v28 > v104.right )
                right = (unsigned int)v28;
              v29 = v15[4];
              v104.right = right;
              if ( v29 > v104.bottom )
                v104.bottom = v29;
            }
          }
          else
          {
            v104 = *(struct _RECTL *)(v15 + 1);
            v68 = (char *)v15;
          }
          goto LABEL_100;
        }
        if ( !v11 )
        {
          top = (__int64)v85;
          if ( v85 )
          {
            if ( v85 == SURFACE::pdibDefault )
            {
              DEC_SHARE_REF_CNT(v85);
            }
            else
            {
              GreAcquireHmgrSemaphore(v85, v16, right, 1LL);
              SURFACE::vDec_cRef(v85);
              GreReleaseHmgrSemaphore();
            }
            v16 = v66;
            v85 = 0LL;
          }
          v17 = 8;
          if ( (unsigned int)v16 < 8 )
            goto LABEL_132;
          if ( !v67 )
            goto LABEL_132;
          LOBYTE(v16) = 5;
          v30 = (struct SURFACE *)HmgShareLockCheck((int)v15[1], v16);
          v77 = v30;
          v6 = v30;
          v85 = v30;
          if ( !v30 )
            goto LABEL_132;
          top = (__int64)SURFACE::pdibDefault;
          if ( v30 != SURFACE::pdibDefault )
          {
            GreAcquireHmgrSemaphore(SURFACE::pdibDefault, v31, v32, v33);
            v34 = v85;
            INC_SHARE_REF_CNT(v85);
            ++*((_DWORD *)v34 + 42);
            DEC_SHARE_REF_CNT(v85);
            GreReleaseHmgrSemaphore();
            v6 = v85;
            v15 = v72;
            v77 = v85;
          }
          if ( !v6 )
            goto LABEL_132;
          v4 = *((_QWORD *)v6 + 16);
          v7 = *((_QWORD *)v86 + 750);
          if ( !v4
            || (*(_DWORD *)(v4 + 24) & 0x2000) != 0
            || v6 == v82
            || *((_DWORD *)v6 + 24) != 6
            || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                &v78,
                                0LL,
                                *((unsigned int *)v74 + 30),
                                v4,
                                v8,
                                v7,
                                v9,
                                *(_DWORD *)(*((_QWORD *)v74 + 122) + 184LL),
                                *(_DWORD *)(*((_QWORD *)v74 + 122) + 176LL),
                                0,
                                0) )
          {
            goto LABEL_132;
          }
          v83 = v78;
          goto LABEL_100;
        }
      }
      else if ( !v11 )
      {
        v17 = 24;
        if ( (unsigned int)v16 < 0x18 )
          goto LABEL_132;
        v35 = (HDC)(int)v15[1];
        if ( v35 != (HDC)v87 )
          goto LABEL_132;
        top = v67;
        if ( !v67 )
        {
          XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v74, v35);
          if ( !v74 )
            goto LABEL_132;
          if ( (*((_DWORD *)v74 + 11) & 2) == 0 )
          {
            if ( !HIDWORD(v75) )
            {
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v74);
              if ( UserAttr )
              {
                if ( !DC::SaveAttributes(v74, UserAttr) )
                {
                  _InterlockedDecrement((volatile signed __int32 *)v74 + 3);
                  LODWORD(v45) = v65;
                  v74 = 0LL;
                  goto LABEL_136;
                }
              }
            }
            *((_DWORD *)v74 + 11) |= 2u;
            LODWORD(v75) = 1;
          }
          if ( (*((_DWORD *)v74 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(v74);
          top = v67;
        }
        if ( !v74
          || (*((_DWORD *)v74 + 9) & 0x10000) != 0
          || !(_DWORD)top && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v89, (struct XDCOBJ *)&v74, 0) )
        {
          goto LABEL_132;
        }
        v80 = *(_DWORD *)(*((_QWORD *)v74 + 122) + 208LL);
        v81 = *(_DWORD *)(*((_QWORD *)v74 + 122) + 108LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v74 + 122) + 340LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v79, (struct XDCOBJ *)&v74, 0x204u, 0);
          top = (__int64)v79;
        }
        else
        {
          top = (__int64)v74 + 320;
          v79 = (char *)v74 + 320;
        }
        v37 = *(_DWORD *)(top + 32);
        if ( (v37 & 1) == 0 )
          goto LABEL_132;
        v38 = v15[2];
        right = v37 & 0x43;
        v39 = v15[3];
        v40 = v15[4];
        bottom = v15[5];
        v103.left = v38;
        v103.top = v39;
        v103.right = v40;
        v103.bottom = bottom;
        if ( (_BYTE)right != 67 )
        {
          bCvtPts1(top, &v103.left, 2LL);
          bottom = v103.bottom;
          v40 = v103.right;
          v39 = v103.top;
          v38 = v103.left;
        }
        if ( v81 )
        {
          ++v38;
          ++v40;
          v103.left = v38;
          v103.right = v40;
        }
        if ( v38 > v40 )
        {
          v103.left = v40;
          v103.right = v38;
        }
        if ( v39 > bottom )
        {
          v103.top = bottom;
          v103.bottom = v39;
        }
        top = *((unsigned int *)v74 + 9);
        if ( (top & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v74, (struct ERECTL *)&v103);
        v42 = (SURFACE *)*((_QWORD *)v74 + 62);
        v82 = v42;
        if ( !v42 )
          goto LABEL_132;
        v8 = *((_QWORD *)v42 + 16);
        v9 = *((_QWORD *)v74 + 11);
        if ( v4 )
        {
          if ( (*(_DWORD *)(v4 + 24) & 0x2000) != 0 )
            goto LABEL_132;
        }
        v67 = 1;
LABEL_100:
        v16 = v66 - v17;
        v43 = v17;
        v11 = v68;
        v66 = v16;
        v15 += v43 >> 2;
        v72 = v15;
        if ( (_DWORD)v16 || !v68 )
          goto LABEL_128;
      }
      if ( v74 && v6 )
      {
        *(_QWORD *)&v98 = 72LL;
        v44 = 0LL;
        v70 = 0LL;
        v45 = 0LL;
        v71 = 0LL;
        v46 = 0LL;
        v73 = 0LL;
        *((_QWORD *)&v98 + 1) = 33488896LL;
        *(_QWORD *)&v99 = 0LL;
        if ( v69 )
        {
          if ( (unsigned int)(*((_DWORD *)v82 + 24) - 1) <= 2 )
          {
            EXLATEOBJ::vAltUnlock(&v73);
            EXLATEOBJ::vAltUnlock(&v71);
            EXLATEOBJ::vAltUnlock(&v70);
            LODWORD(v45) = 0;
            goto LABEL_136;
          }
          v47 = v88;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v70, 0LL, 0LL, v4, v88, v7, v7, 0, 0, 0, 0) )
          {
            EXLATEOBJ::vAltUnlock(&v73);
            EXLATEOBJ::vAltUnlock(&v71);
            EXLATEOBJ::vAltUnlock(&v70);
            goto LABEL_135;
          }
          v44 = v70;
          *(_QWORD *)&v100 = v70;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v71, 0LL, 0LL, v8, v47, v9, v9, 0, 0, 0, 0) )
          {
            EXLATEOBJ::vAltUnlock(&v73);
            EXLATEOBJ::vAltUnlock(&v71);
            EXLATEOBJ::vAltUnlock(&v70);
            goto LABEL_136;
          }
          v45 = v71;
          *((_QWORD *)&v100 + 1) = v71;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v73, 0LL, 0LL, v47, v8, v9, v9, 0, 0, 0, 0) )
            goto LABEL_131;
          v46 = v73;
          *(_QWORD *)&v101 = v73;
        }
        else
        {
          *(_QWORD *)&v101 = 0LL;
          v100 = 0uLL;
        }
        if ( !(unsigned int)NtGdiDrawStreamInternal(
                              (struct XDCOBJ *)&v74,
                              (struct EXFORMOBJ *)&v79,
                              v77,
                              v83,
                              &v103,
                              &v104,
                              (int)v72 - (int)v68,
                              v68,
                              (struct _DRAWSTREAMINFO *)&v98) )
        {
LABEL_131:
          EXLATEOBJ::vAltUnlock(&v73);
          EXLATEOBJ::vAltUnlock(&v71);
          EXLATEOBJ::vAltUnlock(&v70);
LABEL_132:
          LODWORD(v45) = v65;
          goto LABEL_136;
        }
        top = 0LL;
        v68 = 0LL;
        v69 = 0;
        if ( v46 )
        {
          v48 = *((_DWORD *)v46 + 9);
          if ( v48 < 0 )
          {
            if ( v48 == -1 )
              FreeThreadBufferWithTag(v46);
          }
          else
          {
            v49 = Gre::Base::Globals(0LL);
            top = 32LL * *((int *)v46 + 9);
            _InterlockedDecrement((volatile signed __int32 *)((char *)v49 + top + 6632));
            v44 = v70;
            v45 = v71;
          }
        }
        if ( v45 )
        {
          v50 = *((_DWORD *)v45 + 9);
          if ( v50 < 0 )
          {
            if ( v50 == -1 )
              FreeThreadBufferWithTag(v45);
          }
          else
          {
            v51 = Gre::Base::Globals((Gre::Base *)top);
            top = 32LL * *((int *)v45 + 9);
            _InterlockedDecrement((volatile signed __int32 *)((char *)v51 + top + 6632));
            v44 = v70;
          }
        }
        if ( v44 )
        {
          v52 = *((_DWORD *)v44 + 9);
          if ( v52 < 0 )
          {
            if ( v52 == -1 )
              FreeThreadBufferWithTag(v44);
          }
          else
          {
            v53 = Gre::Base::Globals((Gre::Base *)top);
            top = 32LL * *((int *)v44 + 9);
            _InterlockedDecrement((volatile signed __int32 *)((char *)v53 + top + 6632));
          }
        }
        v15 = v72;
        v16 = v66;
        v11 = v68;
      }
LABEL_128:
      if ( (unsigned int)v16 < 4 )
        break;
      v6 = v77;
    }
  }
  LODWORD(v45) = 1;
LABEL_136:
  if ( v78 )
  {
    cEntries = v78[1].cEntries;
    if ( cEntries < 0 )
    {
      if ( cEntries == -1 )
        FreeThreadBufferWithTag(v78);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)top) + 8 * (int)v78[1].cEntries
                                                                                            + 1658);
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v89);
  if ( v92[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v92);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v93);
  if ( v85 )
  {
    if ( v85 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v85);
    }
    else
    {
      GreAcquireHmgrSemaphore(v85, v55, v56, v57);
      v58 = v85;
      DEC_SHARE_REF_CNT(v85);
      if ( (*((_DWORD *)v58 + 42))-- == 1 )
      {
        if ( (*(_DWORD *)v58 & 0x800000) != 0 && _bittest16((const signed __int16 *)v58 + 51, 0xAu) )
        {
          v60 = *(_QWORD *)v58;
          *((_WORD *)v58 + 51) &= ~0x400u;
          GreMakeBitmapNonStock(v60);
        }
        *((_QWORD *)v58 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
    v85 = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v84);
  v61 = v74;
  if ( v74 )
  {
    if ( (_DWORD)v75 && (*((_DWORD *)v74 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v75) )
      {
        v62 = XDCOBJ::GetUserAttr((XDCOBJ *)&v74);
        v61 = v74;
        if ( v62 )
        {
          DC::RestoreAttributes(v74, v62);
          v61 = v74;
        }
      }
      *((_DWORD *)v61 + 11) &= ~2u;
      v61 = v74;
      LODWORD(v75) = 0;
    }
    v65 = 0;
    v63 = *(_QWORD *)v61;
    HmgDecrementExclusiveReferenceCountEx(v61, HIDWORD(v75), &v65);
    if ( v65 )
      GrepDeleteDC(v63, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v76);
  return (unsigned int)v45;
}
