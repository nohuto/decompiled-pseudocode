/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C001B258
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C001AD6C (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0038CE0 (RaidAdapterTargetedRescan.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0056490 (RaidUpdateUnitIdentityWorkRoutine.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C000BA78 (RaidRemoveTrailingBlanks.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001B614 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C001BF3C (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C001BF90 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     WPP_SF_d @ 0x1C003C4B8 (WPP_SF_d.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 Pool; // rax
  int v11; // r8d
  int v12; // r8d
  char v13; // dl
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  char v17; // [rsp+28h] [rbp-D8h]
  char v18; // [rsp+28h] [rbp-D8h]
  char v19; // [rsp+28h] [rbp-D8h]
  __int64 v20[12]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v21[112]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]

  memset(v20, 0, sizeof(v20));
  result = RaidBusEnumeratorGetUnit(a1, a2, (__int64)v20);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_e288614d163b3ceea713389723084ed3_Traceguids,
      BYTE4(v20[0]),
      BYTE5(v20[0]),
      BYTE6(v20[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumInquiryCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v20,
         36,
         v17);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_e288614d163b3ceea713389723084ed3_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = 255;
    v7 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           (_DWORD)a1,
           a2,
           (unsigned int)v20,
           255,
           v18);
    v5 = v7;
    if ( v7 == -1073741801 )
      goto LABEL_23;
    if ( v7 == -1073741670 )
      goto LABEL_23;
    if ( (v20[0] & 1) != 0 )
    {
      v14 = RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumDeviceIdCallback,
              (_DWORD)a1,
              a2,
              (unsigned int)v20,
              255,
              v19);
      v5 = v14;
      if ( v14 == -1073741801 || v14 == -1073741670 )
        goto LABEL_23;
    }
    if ( (v20[0] & 2) != 0 )
    {
      v15 = RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumSerialNumber,
              (_DWORD)a1,
              a2,
              (unsigned int)v20,
              255,
              v19);
      v5 = v15;
      if ( v15 == -1073741801 || v15 == -1073741670 )
        goto LABEL_23;
    }
    if ( (*(_BYTE *)v20[4] & 0x1F) == 0 || (*(_BYTE *)v20[4] & 0x1F) == 0x14 )
    {
      v8 = *(unsigned __int8 *)(v20[4] + 4);
      if ( (unsigned __int8)v8 >= 0x37u )
      {
        if ( (unsigned __int64)(v8 + 5) <= 0xFF )
          v6 = v8 + 5;
        RaidBusEnumeratorGenericInquiry(
          (unsigned int)&RaidEnumInquiry1667Callback,
          (_DWORD)a1,
          a2,
          (unsigned int)v20,
          v6,
          v19);
      }
    }
    if ( (v20[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumAtaInformation,
        (_DWORD)a1,
        a2,
        (unsigned int)v20,
        572,
        v19);
    }
    else if ( v20[1] && RaidIsUnitControlSupported(v20[1], 11) )
    {
      memset(&v21[8], 0, 0x68uLL);
      v9 = *a1;
      *(_QWORD *)v21 = 0x7800000002LL;
      v22 = v20[1] + 88;
      v5 = RaCallMiniportUnitControl(v9 + 336, 11LL, v21);
      if ( v5 >= 0
        || (v16 = *a1 + 336, *(_QWORD *)v21 = 0x6C00000001LL, v5 = RaCallMiniportUnitControl(v16, 11LL, v21), v5 >= 0) )
      {
        Pool = RaidAllocatePool(64LL, 108LL, 842096978LL, *(_QWORD *)(*a1 + 8));
        v20[10] = Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_23;
        }
        *(_OWORD *)Pool = *(_OWORD *)v21;
        *(_OWORD *)(Pool + 16) = *(_OWORD *)&v21[16];
        *(_OWORD *)(Pool + 32) = *(_OWORD *)&v21[32];
        *(_OWORD *)(Pool + 48) = *(_OWORD *)&v21[48];
        *(_OWORD *)(Pool + 64) = *(_OWORD *)&v21[64];
        *(_OWORD *)(Pool + 80) = *(_OWORD *)&v21[80];
        *(_QWORD *)(Pool + 96) = *(_QWORD *)&v21[96];
        *(_DWORD *)(Pool + 104) = *(_DWORD *)&v21[104];
        RaidRemoveTrailingBlanks(v20[10] + 8, 17);
        RaidRemoveTrailingBlanks(v20[10] + 25, v11 + 48);
        RaidRemoveTrailingBlanks(v20[10] + 90, v12);
      }
      else
      {
        v5 = 0;
      }
    }
    v13 = *(_BYTE *)v20[4] & 0x1F;
    if ( v13 == 20 )
    {
      LOWORD(v20[7]) |= 2u;
    }
    else if ( (v20[0] & 0x18) == 24 && v13 == 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumBlockDeviceCharacteristics,
        (_DWORD)a1,
        a2,
        (unsigned int)v20,
        64,
        v19);
    }
  }
  RaidBusEnumeratorProcessBusUnit(a1, v20);
LABEL_23:
  RaidBusEnumeratorReleaseUnit(a1, v20);
  if ( v5 == -1073741801 || v5 == -1073741670 )
    return (unsigned int)v5;
  else
    return 0LL;
}
