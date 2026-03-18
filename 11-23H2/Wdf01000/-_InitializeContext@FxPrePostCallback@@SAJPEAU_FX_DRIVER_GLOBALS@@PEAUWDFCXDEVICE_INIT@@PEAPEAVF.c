/*
 * XREFs of ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C0079BF4
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPrePostCallback::_InitializeContext(
        _FX_DRIVER_GLOBALS *Globals,
        WDFCXDEVICE_INIT *CxInit,
        FX_POOL ***Context,
        unsigned __int8 CallbackType)
{
  FX_POOL *EvtCxDevicePreDisarmWakeFromSx; // rbx
  FX_POOL *EvtCxDevicePostDisarmWakeFromSx; // rdi
  FX_POOL *EvtCxDevicePreArmWakeFromSxFailedCleanup; // rsi
  bool v11; // zf
  ULONG Tag; // ecx
  void *v13; // rax
  FX_POOL **v14; // rax
  __m128i v15; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( CallbackType > 0xAu )
  {
    if ( CallbackType > 0x10u )
    {
      switch ( CallbackType )
      {
        case 0x11u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromSx;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromSx;
          break;
        case 0x12u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromS0Triggered;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromS0Triggered;
          break;
        case 0x13u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromSxTriggered;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostWakeFromSxTriggered;
          break;
        case 0x14u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0ExitPreHardwareDisabled;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0ExitPreHardwareDisabled;
          break;
        default:
          goto LABEL_50;
      }
    }
    else
    {
      switch ( CallbackType )
      {
        case 0x10u:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromS0;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostDisarmWakeFromS0;
          break;
        case 0xBu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspend;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspend;
          break;
        case 0xCu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoSuspendEx;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoSuspendEx;
          break;
        case 0xDu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoFlush;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoFlush;
          break;
        case 0xEu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoCleanup;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoCleanup;
          break;
        case 0xFu:
          EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSurpriseRemoval;
          EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSurpriseRemoval;
          break;
        default:
          goto LABEL_50;
      }
    }
    goto LABEL_46;
  }
  if ( CallbackType == 10 )
  {
    EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Exit;
    EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Exit;
    goto LABEL_46;
  }
  if ( CallbackType > 5u )
  {
    switch ( CallbackType )
    {
      case 6u:
        EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSx;
        EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSx;
        EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxFailedCleanup;
        goto LABEL_47;
      case 7u:
        EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReason;
        EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSxWithReason;
        EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup;
        goto LABEL_47;
      case 8u:
        EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabled;
        EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0EntryPostHardwareEnabled;
        EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup;
        goto LABEL_47;
    }
    if ( CallbackType != 9 )
      goto LABEL_50;
    EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreReleaseHardware;
    EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostReleaseHardware;
LABEL_46:
    EvtCxDevicePreArmWakeFromSxFailedCleanup = 0LL;
    goto LABEL_47;
  }
  switch ( CallbackType )
  {
    case 5u:
      EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0;
      EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromS0;
      EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0FailedCleanup;
      goto LABEL_47;
    case 0u:
      EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardware;
      EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostPrepareHardware;
      EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePrePrepareHardwareFailedCleanup;
      goto LABEL_47;
    case 1u:
      EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0Entry;
      EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostD0Entry;
      EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreD0EntryFailedCleanup;
      goto LABEL_47;
    case 2u:
      EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInit;
      EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoInit;
      EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoInitFailedCleanup;
      goto LABEL_47;
    case 3u:
      EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestart;
      EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestart;
      EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartFailedCleanup;
      goto LABEL_47;
  }
  if ( CallbackType != 4 )
  {
LABEL_50:
    *Context = 0LL;
    return 0LL;
  }
  EvtCxDevicePreDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartEx;
  EvtCxDevicePostDisarmWakeFromSx = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePostSelfManagedIoRestartEx;
  EvtCxDevicePreArmWakeFromSxFailedCleanup = (FX_POOL *)CxInit->PnpPowerCallbacks.PnpPowerCallbacks.EvtCxDevicePreSelfManagedIoRestartExFailedCleanup;
LABEL_47:
  if ( !EvtCxDevicePreDisarmWakeFromSx && !EvtCxDevicePostDisarmWakeFromSx && !EvtCxDevicePreArmWakeFromSxFailedCleanup )
    goto LABEL_50;
  v11 = Globals->FxPoolTrackingOn == 0;
  Tag = Globals->Tag;
  v15.m128i_i64[0] = 0LL;
  v15.m128i_i64[1] = 64LL;
  if ( v11 )
    v13 = 0LL;
  else
    v13 = retaddr;
  v14 = FxPoolAllocator(Globals, &Globals->FxPoolFrameworks, &v15, 0x20uLL, Tag, v13);
  if ( v14 )
  {
    *(_BYTE *)v14 = CallbackType;
    *((_BYTE *)v14 + 1) = 0;
    *(_OWORD *)(v14 + 1) = 0LL;
    v14[1] = EvtCxDevicePreDisarmWakeFromSx;
    v14[2] = EvtCxDevicePostDisarmWakeFromSx;
    v14[3] = EvtCxDevicePreArmWakeFromSxFailedCleanup;
    *Context = v14;
    return 0LL;
  }
  WPP_IFR_SF_(Globals, 2u, 0x12u, 0xAu, WPP_CxPnpPowerCallbacks_cpp_Traceguids);
  return 3221225626LL;
}
