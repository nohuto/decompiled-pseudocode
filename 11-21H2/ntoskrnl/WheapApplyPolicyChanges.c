/*
 * XREFs of WheapApplyPolicyChanges @ 0x140A09578
 * Callers:
 *     WheapPfaReset @ 0x140A0A16C (WheapPfaReset.c)
 * Callees:
 *     HalWheaUpdateCmciPolicy @ 0x1403DA050 (HalWheaUpdateCmciPolicy.c)
 *     __report_rangecheckfailure @ 0x140502A3C (__report_rangecheckfailure.c)
 */

void WheapApplyPolicyChanges()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  unsigned int *v3; // rcx
  bool v4; // zf
  int v5; // ecx
  unsigned int v6; // edx
  BOOL v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  do
  {
    if ( !WheaRegPolicyTableChanged[v1] )
      goto LABEL_38;
    if ( v2 >= 68 )
      _report_rangecheckfailure();
    v3 = (unsigned int *)(&off_140A3A108)[v2];
    WheaRegPolicyTableChanged[v1] = 0;
    if ( v0 <= 8 )
    {
      switch ( v0 )
      {
        case 8u:
          v6 = *v3;
          v5 = 8;
          WheaRegistryKeysPresent |= 0x400u;
          WheapPolicyRestoreCmciMaxAttempts = v6;
          break;
        case 0u:
          WheapPolicyDisableOffline = *v3 != 0;
          WheaRegistryKeysPresent |= 1u;
          goto LABEL_38;
        case 1u:
          WheapPolicyMemPersistOffline = *v3 != 0;
          WheaRegistryKeysPresent |= 2u;
          goto LABEL_38;
        case 2u:
          WheapPolicyMemPfaDisable = *v3 != 0;
          WheaRegistryKeysPresent |= 4u;
          goto LABEL_38;
        case 3u:
          v10 = *v3;
          WheaRegistryKeysPresent |= 8u;
          WheapPolicyMemPfaPageCount = v10;
          goto LABEL_38;
        case 4u:
          v9 = *v3;
          WheaRegistryKeysPresent |= 0x10u;
          WheapPolicyMemPfaThreshold = v9;
          goto LABEL_38;
        case 5u:
          v8 = *v3;
          WheaRegistryKeysPresent |= 0x20u;
          WheapPolicyMemPfaTimeout = 10000000 * v8;
          goto LABEL_38;
        case 6u:
          v7 = *v3 != 0;
          WheaRegistryKeysPresent |= 0x100u;
          WheaRegPolicyIgnoreDummyWrite = v7;
          goto LABEL_38;
        default:
          v4 = *v3 == 0;
          v5 = 7;
          WheaRegistryKeysPresent |= 0x200u;
          WheapPolicyRestoreCmciEnabled = !v4;
          v6 = !v4;
          break;
      }
      goto LABEL_37;
    }
    switch ( v0 )
    {
      case 9u:
        v6 = *v3;
        v5 = 9;
        WheaRegistryKeysPresent |= 0x800u;
        WheapPolicyRestoreCmciErrorLimit = v6;
        goto LABEL_37;
      case 0xAu:
        v6 = *v3;
        v5 = 10;
        WheaRegistryKeysPresent |= 0x1000u;
        WheapPolicyCmciThresholdCount = v6;
        goto LABEL_37;
      case 0xBu:
        v6 = *v3;
        v5 = 11;
        WheaRegistryKeysPresent |= 0x2000u;
        WheapPolicyCmciThresholdTime = v6;
        goto LABEL_37;
      case 0xCu:
        v6 = *v3;
        v5 = 12;
        WheaRegistryKeysPresent |= 0x4000u;
        WheapPolicyCmciThresholdPollCount = v6;
LABEL_37:
        HalWheaUpdateCmciPolicy(v5, v6);
        break;
      case 0xDu:
        v13 = *v3;
        WheaRegistryKeysPresent |= 0x8000u;
        WheapPolicyPendingPageListSz = v13;
        break;
      case 0xEu:
        v12 = *v3;
        WheaRegistryKeysPresent |= 0x10000u;
        WheapPolicyBadPageListMaxSize = v12;
        break;
      case 0xFu:
        v11 = *v3;
        WheaRegistryKeysPresent |= 0x20000u;
        WheapPolicyBadPageListLocation = v11;
        break;
      default:
        WheapPolicyNotifyAllOfflines = *v3 != 0;
        WheaRegistryKeysPresent |= 0x40000u;
        break;
    }
LABEL_38:
    ++v0;
    ++v1;
    v2 += 4LL;
  }
  while ( v0 < 0x11 );
}
