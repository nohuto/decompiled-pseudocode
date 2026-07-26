/*
 * XREFs of ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A8B8
 * Callers:
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095D50 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C000 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C0137134 (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x1C01371C0 (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 */

__int64 __fastcall ndisXlateAddPacketPatternToWolPatternOid(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r12d
  unsigned int v7; // edi
  _DWORD *InformationBuffer; // r14
  unsigned int v9; // esi
  unsigned int v10; // ecx
  int v11; // r13d
  UINT v12; // edi
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  int v15; // ecx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v18; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0;
  MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(&P);
  v4 = P;
  if ( !P )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        (_DWORD)P + 11,
        (_WORD)P + 107,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        a1);
    v5 = -1073741670;
    goto LABEL_23;
  }
  v6 = -1;
  *(_DWORD *)P = a1->DATA.QUERY_INFORMATION.Oid;
  v7 = -1;
  v4[1] = a1->DATA.QUERY_INFORMATION.InformationBuffer;
  *((_DWORD *)v4 + 4) = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
  InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
  v9 = InformationBuffer[2];
  if ( v9 < 0xFFFFFFE8 )
    v7 = v9 + 24;
  if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v9 >= 0xFFFFFFE8 ? 0xC0000095 : 0) )
  {
    v10 = InformationBuffer[3];
    if ( v10 >= v7 )
    {
      v11 = InformationBuffer[4];
      v12 = -1;
      if ( v10 + v11 >= v10 )
        v12 = v10 + v11;
      if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v10 + v11 < v10 ? 0xC0000095 : 0) )
      {
        if ( a1->DATA.QUERY_INFORMATION.InformationBufferLength >= v12 )
        {
          if ( v9 + v11 >= v9 )
            v6 = v9 + v11;
          v5 = NdisConvertNtStatusToNdisStatus(v9 + v11 < v9 ? 0xC0000095 : 0);
          if ( !v5 )
          {
            LODWORD(P) = 0;
            MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(&v18, v13, v6, &P);
            v14 = v18;
            if ( v18 )
            {
              *v18 = 12845440;
              v14[37] = InformationBuffer[1];
              v14[2] = *InformationBuffer;
              v14[3] = 1;
              v14[40] = 196;
              v15 = InformationBuffer[2];
              v14[41] = v15;
              v14[42] = v14[40] + v15;
              v14[43] = InformationBuffer[4];
              memmove((char *)v14 + (unsigned int)v14[40], InformationBuffer + 6, (unsigned int)InformationBuffer[2]);
              memmove(
                (char *)v14 + (unsigned int)v14[42],
                (char *)InformationBuffer + (unsigned int)InformationBuffer[3],
                (unsigned int)InformationBuffer[4]);
              a1->DATA.QUERY_INFORMATION.InformationBufferLength = (unsigned int)P;
              a1->DATA.QUERY_INFORMATION.Oid = -50265846;
              a1->DATA.QUERY_INFORMATION.InformationBuffer = v14;
              v4[3] = v14;
              *(_QWORD *)&a1->NdisReserved[72] = v4;
              return v5;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                v5 + 11,
                v5 + 108,
                (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
                a1);
            v5 = -1073741670;
            goto LABEL_22;
          }
        }
        else
        {
          a1->DATA.QUERY_INFORMATION.BytesNeeded = v12;
        }
      }
    }
  }
  v5 = -1073676267;
LABEL_22:
  ExFreePoolWithTag(v4, 0);
LABEL_23:
  *a2 = 1;
  return v5;
}
