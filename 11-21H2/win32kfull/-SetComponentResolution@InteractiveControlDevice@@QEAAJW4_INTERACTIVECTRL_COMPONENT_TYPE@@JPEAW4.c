/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0254A88
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024F594 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C024FB40 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255184 (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D08A8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C024E748 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C025798C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0259264 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, NTSTATUS a2, int a3, _DWORD *a4)
{
  int v4; // r14d
  unsigned int v8; // r12d
  CHAR *v9; // r15
  struct InteractiveControlManager *v10; // rax
  int v11; // ecx
  _QWORD *v13; // rsi
  _QWORD *v14; // r13
  NTSTATUS v15; // eax
  _QWORD *v16; // rbx
  NTSTATUS SpecificValueCaps; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  ULONG LogicalMin; // esi
  __int64 v22; // rax
  SimpleHapticsController *v23; // rcx
  SimpleHapticsController *v24; // rcx
  int ScaledComponentValue; // eax
  _DWORD *v26; // rsi
  int v27; // eax
  int v28; // eax
  ULONG UsageValue; // [rsp+40h] [rbp-C0h]
  NTSTATUS v30; // [rsp+44h] [rbp-BCh] BYREF
  USHORT ValueCapsLength; // [rsp+48h] [rbp-B8h] BYREF
  USHORT v32; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v38; // [rsp+C0h] [rbp-40h] BYREF

  LODWORD(v33) = a3;
  v4 = a3;
  v30 = a2;
  v34 = a4;
  ValueCapsLength = 1;
  v8 = 0;
  v9 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  UsageValue = 2;
  if ( !a4 || (UsageValue = 2, *a4) )
  {
LABEL_8:
    if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
      v4 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
    goto LABEL_11;
  }
  UsageValue = 2;
  if ( !*(_DWORD *)(a1 + 64) )
  {
    UsageValue = 2;
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      v10 = InteractiveControlManager::Instance();
      v11 = 2;
      if ( *((_DWORD *)v10 + 25) )
        v11 = 3;
      UsageValue = v11;
    }
    goto LABEL_8;
  }
LABEL_11:
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v4 = (v4 << 8) / *((_DWORD *)InteractiveControlManager::Instance() + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v13 = (_QWORD *)(a1 + 184);
  v14 = *(_QWORD **)(a1 + 184);
  if ( v14 == (_QWORD *)(a1 + 184) )
    return v8;
  v15 = a2;
  while ( 1 )
  {
    v16 = v14;
    v14 = (_QWORD *)*v14;
    if ( *((_DWORD *)v16 + 4) == v15 )
      break;
LABEL_60:
    if ( v14 == v13 )
      goto LABEL_65;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v16 + 15),
                        0x48u,
                        &ValueCaps,
                        &ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 256));
  v8 = SpecificValueCaps;
  if ( SpecificValueCaps >= 0 )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) && (v20 = v4 * (__int64)*((int *)v16 + 30)) != 0 && v4 )
    {
      LogicalMin = ValueCaps.LogicalMin;
      v22 = *((int *)v16 + 29) / v20;
      if ( (int)v22 >= ValueCaps.LogicalMin )
      {
        LogicalMin = *((int *)v16 + 29) / v20;
        if ( (int)v22 > ValueCaps.LogicalMax )
          LogicalMin = ValueCaps.LogicalMax;
      }
    }
    else
    {
      LogicalMin = ValueCaps.LogicalMax;
    }
    if ( *((_DWORD *)v16 + 31) != LogicalMin || v34 && *v34 != *(_DWORD *)(a1 + 60) )
    {
      if ( !v9 )
      {
        v9 = (CHAR *)Win32AllocPoolZInit(*(unsigned __int16 *)(a1 + 84), 1819440195LL);
        if ( !v9 )
          return (unsigned int)-1073741670;
      }
      *v9 = ValueCaps.ReportID;
      v23 = *(SimpleHapticsController **)(a1 + 384);
      if ( v23
        && SimpleHapticsController::SendDeviceIOControl(v23, 0xB0192u, 0LL, 0, v9, *(unsigned __int16 *)(a1 + 84), 0LL) >= 0 )
      {
        if ( v34 )
        {
          memset(&v38, 0, sizeof(v38));
          v32 = 1;
          HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v38, &v32, *(PHIDP_PREPARSED_DATA *)(a1 + 256));
          HidP_SetUsageValue(
            HidP_Feature,
            0xEu,
            v38.LinkCollection,
            0x20u,
            UsageValue,
            *(PHIDP_PREPARSED_DATA *)(a1 + 256),
            v9,
            *(unsigned __int16 *)(a1 + 84));
        }
        if ( HidP_SetUsageValue(
               HidP_Feature,
               1u,
               ValueCaps.LinkCollection,
               0x48u,
               LogicalMin,
               *(PHIDP_PREPARSED_DATA *)(a1 + 256),
               v9,
               *(unsigned __int16 *)(a1 + 84)) >= 0 )
        {
          v24 = *(SimpleHapticsController **)(a1 + 384);
          if ( v24 )
          {
            if ( SimpleHapticsController::SendDeviceIOControl(
                   v24,
                   0xB0191u,
                   v9,
                   *(unsigned __int16 *)(a1 + 84),
                   0LL,
                   0,
                   0LL) >= 0 )
              *((_DWORD *)v16 + 31) = LogicalMin;
          }
        }
      }
    }
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v16,
                             1);
    v26 = v34;
    *((_DWORD *)v16 + 28) = ScaledComponentValue;
    if ( v26 )
      *(_DWORD *)(a1 + 60) = *v26;
    v13 = (_QWORD *)(a1 + 184);
LABEL_44:
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( v4 )
        v27 = v4;
      else
        v27 = *((_DWORD *)v16 + 28);
      *((_DWORD *)v16 + 28) = v27;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) != 1 )
      {
        v28 = 1;
        goto LABEL_59;
      }
    }
    else
    {
      v28 = v33;
      if ( (_DWORD)v33 )
      {
LABEL_59:
        *((_DWORD *)v16 + 27) = v28;
        *((_DWORD *)v16 + 26) = 0;
        v15 = v30;
        goto LABEL_60;
      }
    }
    v28 = *((_DWORD *)v16 + 28);
    goto LABEL_59;
  }
  if ( SpecificValueCaps == -1072627708 )
  {
    if ( (unsigned int)dword_1C03262C0 > 4 )
    {
      v36 = (__int64)"Device does not support resolution multiplier. Falling back to OS based scaling.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C03262C0,
        byte_1C02F162D,
        0LL,
        0LL,
        (void **)&v36);
    }
    v8 = 0;
    goto LABEL_44;
  }
  if ( (unsigned int)dword_1C03262C0 > 2 )
  {
    LODWORD(v33) = *((_DWORD *)v16 + 28);
    v30 = SpecificValueCaps;
    v35 = (__int64)"Failed to updated device resolution multiplier. Keeping existing actual resolution.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C03262C0,
      byte_1C02F1EBC,
      v18,
      v19,
      (void **)&v35,
      (__int64)&v30,
      (__int64)&v33);
  }
LABEL_65:
  if ( v9 )
    Win32FreePool(v9);
  return v8;
}
