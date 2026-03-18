/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C0034C78
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C003649C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000C19C (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026F14 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0032B34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C0032CA4 (WPP_RECORDER_SF_Ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C003304C (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        int *a3,
        int *a4,
        __int64 a5,
        _BYTE *a6)
{
  int *v6; // r14
  _BYTE *v10; // r12
  int v11; // r15d
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  int v17; // r10d
  __int64 v18; // r11
  int v19; // edx
  char v20; // r12
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  __int64 v38; // [rsp+38h] [rbp-40h]
  int v39; // [rsp+80h] [rbp+8h] BYREF

  v39 = 0;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v39;
  }
  v10 = a6;
  if ( a6 )
    *a6 = 0;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  LODWORD(a6) = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x47u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v11);
    v14 = 40LL;
LABEL_149:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
    goto LABEL_150;
  }
  if ( (unsigned __int8)v13 >= 6u )
  {
LABEL_16:
    if ( *a1 > 6u )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v38) = v17;
        LODWORD(v37) = v11;
        LODWORD(v36) = *a1;
        WPP_RECORDER_SF_DDD(a5, 2u, v16, 0x4Au, v18, v36, v37, v38);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 42LL);
    }
    v19 = *(_DWORD *)(a2 + 256);
    if ( (v19 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x4Bu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 41LL);
      *v6 = 2;
      goto LABEL_26;
    }
    v22 = (unsigned int)a6;
    v23 = v19 & 0xFFFFFFEB | 0x10;
    *(_DWORD *)(a2 + 256) = v23;
    if ( *a3 > v22 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x4Cu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36);
      }
      v14 = 44LL;
      goto LABEL_149;
    }
    v24 = *(_QWORD *)(a2 + 192);
    switch ( *(_BYTE *)(v24 + 3) & 3 )
    {
      case 0:
        if ( a1[2] )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x4Du, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 38LL);
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x4Eu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 37LL);
        }
        if ( !*((_WORD *)a1 + 2) )
          goto LABEL_150;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v36) = v11;
          WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x4Fu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
        }
        v14 = 39LL;
        goto LABEL_149;
      case 1:
        v30 = v23 & 0xFFFFFFDF;
        *(_DWORD *)(a2 + 256) = v30;
        v31 = v30 & 0xFFFFFFF7;
        *(_DWORD *)(a2 + 256) = v31 | (a1[3] >> 4) & 0xFFFFFF8;
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x58u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 50LL);
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v38) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DDD(
              a5,
              2u,
              v32,
              0x59u,
              (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
              v36,
              v37,
              v38);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 51LL);
        }
        if ( (*(_DWORD *)(a2 + 256) & 8) == 0 && (a1[3] & 3) == 3 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3] & 3;
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_Ld(a5, v33, 5u, 0x5Au, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 52LL);
        }
        if ( (a1[3] & 0x7C) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x5Bu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 49LL);
        }
        v20 = 1;
        if ( (*(_DWORD *)(a2 + 256) & 8) == 0 )
        {
          v34 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
          if ( *((unsigned __int16 *)a1 + 2) <= (unsigned int)v34 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddd(a5, v34, (__int64)a3, 0x5Cu, v35);
          v27 = 53LL;
LABEL_66:
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v27);
          break;
        }
        if ( *((_WORD *)a1 + 2) != 1 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_Ld(a5, v31, 5u, 0x5Du, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 204LL);
        }
        break;
      case 2:
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x50u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 34LL);
        }
        v28 = a1[3];
        if ( (v28 & 0x1F) != 0 && v10 )
        {
          *v10 = 1;
          v28 = a1[3];
        }
        if ( (v28 & 0x1Fu) > 0x10 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3] & 0x1F;
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_Ld(a5, v29, 5u, 0x51u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 35LL);
        }
        if ( a1[3] >= 0x20u )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x52u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 33LL);
        }
        if ( !*((_WORD *)a1 + 2) )
          goto LABEL_150;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v36) = v11;
          WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x53u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
        }
        v14 = 36LL;
        goto LABEL_149;
      case 3:
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x54u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 45LL);
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v38) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
            LODWORD(v37) = a1[2];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DDD(
              a5,
              2u,
              v25,
              0x55u,
              (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
              v36,
              v37,
              v38);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 46LL);
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = a1[3];
            LODWORD(v36) = v11;
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x56u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v36, v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 47LL);
        }
        v20 = 1;
        v26 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
        if ( *((unsigned __int16 *)a1 + 2) > (unsigned int)v26 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddd(a5, v26, (__int64)a3, 0x57u, v35);
          v27 = 48LL;
          goto LABEL_66;
        }
        break;
      default:
LABEL_150:
        v20 = 1;
        break;
    }
LABEL_151:
    if ( !*v6 )
      return v20;
    goto LABEL_26;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 43LL);
  *v6 = 2;
  if ( (unsigned int)a6 >= 6 )
  {
    *a3 = 6;
    v15 = 6;
    goto LABEL_14;
  }
  v15 = *a3;
  if ( (unsigned int)*a3 >= 6 )
  {
LABEL_14:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x49u,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        *a1,
        v11,
        6,
        v15);
    goto LABEL_16;
  }
  v20 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(
      a5,
      2u,
      (__int64)a3,
      0x48u,
      (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
      *a1,
      v11,
      6);
    goto LABEL_151;
  }
LABEL_26:
  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a5, 2u, 5u, 0x5Eu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  return v20;
}
