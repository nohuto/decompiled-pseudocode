/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002C0D0
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C001D470 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00144D4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C002B38C (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C0033084 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned __int16 *v4; // r13
  KIRQL v5; // al
  __int64 v6; // r15
  size_t v7; // r14
  int v8; // ebx
  _QWORD *v9; // r12
  unsigned __int16 *v10; // rbx
  unsigned __int8 *v11; // rcx
  _QWORD *v12; // r10
  unsigned __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // rax
  unsigned __int16 *v16; // r12
  int v17; // r8d
  int v18; // r9d
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // r14
  _DWORD *v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // r8
  int v24; // r15d
  char *v25; // rbx
  size_t v26; // r15
  _QWORD *v27; // r15
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  _DWORD *v30; // r15
  unsigned __int8 *v31; // r8
  _DWORD *v32; // rbx
  unsigned int v33; // r14d
  unsigned __int64 v34; // r11
  __int64 v35; // r10
  _BYTE *v36; // rax
  unsigned __int16 v37; // r9
  __int64 v38; // rax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  unsigned __int16 v42; // ax
  char v43; // cl
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  _QWORD *v49; // r14
  _QWORD **v50; // rdi
  unsigned __int16 v51; // r9
  unsigned int v52; // r8d
  __int64 v53; // r8
  _QWORD *i; // rax
  _QWORD *v55; // rdx
  unsigned int v56; // ebx
  unsigned int v57; // r10d
  _QWORD *v58; // r9
  unsigned __int16 v59; // r10
  _QWORD *k; // rax
  _QWORD *v61; // rbx
  unsigned int v62; // r12d
  unsigned int v63; // r14d
  char *v64; // r11
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int16 *v67; // r9
  int v68; // r14d
  __int64 v69; // r15
  unsigned int v70; // eax
  void *v71; // rcx
  void *v72; // rcx
  void *v73; // rcx
  __int64 Pool2; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  void *v77; // rcx
  void *v78; // rcx
  void *v79; // rcx
  __int64 v80; // rcx
  _QWORD *v81; // rcx
  __int64 v82; // r8
  unsigned int j; // r9d
  int v84; // ecx
  __int64 v85; // rcx
  _QWORD *v86; // rax
  _QWORD *v87; // rcx
  int v89; // [rsp+28h] [rbp-E0h]
  __int64 v90; // [rsp+30h] [rbp-D8h]
  __int64 v91; // [rsp+48h] [rbp-C0h]
  char v92; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v93; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v94; // [rsp+60h] [rbp-A8h] BYREF
  int v95; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v96; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v97; // [rsp+70h] [rbp-98h]
  __int64 v98; // [rsp+78h] [rbp-90h] BYREF
  __int64 v99; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v100; // [rsp+90h] [rbp-78h]
  _QWORD *v101; // [rsp+98h] [rbp-70h]
  __int64 v102; // [rsp+A0h] [rbp-68h]
  __int128 v103; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-50h]
  __int64 v105; // [rsp+C0h] [rbp-48h]
  __int128 v106; // [rsp+C8h] [rbp-40h]
  __int64 v107; // [rsp+D8h] [rbp-30h]
  unsigned int *v108; // [rsp+E0h] [rbp-28h]
  unsigned __int16 *v109; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v110; // [rsp+F0h] [rbp-18h]
  __int64 *v111; // [rsp+F8h] [rbp-10h]
  _OWORD v112[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v113; // [rsp+120h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 456);
  v2 = 0LL;
  DWORD1(v103) = 0;
  v113 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v112, 0, sizeof(v112));
  LOWORD(v112[0]) = 40;
  v98 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v112);
  v4 = (unsigned __int16 *)*((_QWORD *)&v112[0] + 1);
  v102 = *((_QWORD *)&v112[0] + 1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  v6 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  v111 = (__int64 *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  v107 = 0LL;
  v104 = 0LL;
  v103 = 0LL;
  v105 = 0x100000001LL;
  v106 = 0LL;
  LODWORD(v103) = 56;
  v7 = *(unsigned __int16 *)(*((_QWORD *)v4 + 3) + 2LL);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v103,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v7 + 39,
         &v98,
         a1 + 48);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v90) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
        v90);
    }
    goto LABEL_88;
  }
  v9 = *(_QWORD **)v6;
  v101 = v9;
  *v9 = v98;
  memmove((void *)(*(_QWORD *)v6 + 32LL), *((const void **)v4 + 3), v7);
  LODWORD(v97) = 0;
  v9[3] = v9 + 2;
  v10 = v4 + 20;
  v9[2] = v9 + 2;
  v11 = (unsigned __int8 *)(v4 + 21);
  LODWORD(v12) = (_DWORD)v9 + 32;
  v13 = (unsigned __int64)v4 + *v4;
  v100 = v9 + 4;
  v110 = v13;
  v14 = 0;
  if ( (unsigned __int64)(v4 + 21) < v13 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v99 = 0LL;
      v16 = v10;
      v94 = 0LL;
      v17 = *v11;
      v18 = *((unsigned __int8 *)v10 + 3);
      v91 = *(_QWORD *)(v15 + 1432);
      v92 = 0;
      v19 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v12,
                                 (_DWORD)v12,
                                 v17,
                                 v18,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)&v92,
                                 v91);
      v20 = v19;
      if ( !v19 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_86;
        v37 = 32;
LABEL_85:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          v37,
          (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids);
        goto LABEL_86;
      }
      v21 = *(_DWORD **)(a1 + 2448);
      if ( v21 )
      {
        v22 = 0;
        if ( *v21 )
        {
          while ( *((_BYTE *)v21 + 2 * v22 + 5) != v19[3] || *((_BYTE *)v21 + 2 * v22 + 4) != v19[2] )
          {
            if ( ++v22 >= *v21 )
              goto LABEL_13;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
        }
      }
LABEL_13:
      v23 = (unsigned int)ExDefaultNonPagedPoolType;
      *((_DWORD *)v10 + 4) = v19[4];
      v24 = v19[4] + v14;
      v108 = (unsigned int *)(v10 + 8);
      v25 = (char *)v10 + *v10;
      LODWORD(v97) = v24;
      v109 = (unsigned __int16 *)v25;
      v107 = 0LL;
      v104 = 0LL;
      v105 = 0x100000001LL;
      v103 = 0LL;
      v106 = 0LL;
      LODWORD(v103) = 56;
      v26 = 72LL * *v108 + 40;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             &v103,
             v23,
             1681082453LL,
             v26,
             &v99,
             &v94);
      if ( v8 < 0 )
        break;
      *((_QWORD *)v16 + 1) = v94;
      memset(v94, 0, v26);
      *(_QWORD *)v94 = v99;
      *((_QWORD *)v94 + 4) = v20;
      *((_DWORD *)v94 + 6) = v20[4];
      if ( v92 == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v94 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v94 + 7, 2u);
      }
      v27 = v101 + 2;
      v28 = (char *)v94 + 8;
      v29 = (_QWORD *)v101[3];
      if ( (_QWORD *)*v29 != v101 + 2 )
LABEL_164:
        __fastfail(3u);
      v12 = v100;
      *v28 = v27;
      v28[1] = v29;
      *v29 = v28;
      v27[1] = v28;
      v30 = v108;
      *((_BYTE *)v16 + 4) = v20[5];
      *((_BYTE *)v16 + 5) = v20[6];
      *((_BYTE *)v16 + 6) = v20[7];
      v31 = &v20[*v20];
      v32 = v94;
      v33 = 0;
      v34 = (unsigned __int64)v12 + *(unsigned __int16 *)(*(_QWORD *)(v102 + 24) + 2LL);
      if ( *v30 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)v31 >= v34 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_86;
            v37 = 22;
            goto LABEL_85;
          }
          v35 = 9LL * v33;
          v32[2 * v35 + 16] = *(_DWORD *)&v16[12 * v33 + 22];
          v32[2 * v35 + 12] = 1;
          v36 = v31 + 1;
          if ( (unsigned __int64)(v31 + 1) >= v34 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_86;
            v37 = 23;
            goto LABEL_85;
          }
          while ( *v36 != 5 )
          {
            v38 = *v31;
            if ( !(_BYTE)v38 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_86;
              v37 = 24;
              goto LABEL_85;
            }
            v31 += v38;
            if ( (unsigned __int64)v31 >= v34 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_86;
              v37 = 25;
              goto LABEL_85;
            }
            v36 = v31 + 1;
            if ( (unsigned __int64)(v31 + 1) >= v34 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_86;
              v37 = 26;
              goto LABEL_85;
            }
          }
          if ( (unsigned __int64)(v31 + 7) > v34 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_86;
            v37 = 28;
            goto LABEL_85;
          }
          v39 = *(_DWORD *)&v16[12 * v33 + 22];
          v40 = 1;
          if ( (v39 & 1) != 0 )
          {
            *((_WORD *)v31 + 2) = v16[12 * v33 + 12];
            v40 = 1;
            v39 = *(_DWORD *)&v16[12 * v33 + 22];
          }
          v41 = v39 & 0xF0;
          if ( v41 != 16 )
          {
            if ( v41 == 32 )
            {
              v32[18 * v33 + 26] = 2;
              goto LABEL_34;
            }
            v40 = 3;
            if ( v41 != 48 )
              v40 = 0;
          }
          v32[18 * v33 + 26] = v40;
LABEL_34:
          *(_QWORD *)&v32[18 * v33 + 18] = v31;
          v32[18 * v33 + 20] = v34 - (_DWORD)v31;
          v42 = *((_WORD *)v31 + 2);
          if ( *(_WORD *)(a1 + 1990) < 0x250u )
            v42 = (v42 & 0x7FF) * (((v42 >> 11) & 3) + 1);
          v16[12 * v33 + 12] = v42;
          v43 = 6;
          if ( v31[6] < 6u )
            v43 = v31[6];
          HIBYTE(v16[12 * v33 + 13]) = v43;
          LOBYTE(v16[12 * v33 + 13]) = v31[2];
          if ( (v31[3] & 3) != 0 )
          {
            switch ( v31[3] & 3 )
            {
              case 1:
                *(_DWORD *)&v16[12 * v33 + 14] = 1;
                break;
              case 2:
                *(_DWORD *)&v16[12 * v33 + 14] = 2;
                break;
              case 3:
                *(_DWORD *)&v16[12 * v33 + 14] = 3;
                break;
            }
          }
          else
          {
            *(_DWORD *)&v16[12 * v33 + 14] = 0;
          }
          if ( !v16[12 * v33 + 12] )
            _InterlockedOr(&v32[18 * v33 + 13], 1u);
          v44 = *v31;
          if ( !(_BYTE)v44 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_86;
            v37 = 29;
            goto LABEL_85;
          }
          v31 += v44;
          if ( (unsigned __int64)v31 < v34 && (unsigned __int64)(v31 + 1) < v34 && v31[1] == 48 )
          {
            if ( *v31 )
            {
              if ( (unsigned __int64)(v31 + 6) <= v34 )
              {
                v45 = *(_QWORD *)&v32[18 * v33 + 18];
                *(_QWORD *)&v32[18 * v33 + 22] = v31;
                if ( (*(_BYTE *)(v45 + 3) & 3) == 1 )
                {
                  if ( (v32[18 * v33 + 13] & 1) == 0 )
                    v16[12 * v33 + 12] = *((_WORD *)v31 + 2);
                  if ( (v31[3] & 0x80u) != 0 )
                  {
                    v31 += *v31;
                    if ( (unsigned __int64)v31 < v34 && (unsigned __int64)(v31 + 1) < v34 && v31[1] == 49 )
                    {
                      if ( *v31 )
                      {
                        if ( (unsigned __int64)(v31 + 8) <= v34 )
                        {
                          v46 = v32[18 * v33 + 13];
                          *(_QWORD *)&v32[18 * v33 + 24] = v31;
                          if ( (v46 & 1) == 0 )
                          {
                            v47 = *((_DWORD *)v31 + 1);
                            if ( v47 > 0xFFFF )
                            {
                              v48 = *(_DWORD *)&v16[12 * v33 + 22];
                              if ( (v48 & 0x100) != 0 )
                              {
                                *(_DWORD *)&v16[12 * v33 + 20] = v47;
                                *(_DWORD *)&v16[12 * v33 + 22] = v48 | 0x10000;
                              }
                            }
                            else
                            {
                              v16[12 * v33 + 12] = v47;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( ++v33 >= *v30 )
          {
            LODWORD(v12) = (_DWORD)v100;
            break;
          }
        }
      }
      v10 = v109;
      v11 = (unsigned __int8 *)(v109 + 1);
      if ( (unsigned __int64)(v109 + 1) >= v110 )
        goto LABEL_97;
      v14 = v97;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_87;
    v51 = 33;
    v52 = 2;
LABEL_94:
    LODWORD(v90) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      v52,
      v51,
      (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
      v90);
    goto LABEL_87;
  }
LABEL_97:
  v6 = a1 + 48;
  v53 = *(_QWORD *)(a1 + 48);
  if ( v53 )
  {
    for ( i = *(_QWORD **)(v53 + 16); ; i = (_QWORD *)*i )
    {
      v55 = i - 1;
      if ( (_QWORD *)(v53 + 16) == i )
        break;
      v56 = *((_DWORD *)v55 + 6);
      v57 = 0;
      if ( v56 )
      {
        v58 = v55 + 9;
        while ( (*(_BYTE *)(*v58 + 2LL) & 0xF) != 0 )
        {
          ++v57;
          v58 += 9;
          if ( v57 >= v56 )
            goto LABEL_104;
        }
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1072693239;
        goto LABEL_88;
      }
LABEL_104:
      ;
    }
  }
  LOWORD(v95) = 0;
  v59 = 0;
  v96 = 0;
  v93 = 0;
  if ( !v53 )
  {
LABEL_123:
    v68 = 0;
    v69 = (unsigned int)v97;
    *((_DWORD *)v101 + 2) = v97;
    v70 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v70 )
    {
      if ( (unsigned int)v69 <= v70 )
      {
LABEL_137:
        v8 = 0;
LABEL_147:
        v80 = *(_QWORD *)(a1 + 56);
        if ( v80 )
        {
          v81 = (_QWORD *)(v80 + 16);
          *(_DWORD *)(a1 + 144) = 0;
          *(_DWORD *)(a1 + 128) = 0;
          v82 = *v81 - 8LL;
          if ( v81 != (_QWORD *)*v81 )
          {
            do
            {
              for ( j = 0; j < *(_DWORD *)(v82 + 24); ++j )
              {
                v84 = *(_DWORD *)(v82 + 72LL * j + 48);
                if ( v84 == 4 )
                {
                  *(_DWORD *)(v82 + 72LL * j + 48) = 5;
                  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v82 + 72LL * j + 40);
                }
                else if ( v84 == 6 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v82 + 72LL * j + 40);
                }
              }
              v85 = *(_QWORD *)(v82 + 8);
              v82 = v85 - 8;
            }
            while ( *(_QWORD *)(a1 + 56) + 16LL != v85 );
          }
        }
        if ( v8 < 0 )
          goto LABEL_87;
        v2 = *v111;
        goto LABEL_163;
      }
      v71 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v71 )
      {
        ExFreePoolWithTag(v71, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v72 = *(void **)(a1 + 136);
      if ( v72 )
      {
        ExFreePoolWithTag(v72, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v73 = *(void **)(a1 + 120);
      if ( v73 )
      {
        ExFreePoolWithTag(v73, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && (_DWORD)v69 )
    {
      Pool2 = ExAllocatePool2(64LL, 8 * v69, 1681082453LL);
      *(_QWORD *)(a1 + 104) = Pool2;
      if ( Pool2 )
      {
        v75 = ExAllocatePool2(64LL, 8 * v69, 1681082453LL);
        *(_QWORD *)(a1 + 136) = v75;
        if ( v75 )
        {
          v76 = ExAllocatePool2(64LL, 8 * v69, 1681082453LL);
          *(_QWORD *)(a1 + 120) = v76;
          if ( v76 )
          {
            *(_DWORD *)(a1 + 96) = v69;
            goto LABEL_137;
          }
        }
      }
      v77 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v77 )
      {
        ExFreePoolWithTag(v77, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v78 = *(void **)(a1 + 136);
      if ( v78 )
      {
        ExFreePoolWithTag(v78, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v79 = *(void **)(a1 + 120);
      if ( v79 )
      {
        ExFreePoolWithTag(v79, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v8 = -1073741670;
      v68 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = 30;
        v52 = 5;
        goto LABEL_94;
      }
    }
    v8 = v68;
    if ( v68 < 0 )
      goto LABEL_87;
    goto LABEL_147;
  }
  for ( k = *(_QWORD **)(v53 + 16); ; k = (_QWORD *)*k )
  {
    v61 = k - 1;
    if ( (_QWORD *)(v53 + 16) == k )
      goto LABEL_123;
    v62 = *((_DWORD *)v61 + 6);
    v63 = 0;
    if ( v62 )
      break;
LABEL_120:
    ;
  }
  v64 = (char *)v61 + 52;
  while ( 1 )
  {
    v65 = *(_QWORD *)(v64 + 20);
    if ( (*(_DWORD *)v64 & 1) == 0 )
      break;
LABEL_119:
    ++v63;
    v64 += 72;
    if ( v63 >= v62 )
      goto LABEL_120;
  }
  v66 = *(unsigned __int8 *)(v65 + 2);
  if ( (*(_BYTE *)(v65 + 3) & 3) != 0 )
  {
    v67 = (__int16 *)&v95;
    if ( (v66 & 0x80u) == 0LL )
      v67 = &v96;
  }
  else
  {
    v67 = (__int16 *)&v93;
  }
  if ( ((v59 >> (v66 & 0xF)) & 1) == 0 && (((unsigned __int16)*v67 >> (v66 & 0xF)) & 1) == 0 )
  {
    *v67 |= 1 << (v66 & 0xF);
    v59 = v93;
    goto LABEL_119;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), v66, v53, (__int64)v67, v89);
LABEL_86:
  v8 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073737984;
LABEL_87:
  v6 = a1 + 48;
LABEL_88:
  *(_DWORD *)(a1 + 1560) = v8;
  if ( !*(_DWORD *)(a1 + 1564) )
    *(_DWORD *)(a1 + 1564) = HUBPDO_GetUSBDErrorFromNTStatus(v8);
  v49 = *(_QWORD **)v6;
  *(_QWORD *)v6 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
  if ( v49 )
  {
    v50 = (_QWORD **)(v49 + 2);
    while ( 1 )
    {
      v87 = *v50;
      if ( *v50 == v50 )
        break;
      if ( (_QWORD **)v87[1] != v50 )
        goto LABEL_164;
      v86 = (_QWORD *)*v87;
      if ( *(_QWORD **)(*v87 + 8LL) != v87 )
        goto LABEL_164;
      *v50 = v86;
      v86[1] = v50;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v87 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v49);
  }
LABEL_163:
  *(_QWORD *)(v102 + 32) = v2;
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
