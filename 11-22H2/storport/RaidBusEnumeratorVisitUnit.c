/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C00165A8
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0015F44 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C003A2BC (RaidAdapterTargetedRescan.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0063260 (RaidUpdateUnitIdentityWorkRoutine.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidRemoveTrailingBlanks @ 0x1C00071F8 (RaidRemoveTrailingBlanks.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00164A4 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0016988 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C00177A8 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C00177FC (RaidBusEnumeratorProcessBusUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 Pool; // rax
  int v10; // r8d
  int v11; // r8d
  char v12; // dl
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  _BYTE v17[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h]
  _BYTE *v19; // [rsp+50h] [rbp-B0h]
  __int16 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _OWORD v22[6]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-10h]
  int v24; // [rsp+F8h] [rbp-8h]
  __int64 v25; // [rsp+100h] [rbp+0h]

  memset_0(v17, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, (__int64)v17);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_592e485cf0853391f184037ba0ea23e1_Traceguids,
      v17[4],
      v17[5],
      v17[6]);
  }
  v5 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiryCallback, (_DWORD)a1, a2, (unsigned int)v17, 36);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_592e485cf0853391f184037ba0ea23e1_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 < 0 )
  {
LABEL_23:
    RaidBusEnumeratorProcessBusUnit(a1, v17);
    goto LABEL_24;
  }
  v6 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumSupportedPagesCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v17,
         255);
  v5 = v6;
  if ( v6 != -1073741801 && v6 != -1073741670 )
  {
    if ( (v17[0] & 1) == 0
      || (v13 = RaidBusEnumeratorGenericInquiry(
                  (unsigned int)&RaidEnumDeviceIdCallback,
                  (_DWORD)a1,
                  a2,
                  (unsigned int)v17,
                  255),
          v5 = v13,
          v13 != -1073741801)
      && v13 != -1073741670 )
    {
      if ( (v17[0] & 2) == 0
        || (v14 = RaidBusEnumeratorGenericInquiry(
                    (unsigned int)&RaidEnumSerialNumber,
                    (_DWORD)a1,
                    a2,
                    (unsigned int)v17,
                    255),
            v5 = v14,
            v14 != -1073741801)
        && v14 != -1073741670 )
      {
        if ( !DisableIEEE1667 && ((*v19 & 0x1F) == 0 || (*v19 & 0x1F) == 0x14) )
        {
          v7 = (unsigned __int8)v19[4];
          if ( (unsigned __int8)v7 >= 0x37u )
          {
            v15 = v7 + 5;
            if ( (unsigned __int64)(v7 + 5) > 0xFF )
              v15 = 255;
            RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumInquiry1667Callback,
              (_DWORD)a1,
              a2,
              (unsigned int)v17,
              v15);
          }
        }
        if ( (v17[0] & 4) != 0 )
        {
          RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumAtaInformation, (_DWORD)a1, a2, (unsigned int)v17, 572);
        }
        else if ( v18 && RaidIsUnitControlSupported(v18, 11) )
        {
          memset_0((char *)v22 + 8, 0, 0x68uLL);
          v8 = *a1 + 336;
          v25 = v18 + 88;
          *(_QWORD *)&v22[0] = 0x7800000002LL;
          v5 = RaCallMiniportUnitControl(v8, 11LL, v22);
          if ( v5 >= 0
            || (v16 = *a1 + 336,
                *(_QWORD *)&v22[0] = 0x6C00000001LL,
                v5 = RaCallMiniportUnitControl(v16, 11LL, v22),
                v5 >= 0) )
          {
            Pool = RaidAllocatePool(64LL, 108LL, 842096978LL, *(_QWORD *)(*a1 + 8));
            v21 = Pool;
            if ( !Pool )
            {
              v5 = -1073741801;
              goto LABEL_24;
            }
            *(_OWORD *)Pool = v22[0];
            *(_OWORD *)(Pool + 16) = v22[1];
            *(_OWORD *)(Pool + 32) = v22[2];
            *(_OWORD *)(Pool + 48) = v22[3];
            *(_OWORD *)(Pool + 64) = v22[4];
            *(_OWORD *)(Pool + 80) = v22[5];
            *(_QWORD *)(Pool + 96) = v23;
            *(_DWORD *)(Pool + 104) = v24;
            RaidRemoveTrailingBlanks(v21 + 8, 17);
            RaidRemoveTrailingBlanks(v21 + 25, v10 + 48);
            RaidRemoveTrailingBlanks(v21 + 90, v11);
          }
          else
          {
            v5 = 0;
          }
        }
        v12 = *v19 & 0x1F;
        if ( v12 == 20 )
        {
          v20 |= 2u;
        }
        else if ( (v17[0] & 0x18) == 24 && v12 == 0 )
        {
          RaidBusEnumeratorGenericInquiry(
            (unsigned int)&RaidEnumBlockDeviceCharacteristics,
            (_DWORD)a1,
            a2,
            (unsigned int)v17,
            64);
        }
        goto LABEL_23;
      }
    }
  }
LABEL_24:
  RaidBusEnumeratorReleaseUnit(a1, v17);
  if ( v5 != -1073741801 && v5 != -1073741670 )
    return 0;
  return (unsigned int)v5;
}
