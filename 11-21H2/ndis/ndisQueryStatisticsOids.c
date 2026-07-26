/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C0012470
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008B60 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ndisValidOid @ 0x1C0010600 (ndisValidOid.c)
 *     ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00261AC (-ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1C0033D94 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x1C00343B0 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
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
  unsigned int v12; // esi
  _QWORD *v13; // rdi
  void *Pool2; // rax
  unsigned int v15; // r13d
  void *v16; // rcx
  __int64 *v17; // r9
  __int64 v18; // rbx
  int v19; // ecx
  int v20; // ebx
  int v21; // eax
  __int64 *p_Src; // rdi
  unsigned int BytesWritten; // ebx
  unsigned int v24; // ecx
  _BYTE *v25; // rax
  int v27; // ecx
  char valid; // al
  struct _NDIS_USER_OPEN_CONTEXT *v29; // r10
  _QWORD *v30; // r14
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r10
  int v43; // eax
  int v44; // ecx
  unsigned int *v45; // r8
  unsigned int v46; // eax
  unsigned int v47; // edx
  char v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+44h] [rbp-BCh] BYREF
  int v50; // [rsp+48h] [rbp-B8h]
  int v51; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE *v52; // [rsp+50h] [rbp-B0h]
  int Src; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v54; // [rsp+5Ch] [rbp-A4h]
  unsigned int v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  struct _NDIS_USER_OPEN_CONTEXT *v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  _DWORD *v62; // [rsp+98h] [rbp-68h]
  _QWORD v63[20]; // [rsp+A0h] [rbp-60h] BYREF
  struct _NDIS_OID_REQUEST v64; // [rsp+140h] [rbp+40h] BYREF

  v9 = a5;
  v11 = Size;
  v61 = a3;
  v60 = a2;
  v56 = (__int64)a5;
  v62 = a7;
  v52 = a9;
  v55 = a4;
  memset(&v64, 0, 0xF8uLL);
  v12 = 0;
  v50 = 0;
  P = 0LL;
  v13 = 0LL;
  v51 = 0;
  v57 = 0LL;
  v49 = 0;
  v48 = 0;
  memset(v63, 0, 0x98uLL);
  Src = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_5eb2c2b9ff2532e0d02b0f2c9580dec3_Traceguids,
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
  v54 = 0;
  if ( v55 )
  {
    v18 = 0LL;
    v58 = 0LL;
    while ( 1 )
    {
      memset(&v64, 0, 0xF8uLL);
      if ( v11 < v15 + 4 )
      {
        v25 = v52;
        LODWORD(v17) = 0;
        v12 = -1073676268;
        *v52 = 0;
        goto LABEL_25;
      }
      v19 = *(_DWORD *)(v61 + 4 * v18);
      v20 = v19 & 0x7FFFFFFF;
      if ( (v19 & 0xFF000000) != 0x80000000 )
        v20 = v19;
      if ( v20 == 66050
        || (unsigned int)(v20 - 131603) <= 5 && (v27 = 55, _bittest(&v27, v20 - 131603))
        || v20 == 0xFFFFFF
        || v20 == 65796
        || v20 == -50265850 )
      {
        LODWORD(v17) = 0;
        v12 = 0;
        switch ( v20 )
        {
          case 66050:
            v21 = *(_DWORD *)(a1 + 1832);
            p_Src = (__int64 *)&Src;
            if ( v21 == 14 )
              v21 = 0;
            Src = v21;
            goto LABEL_16;
          case 65796:
            p_Src = (__int64 *)(a1 + 464);
            goto LABEL_16;
          case 131603:
            p_Src = (__int64 *)(a1 + 1624);
            goto LABEL_16;
          case 131604:
            v44 = *(unsigned __int16 *)(a1 + 1786);
            v43 = *(unsigned __int16 *)(a1 + 1784);
            break;
          case 131605:
            v43 = *(unsigned __int16 *)(a1 + 1790);
            v44 = *(unsigned __int16 *)(a1 + 1788) << 16;
            break;
          case 131607:
            v37 = *(_DWORD *)(a1 + 120);
            v38 = *(_DWORD *)(a1 + 1872);
            v49 = v38;
            if ( (v37 & 0x10) != 0 )
            {
              v38 |= 0x1000000u;
              v49 = v38;
            }
            if ( (v37 & 0x20000) != 0 )
            {
              v38 |= 0x400u;
              v49 = v38;
            }
            if ( (v37 & 0x4000000) != 0 )
            {
              v38 |= 0x2000u;
              v49 = v38;
            }
            v39 = *(_DWORD *)(a1 + 124);
            if ( (v39 & 1) != 0 )
            {
              v38 |= 0x8000u;
              v49 = v38;
            }
            if ( (v39 & 0x1000) != 0 )
            {
              v38 |= 0x40000u;
              v49 = v38;
            }
            if ( (v39 & 0x2000) != 0 )
            {
              v38 |= 0x80000u;
              v49 = v38;
            }
            if ( (v39 & 0x200000) != 0 )
            {
              v38 |= 0x400000u;
              v49 = v38;
            }
            if ( (v39 & 0x400000) != 0 )
            {
              v38 |= 2u;
              v49 = v38;
            }
            if ( *(int *)(a1 + 3456) > 0 )
            {
              v38 |= 0x40000000u;
              v49 = v38;
            }
            if ( *(_BYTE *)(a1 + 32) >= 6u )
            {
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 3760) + 200LL) )
                goto LABEL_109;
            }
            else
            {
              if ( !*(_QWORD *)(*(_QWORD *)(a1 + 3760) + 296LL) )
                goto LABEL_110;
LABEL_109:
              v49 = v38 | 0x800000;
            }
LABEL_110:
            if ( ndisCheckForHangSupported((struct _NDIS_MINIPORT_BLOCK *)a1) )
            {
              v40 |= 0x80u;
              v49 = v40;
            }
            if ( v41 >= v42 && *(__int64 **)(*(_QWORD *)(a1 + 3760) + 216LL) != v17 )
              v49 = v40 | 8;
            p_Src = (__int64 *)&v49;
            goto LABEL_16;
          default:
            switch ( v20 )
            {
              case 131608:
                p_Src = 0LL;
                ndisFlags = v9[v15 / 4];
                ndisVerifierInitialization();
                if ( (ndisFlags & 4) == 0 )
                  ndisVerifierLevel &= ~4u;
                v64.DATA.QUERY_INFORMATION.BytesWritten = 4;
                break;
              case 16777215:
                v57 = MEMORY[0xFFFFF78000000320];
                v36 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
                p_Src = &v57;
                v57 = v36 * KeQueryTimeIncrement() / 10000000;
                break;
              case -50265850:
                p_Src = (__int64 *)(a1 + 1292);
                goto LABEL_16;
              default:
                goto LABEL_23;
            }
            LODWORD(v17) = 0;
LABEL_16:
            BytesWritten = 4;
LABEL_17:
            if ( p_Src )
            {
              if ( BytesWritten > v11 - v15 )
              {
                v12 = -1073676268;
                goto LABEL_24;
              }
              memmove(&v9[v15 / 4], p_Src, BytesWritten);
              LODWORD(v17) = 0;
            }
            goto LABEL_20;
        }
        p_Src = (__int64 *)&v51;
        v51 = v43 + v44;
        goto LABEL_16;
      }
      valid = ndisValidOid((__int64)v60, v20);
      LODWORD(v17) = 0;
      if ( !valid )
        goto LABEL_23;
      if ( v20 == 16843010 )
      {
        v20 = 67174658;
        if ( *(_DWORD *)(a1 + 464) != 3 )
          v20 = 16843010;
      }
      else if ( v20 == 16843009 )
      {
        v20 = 16843009;
        if ( *(_DWORD *)(a1 + 464) == 3 )
          v20 = 67174657;
      }
      if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
      {
        v12 = -1073676282;
        break;
      }
      if ( a8 )
        v30 = (_QWORD *)(v56 + v15);
      else
        v30 = v13;
      if ( *(_BYTE *)(a1 + 32) >= 6u
        && ((IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v20),
             (v32 = IsSatisfiedByOidGenStatistics) != 0)
         || v20 == 131334) )
      {
        if ( v48 == (_BYTE)v17 )
        {
          memset(v63, 0, 0x98uLL);
          v34 = ndisQueryDeviceOid(v60, &v64, 0x20106u, v63, 0x98u);
          v17 = 0LL;
          v12 = v34;
          if ( v34 )
            goto LABEL_70;
          v48 = 1;
        }
        v35 = v11 - v15;
        if ( v20 == 131334 )
        {
          BytesWritten = 152;
          if ( v35 >= 0x98 )
          {
            memmove(v30, v63, 0x98uLL);
            v17 = 0LL;
            goto LABEL_54;
          }
LABEL_69:
          v12 = -1073676268;
LABEL_70:
          BytesWritten = (unsigned int)v17;
          goto LABEL_54;
        }
        if ( v35 < 8 )
          goto LABEL_69;
        BytesWritten = 8;
        *v30 = *(_QWORD *)((char *)v63 + v32);
      }
      else
      {
        v33 = ndisQueryDeviceOid(v29, &v64, v20, v30, v11 - v15);
        v17 = 0LL;
        v12 = v33;
        BytesWritten = 0;
        if ( !v33 )
          BytesWritten = v64.DATA.QUERY_INFORMATION.BytesWritten;
      }
LABEL_54:
      p_Src = v17;
      if ( a8 == (_BYTE)v17 )
        p_Src = v30;
      if ( v12 )
        break;
      v9 = (_DWORD *)v56;
      if ( BytesWritten )
        goto LABEL_17;
LABEL_20:
      v24 = BytesWritten + v15;
      *v9 = *(_DWORD *)(v61 + 4 * v58);
      v9[1] = BytesWritten;
      if ( a8 == (_BYTE)v17 )
      {
        v11 -= v24;
        v9 = (_DWORD *)((char *)v9 + v24);
        v50 += v24;
      }
      else
      {
        v45 = v9 + 2;
        v46 = v11 - v15 - 4;
        v47 = (v24 + 7) & 0xFFFFFFF8;
        if ( v46 >= v47 )
          v11 -= v47;
        else
          v11 -= v24;
        if ( v46 >= v47 )
          v24 = (v24 + 7) & 0xFFFFFFF8;
        v9 = (_DWORD *)((char *)v9 + v24);
        *v45 = v24;
        v50 += v24;
      }
      v56 = (__int64)v9;
LABEL_23:
      v18 = v58 + 1;
      ++v54;
      ++v58;
      if ( v54 >= v55 )
        break;
      v13 = P;
    }
  }
LABEL_24:
  v25 = v52;
LABEL_25:
  *v62 = v50;
  if ( *v25 != (_BYTE)v17 && v12 == -1073741637 )
    v12 = (unsigned int)v17;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_5eb2c2b9ff2532e0d02b0f2c9580dec3_Traceguids,
      a1,
      v12);
  return v12;
}
