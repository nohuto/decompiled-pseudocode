/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C0070B8C
 * Callers:
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0013AB0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0017208 (Register_FindFirstExtendedCapability.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0048204 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int16 v4; // ax
  unsigned int v5; // eax
  int v6; // edx
  unsigned __int8 v7; // bl
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // rdx
  unsigned int v14; // edx
  unsigned int v15; // r10d
  int v16; // r10d
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  int v24; // edx
  int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // r10d
  int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r10
  unsigned int *FirstExtendedCapability; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v43; // rcx
  __int64 Ulong; // rbx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // r9d
  _QWORD *v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  int v51; // r9d
  __int64 v52; // [rsp+28h] [rbp-70h]
  char v53; // [rsp+28h] [rbp-70h]
  char v54; // [rsp+28h] [rbp-70h]
  char v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+28h] [rbp-70h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  char v58; // [rsp+28h] [rbp-70h]
  char v59[8]; // [rsp+30h] [rbp-68h]
  char v60[8]; // [rsp+30h] [rbp-68h]
  char v61[8]; // [rsp+30h] [rbp-68h]
  char v62; // [rsp+30h] [rbp-68h]
  __int64 v63; // [rsp+38h] [rbp-60h]
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+40h] [rbp-58h]
  __int128 v67; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 328) == -1LL )
  {
    v4 = *(_WORD *)(v3 + 248);
    if ( v4 == 7023 )
    {
      Ulong = (unsigned int)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v45) = Ulong;
        v46 = (unsigned __int64)(unsigned int)Ulong >> 16;
        v47 = 21;
LABEL_55:
        v62 = v46;
        LOBYTE(v46) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v46,
          6,
          v47,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          v45,
          v62);
      }
    }
    else
    {
      if ( v4 != 4172 && _stricmp((const char *)(v3 + 304), "QCOM") )
        goto LABEL_5;
      Ulong = (unsigned __int16)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v46) = Ulong & 0xFFF;
        v47 = 22;
        v45 = (unsigned __int64)(unsigned int)Ulong >> 12;
        goto LABEL_55;
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) = Ulong;
    Etw_ControllerFirmareVersionUpdate(v43, *(_QWORD *)(a1 + 8));
  }
LABEL_5:
  v5 = XilRegister_ReadUlong(a1, *(unsigned int **)(a1 + 24));
  v7 = v5;
  v8 = HIBYTE(v5);
  v9 = HIWORD(v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v59 = BYTE2(v5);
    LODWORD(v52) = HIBYTE(v5);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x17u,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v52,
      *(_QWORD *)v59,
      (unsigned __int8)v5);
  }
  v10 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v10 + 320) = v8;
  *(_BYTE *)(v10 + 321) = v9;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_BYTE *)(v11 + 320);
  if ( v12 )
  {
    if ( *(_BYTE *)(v11 + 321) >= 0x10u || v12 > 1u )
      *(_BYTE *)(v11 + 319) = 1;
  }
  else
  {
    v67 = 0x1000uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v11 + 72), v6, 6, 24, (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
      v11 = *(_QWORD *)(a1 + 8);
    }
    v48 = (_QWORD *)(v11 + 336);
    v49 = 2LL;
    do
    {
      *v48 |= *(_QWORD *)((char *)v48 + (_QWORD)&v67 - v11 - 336);
      ++v48;
      --v49;
    }
    while ( v49 );
  }
  v13 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v13 + v7;
  v15 = XilRegister_ReadUlong(a1, (unsigned int *)(v13 + 4));
  *(_DWORD *)(a1 + 80) = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v63) = *(unsigned __int8 *)(a1 + 83);
    *(_DWORD *)v59 = (v15 >> 8) & 0x7FF;
    LODWORD(v52) = (unsigned __int8)v15;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x19u,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v52,
      *(_QWORD *)v59,
      v63);
    v15 = *(_DWORD *)(a1 + 80);
  }
  if ( !(_BYTE)v15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v50 = 26;
    goto LABEL_66;
  }
  v16 = (v15 >> 8) & 0x7FF;
  if ( (unsigned int)(v16 - 1) > 0x3FF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v50 = 27;
      v58 = v16;
      goto LABEL_91;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_BYTE *)(a1 + 83) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v50 = 28;
LABEL_66:
    v58 = 0;
LABEL_91:
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v14,
      6,
      v50,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v58);
    return (unsigned int)-1073741811;
  }
  v17 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  *(_DWORD *)(a1 + 84) = v17;
  v18 = v17;
  v19 = 1 << ((unsigned __int8)v17 >> 4);
  *(_DWORD *)(a1 + 88) = v19;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = v18 & 0xF;
    v53 = v20;
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v20,
      6,
      29,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v53,
      v19);
    v18 = *(_DWORD *)(a1 + 84);
  }
  v21 = (v18 >> 27) | *(_WORD *)(a1 + 86) & 0x3E0;
  *(_DWORD *)(a1 + 92) = v21;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = (v18 >> 26) & 1;
    v54 = v22;
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v22,
      6,
      30,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v54,
      v21);
  }
  v23 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  *(_DWORD *)(a1 + 96) = v23;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = *(unsigned __int16 *)(a1 + 98);
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v25,
      6,
      31,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v23,
      *(_WORD *)(a1 + 98));
    v23 = *(_DWORD *)(a1 + 96);
  }
  if ( (unsigned __int8)v23 > 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v51 = 32;
LABEL_71:
    LOBYTE(v24) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v24,
      6,
      v51,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_WORD *)(a1 + 98) > 0x7FFu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v51 = 33;
    goto LABEL_71;
  }
  v26 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
  *(_DWORD *)(a1 + 100) = v26;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v63) = (v26 >> 2) & 1;
    *(_DWORD *)v59 = (v26 >> 1) & 1;
    LODWORD(v52) = v26 & 1;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x22u,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v52,
      *(_QWORD *)v59,
      v63,
      (v26 >> 3) & 1);
    v27 = *(_DWORD *)(a1 + 100);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v66) = (v27 >> 7) & 1;
      LODWORD(v63) = (v27 >> 6) & 1;
      *(_DWORD *)v59 = (v27 >> 5) & 1;
      LODWORD(v52) = (v27 >> 4) & 1;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x23u,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        v52,
        *(_QWORD *)v59,
        v63,
        v66);
      v14 = *(_DWORD *)(a1 + 100);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = (unsigned __int16)v14 >> 12;
        v55 = v28;
        LOBYTE(v28) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v28,
          6,
          36,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          v55,
          *(_WORD *)(a1 + 102));
      }
    }
  }
  *(_DWORD *)(a1 + 104) = 0;
  if ( v7 >= 0x20u )
  {
    v29 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 28LL));
    *(_DWORD *)(a1 + 104) = v29;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v63) = (v29 >> 2) & 1;
      *(_DWORD *)v59 = (v29 >> 1) & 1;
      LODWORD(v52) = v29 & 1;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x25u,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        v52,
        *(_QWORD *)v59,
        v63);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = *(_DWORD *)(a1 + 104);
        LODWORD(v64) = (v30 >> 5) & 1;
        *(_DWORD *)v60 = (v30 >> 4) & 1;
        LODWORD(v56) = (v30 >> 3) & 1;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x26u,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          v56,
          *(_QWORD *)v60,
          v64);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = *(_DWORD *)(a1 + 104);
          LODWORD(v65) = v31 >> 9;
          *(_DWORD *)v61 = (v31 >> 8) & 1;
          LODWORD(v57) = (v31 >> 6) & 1;
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x27u,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            v57,
            *(_QWORD *)v61,
            v65);
        }
      }
    }
  }
  v32 = *(_DWORD *)(a1 + 100);
  if ( (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 100)) >> 4) > 7u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v14,
        6,
        40,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 100)) >> 4);
      v32 = *(_DWORD *)(a1 + 100);
    }
    v32 = v32 & 0xFFFF0FFF | 0x7000;
    *(_DWORD *)(a1 + 100) = v32;
  }
  v33 = (unsigned __int16)v32 >> 12;
  if ( !v33 || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x40000LL) != 0 )
    v34 = 0;
  else
    v34 = (2 << v33) - 1;
  *(_DWORD *)(a1 + 112) = v34;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v14,
      6,
      41,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v34);
  }
  v35 = *(unsigned __int16 *)(a1 + 102);
  if ( !(_WORD)v35 || 4 * v35 >= (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = *(_WORD *)(a1 + 102);
      v50 = 42;
      goto LABEL_91;
    }
    return (unsigned int)-1073741811;
  }
  v36 = 4 * v35 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v36;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v14,
      6,
      43,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v36);
  }
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v38 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  if ( !Controller_IsSecureDevice(v38) || *(_BYTE *)(a1 + 128) )
  {
    v14 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL));
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v50 = 44;
      goto LABEL_82;
    }
    v39 = *(_QWORD *)(a1 + 24) + v14;
    *(_QWORD *)(a1 + 48) = v39;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v14,
        6,
        45,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        v39,
        v14);
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v14 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v50 = 46;
LABEL_82:
    v58 = 0;
    goto LABEL_91;
  }
  v40 = *(_QWORD *)(a1 + 24) + v14;
  *(_QWORD *)(a1 + 40) = v40;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v14,
      6,
      47,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v40,
      v14);
  v41 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v41 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v50 = 48;
      v58 = v41;
      goto LABEL_91;
    }
    return (unsigned int)-1073741811;
  }
  return v1;
}
