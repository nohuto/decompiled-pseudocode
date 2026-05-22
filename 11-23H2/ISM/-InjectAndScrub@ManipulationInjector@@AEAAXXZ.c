/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x18011C42C
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x18011BD68 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x18011BDEC (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011CC48 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011CCEC (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x18011CD88 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x18011D158 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x18011D56C (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800D1944 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x18011BCF0 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  unsigned int *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // r11d
  int v10; // r15d
  int j; // r14d
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rax
  __int128 v15; // xmm1
  unsigned __int64 v16; // r8
  _OWORD *v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  int v25; // ecx
  void (__fastcall ***v26)(_QWORD, __int64, _DWORD *); // rcx
  unsigned int k; // r8d
  __int64 v28; // r9
  char *v29; // rcx
  __int64 v30; // r9
  _OWORD *v31; // rcx
  _OWORD *v32; // r8
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  DWORD v41; // eax
  const char *v42; // r9
  unsigned int v43; // r13d
  __int16 v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int16 v47; // r11
  int v48; // r10d
  char v49; // al
  int v50; // r15d
  int v51; // r12d
  struct tagPOINT v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  DWORD v55; // eax
  DWORD LastError; // eax
  unsigned int v57; // [rsp+28h] [rbp-E0h]
  unsigned __int16 v58; // [rsp+38h] [rbp-D0h]
  __int64 v59; // [rsp+40h] [rbp-C8h]
  __int64 v60; // [rsp+40h] [rbp-C8h]
  int v61; // [rsp+48h] [rbp-C0h]
  int v62; // [rsp+50h] [rbp-B8h]
  int v63; // [rsp+54h] [rbp-B4h]
  __int64 v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+60h] [rbp-A8h]
  __int64 v66; // [rsp+68h] [rbp-A0h]
  int v67; // [rsp+70h] [rbp-98h]
  __int64 v68; // [rsp+78h] [rbp-90h]
  int v69; // [rsp+80h] [rbp-88h]
  __int64 v70; // [rsp+88h] [rbp-80h]
  int v71; // [rsp+90h] [rbp-78h]
  __int64 v72; // [rsp+98h] [rbp-70h]
  int v73; // [rsp+A0h] [rbp-68h]
  int v74; // [rsp+B0h] [rbp-58h]
  __int64 v75; // [rsp+B8h] [rbp-50h]
  int v76; // [rsp+C0h] [rbp-48h]
  __int64 v77; // [rsp+C8h] [rbp-40h]
  int v78; // [rsp+D0h] [rbp-38h]
  int v79; // [rsp+E0h] [rbp-28h]
  struct tagPOINT v80; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v81[3]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v82[70]; // [rsp+104h] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  v4 = 0LL;
  if ( *((_BYTE *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
      DbgPrint(
        "Injecting %d (%d, %d) 0x%08X\n",
        *((_DWORD *)this + 38 * i + 29),
        *((_DWORD *)this + 38 * i + 36),
        *((_DWORD *)this + 38 * i + 37),
        *((_DWORD *)this + 38 * i + 31));
  }
  if ( *(_DWORD *)this == 1 )
  {
    v7 = (unsigned int *)((char *)this + 48);
    if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
    {
      LastError = GetLastError();
      if ( LastError )
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          902LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)LastError,
          v57);
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
    {
      if ( *(_DWORD *)this == 3 )
      {
        v7 = (unsigned int *)((char *)this + 48);
        if ( *((_DWORD *)this + 12) )
        {
          v30 = *v7;
          v31 = v81;
          v32 = (_OWORD *)((char *)this + 112);
          do
          {
            v33 = v32[1];
            *v31 = *v32;
            v34 = v32[2];
            v31[1] = v33;
            v35 = v32[3];
            v31[2] = v34;
            v36 = v32[4];
            v31[3] = v35;
            v37 = v32[5];
            v31[4] = v36;
            v38 = v32[6];
            v31[5] = v37;
            v39 = v32[7];
            v31[6] = v38;
            v40 = v32[8];
            v32 = (_OWORD *)((char *)v32 + 152);
            v31[7] = v39;
            v31[8] = v40;
            v31 += 9;
            --v30;
          }
          while ( v30 );
        }
        if ( !(unsigned int)InjectTouchInput(*v7, v81) )
        {
          v41 = GetLastError();
          if ( v41 )
            wil::details::in1diag3::_FailFast_Win32(
              retaddr,
              973LL,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              (const char *)v41,
              v57);
        }
      }
      else
      {
        if ( *(_DWORD *)this != 4 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x3FE,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            a4);
        ++*((_DWORD *)this + 200);
        v7 = (unsigned int *)((char *)this + 48);
        v8 = *((unsigned int *)this + 12);
        v9 = 0;
        v10 = *((_DWORD *)this + 200);
        for ( j = *((_DWORD *)this + 201);
              v9 < (unsigned int)v8;
              *(_QWORD *)((char *)&v82[18 * v12 + 4] + 4) = *(_QWORD *)((char *)&v82[18 * v12 + 2] + 4) )
        {
          v12 = v9;
          v13 = 152LL * v9;
          v14 = *(_QWORD *)((char *)this + v13 + 144);
          if ( j )
          {
            *(_DWORD *)((char *)this + v13 + 216) = v14 - *((_DWORD *)this + 201);
            *(_DWORD *)((char *)this + v13 + 224) = v14 + *((_DWORD *)this + 201);
            *(_DWORD *)((char *)this + v13 + 220) = HIDWORD(v14) - *((_DWORD *)this + 201);
            *(_DWORD *)((char *)this + v13 + 228) = HIDWORD(v14) + *((_DWORD *)this + 201);
            *(_DWORD *)((char *)this + v13 + 232) = v14 - *((_DWORD *)this + 201);
            *(_DWORD *)((char *)this + v13 + 240) = v14 + *((_DWORD *)this + 201);
            *(_DWORD *)((char *)this + v13 + 236) = HIDWORD(v14) - *((_DWORD *)this + 201);
            *(_DWORD *)((char *)this + v13 + 244) = HIDWORD(v14) + *((_DWORD *)this + 201);
            v8 = *v7;
            LODWORD(v82[18 * v9 + 11]) |= 1u;
          }
          v15 = *(_OWORD *)((char *)this + v13 + 128);
          v16 = 144LL * v9;
          v17 = &v81[v16 / 4];
          *v17 = *(_OWORD *)((char *)this + v13 + 112);
          v18 = *(_OWORD *)((char *)this + v13 + 144);
          v17[1] = v15;
          v19 = *(_OWORD *)((char *)this + v13 + 160);
          v17[2] = v18;
          v20 = *(_OWORD *)((char *)this + v13 + 176);
          v17[3] = v19;
          v21 = *(_OWORD *)((char *)this + v13 + 192);
          v17[4] = v20;
          v22 = *(_OWORD *)((char *)this + v13 + 208);
          v17[5] = v21;
          v23 = *(_OWORD *)((char *)this + v13 + 224);
          v17[6] = v22;
          v24 = *(_OWORD *)((char *)this + v13 + 240);
          v17[7] = v23;
          v17[8] = v24;
          v25 = v82[v16 / 8];
          v81[v16 / 4 + 2] = v10;
          LODWORD(v82[v16 / 8]) = v25 | 0x4000;
          if ( (v25 & 4) != 0 )
            LODWORD(v82[18 * v9]) = v25 | 0x4010;
          ++v9;
        }
        v26 = (void (__fastcall ***)(_QWORD, __int64, _DWORD *))*((_QWORD *)this + 99);
        LODWORD(v82[0]) |= 0x2000u;
        (**v26)(v26, v8, v81);
      }
      goto LABEL_16;
    }
    v7 = (unsigned int *)((char *)this + 48);
    v42 = (const char *)*((unsigned int *)this + 12);
    v43 = 10 * (_DWORD)v42 + 1;
    if ( (unsigned int)((_DWORD)v42 - 1) > 3 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x38F,
        (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v42);
    if ( (_DWORD)v42 )
    {
      v44 = 1;
      while ( 1 )
      {
        v58 = v44;
        v45 = (unsigned __int16)(v44 - 1);
        v46 = 152 * v45;
        v47 = 10 * v45;
        if ( (*((_BYTE *)this + 152 * v45 + 124) & 4) != 0 )
          break;
        v48 = 0;
        v49 = 0;
        if ( (*((_BYTE *)this + v46 + 124) & 2) == 0 )
          goto LABEL_33;
LABEL_34:
        if ( !v49 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x397,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v42);
        v62 = 100 * v48;
        v63 = *(_DWORD *)((char *)this + v46 + 116);
        v50 = v48 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
        v51 = v48 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
        if ( *((_DWORD *)this + 22) == 1 )
          v52 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                         this,
                                         (struct tagPOINT)&v80,
                                         *(_QWORD *)((char *)this + v46 + 144));
        else
          v52 = *(struct tagPOINT *)((char *)this + v46 + 152);
        HIDWORD(v64) = v52.x;
        HIDWORD(v66) = v52.y;
        LODWORD(v64) = 3145729;
        v53 = 3LL * v47;
        LOWORD(v65) = v44;
        *(_QWORD *)&v81[v53] = v64;
        v81[v53 + 2] = v65;
        LODWORD(v66) = 3211265;
        *(_QWORD *)((char *)v82 + 4 * v53) = v66;
        LOWORD(v67) = v44;
        *((_DWORD *)&v82[1] + v53) = v67;
        LODWORD(v68) = 4325389;
        HIDWORD(v68) = v48;
        *(_QWORD *)((char *)&v82[1] + 4 * v53 + 4) = v68;
        LOWORD(v69) = v44;
        *((_DWORD *)&v82[2] + v53 + 1) = v69;
        LODWORD(v70) = 3276813;
        HIDWORD(v70) = v48;
        *(_QWORD *)((char *)&v82[3] + 4 * v53) = v70;
        LOWORD(v71) = v44;
        *((_DWORD *)&v82[4] + v53) = v71;
        HIDWORD(v72) = v62;
        LODWORD(v72) = 3145741;
        *(_QWORD *)((char *)&v82[4] + 4 * v53 + 4) = v72;
        LOWORD(v73) = v44;
        *((_DWORD *)&v82[5] + v53 + 1) = v73;
        *(_QWORD *)((char *)&v82[6] + 4 * v53) = 0x10047000DLL;
        LOWORD(v74) = v44;
        *((_DWORD *)&v82[7] + v53) = v74;
        LODWORD(v75) = 4718605;
        HIDWORD(v75) = v50;
        *(_QWORD *)((char *)&v82[7] + 4 * v53 + 4) = v75;
        LOWORD(v76) = v44;
        *((_DWORD *)&v82[8] + v53 + 1) = v76;
        LODWORD(v77) = 4784141;
        HIDWORD(v77) = v51;
        *(_QWORD *)((char *)&v82[9] + 4 * v53) = v77;
        LOWORD(v78) = v44;
        *((_DWORD *)&v82[10] + v53) = v78;
        *(_QWORD *)((char *)&v82[10] + 4 * v53 + 4) = 4128781LL;
        LOWORD(v79) = v44;
        *((_DWORD *)&v82[11] + v53 + 1) = v79;
        HIDWORD(v59) = v63;
        LODWORD(v59) = 5308429;
        LOWORD(v61) = v44++;
        *(_QWORD *)((char *)&v82[12] + 4 * v53) = v59;
        *((_DWORD *)&v82[13] + v53) = v61;
        if ( v58 >= (unsigned int)v42 )
          goto LABEL_39;
      }
      v48 = 1;
LABEL_33:
      v49 = 1;
      goto LABEL_34;
    }
LABEL_39:
    HIDWORD(v60) = (unsigned __int16)v42;
    LODWORD(v60) = 5505037;
    LOWORD(v61) = 0;
    v54 = 3LL * (unsigned __int16)(10 * (_WORD)v42);
    *(_QWORD *)&v81[v54] = v60;
    v81[v54 + 2] = v61;
    if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v81, v43) )
    {
      v55 = GetLastError();
      if ( v55 )
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          957LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)v55,
          v57);
    }
  }
LABEL_16:
  for ( k = 0; k < *v7; ++k )
  {
    v28 = 152LL * k;
    if ( (*(_DWORD *)((_BYTE *)this + v28 + 124) & 0xFFFBFFFF) != 0 )
    {
      if ( k != (_DWORD)v4 )
      {
        v29 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v29 + 104) = *(_OWORD *)((char *)this + v28 + 104);
        *(_OWORD *)(v29 + 120) = *(_OWORD *)((char *)this + v28 + 120);
        *(_OWORD *)(v29 + 136) = *(_OWORD *)((char *)this + v28 + 136);
        *(_OWORD *)(v29 + 152) = *(_OWORD *)((char *)this + v28 + 152);
        *(_OWORD *)(v29 + 168) = *(_OWORD *)((char *)this + v28 + 168);
        *(_OWORD *)(v29 + 184) = *(_OWORD *)((char *)this + v28 + 184);
        *(_OWORD *)(v29 + 200) = *(_OWORD *)((char *)this + v28 + 200);
        *(_OWORD *)(v29 + 216) = *(_OWORD *)((char *)this + v28 + 216);
        *(_OWORD *)(v29 + 232) = *(_OWORD *)((char *)this + v28 + 232);
        *((_QWORD *)v29 + 31) = *(_QWORD *)((char *)this + v28 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + k + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
    else
    {
      *((_BYTE *)this + *(unsigned int *)((char *)this + v28 + 116) + 728) = 1;
    }
  }
  *v7 = v4;
}
