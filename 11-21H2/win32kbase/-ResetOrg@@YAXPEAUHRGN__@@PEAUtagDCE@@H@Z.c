/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0
 * Callers:
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C002C8B0 (UserSetDCVisRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C006D8F4 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorRectForDpi @ 0x1C006DCC8 (GetMonitorRectForDpi.c)
 *     IntersectRect @ 0x1C006EC48 (IntersectRect.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     IsGetLayeredOrRedirectedParentSupported @ 0x1C00A86E4 (IsGetLayeredOrRedirectedParentSupported.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  unsigned int v8; // r15d
  int v9; // r14d
  struct tagMONITOR *v10; // rsi
  int v11; // eax
  int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // esi
  int v18; // ebx
  int v19; // esi
  int v20; // ebx
  HRGN v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r8d
  unsigned int *i; // rax
  __int64 v31; // rdx
  int v32; // ebx
  __int64 v33; // rdx
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  __int128 v37; // xmm0
  __int64 v38; // rcx
  int v39; // eax
  unsigned int *v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // xmm0_8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int128 v47; // [rsp+38h] [rbp-49h] BYREF
  int v48; // [rsp+48h] [rbp-39h]
  HRGN v49; // [rsp+50h] [rbp-31h]
  _QWORD v50[7]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v51; // [rsp+90h] [rbp+Fh] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 16);
  v49 = a1;
  v6 = *(_QWORD *)(v3 + 40);
  v48 = a3;
  LODWORD(v3) = *(_WORD *)(v6 + 42) & 0x2FFF;
  v47 = 0LL;
  if ( (_DWORD)v3 == 669 )
  {
    v41 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v42 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
    v8 = v42 - v41;
    v9 = HIDWORD(v42) - HIDWORD(v41);
    DWORD2(v47) = v42 - v41;
    HIDWORD(v47) = HIDWORD(v42) - HIDWORD(v41);
  }
  else
  {
    if ( (v5 & 1) != 0 )
      v7 = *(_OWORD *)(v6 + 88);
    else
      v7 = *(_OWORD *)(v6 + 104);
    v47 = v7;
    v8 = DWORD2(v7);
    v9 = HIDWORD(v7);
  }
  v10 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
  v11 = v5;
  if ( !v10 || (v5 & 0x4000) != 0 )
  {
    v12 = DWORD1(v47);
    v13 = v47;
  }
  else
  {
    v46 = *(_QWORD *)GetMonitorRectForDpi(&v51, v10, 0LL);
    v13 = v47 - v46;
    LODWORD(v47) = v47 - v46;
    v9 -= HIDWORD(v46);
    v12 = DWORD1(v47) - HIDWORD(v46);
    v8 -= v46;
    *((_QWORD *)&v47 + 1) = __PAIR64__(v9, v8);
    v11 = v5;
    DWORD1(v47) -= HIDWORD(v46);
    if ( v49 )
    {
      SetMonitorRegion(v10, v49, v49);
      v11 = *((_DWORD *)a2 + 16);
    }
  }
  if ( (v11 & 0x4000000) != 0 )
    goto LABEL_55;
  if ( qword_1C029C3B8 && (int)qword_1C029C3B8() >= 0 )
  {
    v14 = qword_1C029C3C0 ? qword_1C029C3C0(*((_QWORD *)a2 + 2)) : 0LL;
    if ( v14 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 24LL) & 0x20000000) != 0
        && qword_1C029C3C8
        && (int)qword_1C029C3C8() >= 0
        && qword_1C029C3D0
        && qword_1C029C3D0(v14) )
      {
        v15 = *(_QWORD *)(v14 + 40);
        v16 = *((_QWORD *)a2 + 11);
        v17 = *(_DWORD *)(v15 + 88);
        v18 = *(_DWORD *)(v15 + 92);
        if ( v16 && *((int *)a2 + 16) < 0 )
        {
          LODWORD(v47) = v17 + v13;
          DWORD2(v47) = v17 + v8;
          HIDWORD(v47) = v18 + v9;
          DWORD1(v47) = v18 + v12;
          v51 = *(_OWORD *)GetMonitorRectForDpi(&v51, v16, 0LL);
          IntersectRect(&v47, &v47, &v51);
          v9 = HIDWORD(v47);
          v8 = DWORD2(v47);
          v12 = DWORD1(v47);
          v13 = v47;
        }
        v19 = -v17;
        v20 = -v18;
        v13 += v19;
        DWORD2(v47) = v19 + v8;
        v21 = v49;
        v12 += v20;
        *(_QWORD *)&v47 = __PAIR64__(v12, v13);
        HIDWORD(v47) = v20 + v9;
        if ( v49 )
        {
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v50, v49, 0, 0);
          if ( v50[0] )
          {
            if ( *(_DWORD *)(v50[0] + 84LL) != 1 )
            {
              v22 = *(int *)(v50[0] + 96LL);
              v23 = *(int *)(v50[0] + 104LL);
              v24 = *(int *)(v50[0] + 100LL);
              v25 = *(int *)(v50[0] + 108LL);
              LODWORD(v51) = v22;
              if ( (int)v22 < (int)v23 && (int)v24 < (int)v25 )
              {
                v26 = v19 + v22;
                if ( (unsigned __int64)(v26 + 0x80000000LL) > 0xFFFFFFFF
                  || (LODWORD(v51) = v19 + v22, v27 = v20 + v25, (unsigned __int64)(v27 + 0x80000000LL) > 0xFFFFFFFF)
                  || (v28 = v19 + v23, HIDWORD(v51) = v20 + v25, (unsigned __int64)(v28 + 0x80000000LL) > 0xFFFFFFFF)
                  || (DWORD2(v51) = v28, (unsigned __int64)(v20 + v24 + 0x80000000LL) > 0xFFFFFFFF)
                  || (DWORD1(v51) = v20 + v24, (((v26 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0)
                  || (((v27 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || (((v28 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || ((((v20 + (_DWORD)v24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
                {
                  EngSetLastError(0x216u);
                }
                else
                {
                  *(_OWORD *)(v50[0] + 96LL) = v51;
                  v29 = *(_DWORD *)(v50[0] + 84LL);
                  for ( i = *(unsigned int **)(v50[0] + 88LL);
                        v29;
                        i = (unsigned int *)((char *)i + (unsigned int)(4 * v31 + 16)) )
                  {
                    i[1] += v20;
                    --v29;
                    i[2] += v20;
                    v31 = *i;
                    if ( (_DWORD)v31 )
                    {
                      v40 = &i[v31 + 3];
                      do
                      {
                        *--v40 += v19;
                        LODWORD(v31) = v31 - 1;
                      }
                      while ( (_DWORD)v31 );
                      LODWORD(v31) = *i;
                    }
                  }
                  i[-*(i - 1) - 2] = 0x7FFFFFFF;
                  *(_DWORD *)(*(_QWORD *)(v50[0] + 88LL) + 4LL) = 0x80000000;
                }
              }
            }
          }
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v50);
          v21 = v49;
        }
LABEL_37:
        v32 = v48;
        goto LABEL_38;
      }
LABEL_55:
      v21 = v49;
      if ( v49 )
        GreSetRectRgn(v49, 0);
      goto LABEL_37;
    }
  }
  v32 = v48;
  if ( v48 )
  {
    v21 = v49;
    if ( (int)IsGetLayeredOrRedirectedParentSupported() >= 0 && v49 && (*((_DWORD *)a2 + 16) & 0x4000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45);
  }
  else
  {
    v21 = v49;
  }
LABEL_38:
  DCOBJA::DCOBJA((DCOBJA *)v50, *((HDC *)a2 + 1));
  if ( v50[0] )
  {
    *(_DWORD *)(v50[0] + 8LL * (*(_DWORD *)(v50[0] + 40LL) & 1) + 1016) = v13;
    *(_DWORD *)(v50[0] + 8LL * (*(_DWORD *)(v50[0] + 40LL) & 1) + 1020) = v12;
    v33 = v50[0];
    if ( (*(_DWORD *)(v50[0] + 40LL) & 1) != 0 )
    {
      v34 = *(_DWORD *)(v50[0] + 1024LL);
      v35 = *(_DWORD *)(v50[0] + 1028LL);
    }
    else
    {
      v34 = *(_DWORD *)(v50[0] + 1016LL);
      v35 = *(_DWORD *)(v50[0] + 1020LL);
    }
    v36 = *(_DWORD *)(v50[0] + 128LL) + v35;
    v37 = v47;
    *(_DWORD *)(v50[0] + 1192LL) = *(_DWORD *)(v50[0] + 124LL) + v34;
    *(_DWORD *)(v33 + 1196) = v36;
    *(_OWORD *)(v50[0] + 1032LL) = v37;
    v38 = v50[0];
    v39 = *(_DWORD *)(v50[0] + 520LL);
    if ( (v39 & 1) != 0 && (v39 & 2) == 0 )
    {
      *(_DWORD *)(v50[0] + 36LL) |= 0x10u;
      *(_DWORD *)(v38 + 520) = v39 | 4;
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v50);
  if ( v32 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v50, *((HDC *)a2 + 1));
    GreSelectVisRgnInternal(v50, v21, 1LL);
    DCOBJA::~DCOBJA((DCOBJA *)v50);
  }
}
