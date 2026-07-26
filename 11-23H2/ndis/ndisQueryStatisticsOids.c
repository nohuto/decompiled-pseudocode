/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C0011498
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C010E350 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025268 (-ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisValidOid @ 0x1C0026FD8 (ndisValidOid.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C002A330 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1C00359B4 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x1C0035EE0 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        size_t Size,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  _DWORD *v9; // r14
  unsigned int v11; // r12d
  unsigned int v12; // edi
  _QWORD *v13; // rsi
  void *Pool2; // rax
  unsigned int v15; // r13d
  void *v16; // rcx
  __int64 *v17; // r11
  __int64 v18; // rbx
  unsigned int v19; // ebx
  int v20; // eax
  __int64 *p_Src; // rdx
  unsigned int BytesWritten; // ebx
  unsigned int v23; // ecx
  _BYTE *v24; // rax
  int v26; // ecx
  char valid; // al
  struct _NDIS_USER_OPEN_CONTEXT *v28; // r10
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v30; // r14
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // r8
  unsigned __int8 v43; // r9
  int v44; // eax
  int v45; // ecx
  unsigned int *v46; // r8
  unsigned int v47; // eax
  unsigned int v48; // edx
  char v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh] BYREF
  int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE *v53; // [rsp+58h] [rbp-A8h]
  int Src; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+64h] [rbp-9Ch]
  unsigned int v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  struct _NDIS_USER_OPEN_CONTEXT *v61; // [rsp+98h] [rbp-68h]
  __int64 v62; // [rsp+A0h] [rbp-60h]
  _DWORD *v63; // [rsp+A8h] [rbp-58h]
  _QWORD v64[20]; // [rsp+B0h] [rbp-50h] BYREF
  struct _NDIS_OID_REQUEST v65; // [rsp+150h] [rbp+50h] BYREF

  v9 = a5;
  v11 = Size;
  v62 = a3;
  v61 = a2;
  v58 = (__int64)a5;
  v63 = a7;
  v53 = a9;
  v56 = a4;
  memset(&v65, 0, 0xF8uLL);
  v12 = 0;
  v51 = 0;
  P = 0LL;
  v13 = 0LL;
  v52 = 0;
  v57 = 0LL;
  v50 = 0;
  v49 = 0;
  memset(v64, 0, 0x98uLL);
  Src = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_ac6be41cbcc037e0c9ab930039f814bd_Traceguids,
      a1);
  *a7 = 0;
  if ( a8 )
  {
    v15 = 12;
    v16 = a5;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)Size, 1835091022);
    P = Pool2;
    v13 = Pool2;
    if ( !Pool2 )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v15 = 8;
    v16 = Pool2;
  }
  memset(v16, 0, (unsigned int)Size);
  LODWORD(v17) = 0;
  v55 = 0;
  if ( v56 )
  {
    v18 = 0LL;
    v59 = 0LL;
    while ( 1 )
    {
      memset(&v65, 0, 0xF8uLL);
      if ( v11 < v15 + 4 )
      {
        v24 = v53;
        LODWORD(v17) = 0;
        v12 = -1073676268;
        *v53 = 0;
        goto LABEL_25;
      }
      v19 = *(_DWORD *)(v62 + 4 * v18);
      if ( (v19 & 0xFF000000) == 0x80000000 )
        v19 &= ~0x80000000;
      if ( v19 != 66050 )
      {
        if ( v19 - 131603 > 5 || (v26 = 55, !_bittest(&v26, v19 - 131603)) )
        {
          if ( v19 != 0xFFFFFF && v19 != 65796 && v19 != -50265850 )
            break;
        }
      }
      LODWORD(v17) = 0;
      v12 = 0;
      switch ( v19 )
      {
        case 0x10202u:
          v20 = *(_DWORD *)(a1 + 1832);
          p_Src = (__int64 *)&Src;
          if ( v20 == 14 )
            v20 = 0;
          Src = v20;
          goto LABEL_16;
        case 0x10104u:
          p_Src = (__int64 *)(a1 + 464);
          goto LABEL_120;
        case 0x20213u:
          p_Src = (__int64 *)(a1 + 1624);
          goto LABEL_120;
        case 0x20214u:
          v45 = *(unsigned __int16 *)(a1 + 1786);
          v44 = *(unsigned __int16 *)(a1 + 1784);
LABEL_117:
          p_Src = (__int64 *)&v52;
          v52 = v44 + v45;
          goto LABEL_16;
        case 0x20215u:
          v44 = *(unsigned __int16 *)(a1 + 1790);
          v45 = *(unsigned __int16 *)(a1 + 1788) << 16;
          goto LABEL_117;
        case 0x20217u:
          v36 = *(_DWORD *)(a1 + 1872);
          v37 = v36;
          v38 = *(_DWORD *)(a1 + 120);
          v50 = v36;
          if ( (v38 & 0x10) != 0 )
          {
            v36 |= 0x1000000u;
            v50 = v36;
            v37 = v36;
          }
          if ( (v38 & 0x20000) != 0 )
          {
            v36 = v37 | 0x400;
            v50 = v37 | 0x400;
            v37 |= 0x400u;
          }
          if ( (v38 & 0x4000000) != 0 )
          {
            v36 = v37 | 0x2000;
            v50 = v37 | 0x2000;
            v37 |= 0x2000u;
          }
          v39 = *(_DWORD *)(a1 + 124);
          if ( (v39 & 1) != 0 )
          {
            v36 = v37 | 0x8000;
            v50 = v37 | 0x8000;
            v37 |= 0x8000u;
          }
          if ( (v39 & 0x1000) != 0 )
          {
            v36 = v37 | 0x40000;
            v50 = v37 | 0x40000;
          }
          if ( (v39 & 0x2000) != 0 )
          {
            v36 |= 0x80000u;
            v50 = v36;
          }
          if ( (v39 & 0x200000) != 0 )
          {
            v36 |= 0x400000u;
            v50 = v36;
          }
          if ( (v39 & 0x400000) != 0 )
          {
            v36 |= 2u;
            v50 = v36;
          }
          if ( *(int *)(a1 + 3456) > 0 )
          {
            v36 |= 0x40000000u;
            v50 = v36;
          }
          v40 = *(_QWORD *)(a1 + 3760);
          if ( *(_BYTE *)(a1 + 32) >= 6u )
          {
            if ( *(_QWORD *)(v40 + 200) )
              goto LABEL_108;
          }
          else if ( *(_QWORD *)(v40 + 296) )
          {
LABEL_108:
            v50 = v36 | 0x800000;
          }
          if ( ndisCheckForHangSupported((struct _NDIS_MINIPORT_BLOCK *)a1) )
          {
            v41 |= 0x80u;
            v50 = v41;
          }
          if ( v43 >= 6u && *(__int64 **)(v42 + 216) != v17 )
            v50 = v41 | 8;
          p_Src = (__int64 *)&v50;
LABEL_16:
          BytesWritten = 4;
LABEL_17:
          if ( BytesWritten > v11 - v15 )
          {
            v12 = -1073676268;
            goto LABEL_24;
          }
          memmove(&v9[v15 / 4], p_Src, BytesWritten);
          goto LABEL_19;
      }
      if ( v19 != 131608 )
      {
        if ( v19 == 0xFFFFFF )
        {
          v57 = MEMORY[0xFFFFF78000000320];
          v34 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
          v35 = v34 * KeQueryTimeIncrement();
          BytesWritten = 4;
          v57 = v35 / 10000000;
          LODWORD(v17) = 0;
          p_Src = &v57;
          goto LABEL_17;
        }
        if ( v19 != -50265850 )
          goto LABEL_23;
        p_Src = (__int64 *)(a1 + 1292);
LABEL_120:
        BytesWritten = 4;
LABEL_58:
        if ( !p_Src )
          goto LABEL_20;
        goto LABEL_17;
      }
      BytesWritten = 4;
      ndisFlags = v9[v15 / 4];
      ndisVerifierInitialization();
      if ( (ndisFlags & 4) == 0 )
        ndisVerifierLevel &= ~4u;
      v65.DATA.QUERY_INFORMATION.BytesWritten = 4;
LABEL_19:
      LODWORD(v17) = 0;
LABEL_20:
      v23 = BytesWritten + v15;
      *v9 = *(_DWORD *)(v62 + 4 * v59);
      v9[1] = BytesWritten;
      if ( a8 == (_BYTE)v17 )
      {
        v11 -= v23;
        v9 = (_DWORD *)((char *)v9 + v23);
        v51 += v23;
      }
      else
      {
        v46 = v9 + 2;
        v47 = v11 - v15 - 4;
        v48 = (v23 + 7) & 0xFFFFFFF8;
        if ( v47 >= v48 )
          v11 -= v48;
        else
          v11 -= v23;
        if ( v47 >= v48 )
          v23 = (v23 + 7) & 0xFFFFFFF8;
        v9 = (_DWORD *)((char *)v9 + v23);
        *v46 = v23;
        v51 += v23;
      }
      v58 = (__int64)v9;
LABEL_23:
      v18 = v59 + 1;
      ++v55;
      ++v59;
      if ( v55 >= v56 )
        goto LABEL_24;
      v13 = P;
    }
    valid = ndisValidOid(v61, v19);
    LODWORD(v17) = 0;
    if ( !valid )
      goto LABEL_23;
    if ( v19 == 16843010 )
    {
      if ( *(_DWORD *)(a1 + 464) == 3 )
        v19 = 67174658;
    }
    else if ( v19 == 16843009 && *(_DWORD *)(a1 + 464) == 3 )
    {
      v19 = 67174657;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
    {
      v12 = -1073676282;
      goto LABEL_24;
    }
    if ( a8 )
      v13 = &v9[v15 / 4];
    if ( *(_BYTE *)(a1 + 32) < 6u
      || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v19),
          (v30 = IsSatisfiedByOidGenStatistics) == 0)
      && v19 != 131334 )
    {
      v31 = ndisQueryDeviceOid(v28, &v65, v19, v13, v11 - v15);
      v17 = 0LL;
      v12 = v31;
      BytesWritten = 0;
      if ( !v31 )
        BytesWritten = v65.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_54:
      p_Src = v17;
      if ( a8 == (_BYTE)v17 )
        p_Src = v13;
      if ( v12 )
        goto LABEL_24;
      v9 = (_DWORD *)v58;
      if ( !BytesWritten )
        goto LABEL_20;
      goto LABEL_58;
    }
    if ( v49 == (_BYTE)v17 )
    {
      memset(v64, 0, 0x98uLL);
      v32 = ndisQueryDeviceOid(v61, &v65, 0x20106u, v64, 0x98u);
      v17 = 0LL;
      v12 = v32;
      if ( v32 )
        goto LABEL_70;
      v49 = 1;
    }
    v33 = v11 - v15;
    if ( v19 == 131334 )
    {
      BytesWritten = 152;
      if ( v33 >= 0x98 )
      {
        memmove(v13, v64, 0x98uLL);
        v17 = 0LL;
        goto LABEL_54;
      }
    }
    else if ( v33 >= 8 )
    {
      BytesWritten = 8;
      *v13 = *(_QWORD *)((char *)v64 + v30);
      goto LABEL_54;
    }
    v12 = -1073676268;
LABEL_70:
    BytesWritten = (unsigned int)v17;
    goto LABEL_54;
  }
LABEL_24:
  v24 = v53;
LABEL_25:
  *v63 = v51;
  if ( *v24 != (_BYTE)v17 && v12 == -1073741637 )
    v12 = (unsigned int)v17;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_ac6be41cbcc037e0c9ab930039f814bd_Traceguids,
      a1,
      v12);
  return v12;
}
