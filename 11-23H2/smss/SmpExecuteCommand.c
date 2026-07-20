/*
 * XREFs of SmpExecuteCommand @ 0x140004F44
 * Callers:
 *     SmpStartCsr @ 0x140003C50 (SmpStartCsr.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140004430 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140004B10 (SmscpExecuteInitialCommand.c)
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x1400198F0 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmpParseCommandLine @ 0x140005150 (SmpParseCommandLine.c)
 *     SmpExecuteImage @ 0x14000584C (SmpExecuteImage.c)
 *     SmscpLoadSubSystem @ 0x140006588 (SmscpLoadSubSystem.c)
 *     SmpInvokeAutoChk @ 0x140006A98 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  struct _UNICODE_STRING *v7; // rsi
  int v8; // ebx
  int v9; // r9d
  signed __int32 v10; // ecx
  __int64 v11; // rax
  int SubSystem; // eax
  __int64 v13; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-10h] BYREF
  int v17; // [rsp+B8h] [rbp+48h] BYREF

  v17 = a4;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v7 = &v16;
  if ( (a4 & 0x400) != 0 )
    v7 = 0LL;
  v8 = SmpParseCommandLine(a1, &v17, &UnicodeString, v7);
  if ( v8 < 0 )
  {
    v10 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v11 = 2LL * v10;
    SmpGlobalLog[4 * v10 + 2] = 9768;
    goto LABEL_23;
  }
  if ( (v17 & 4) != 0 )
  {
    if ( !SmpSoftBoot || SmpBugcheckRecovery )
    {
      SubSystem = SmpInvokeAutoChk((int)&UnicodeString, (int)v7, &Source);
LABEL_18:
      v8 = SubSystem;
    }
  }
  else
  {
    if ( (v17 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        SubSystem = SmpLoadSubSystem((int)&UnicodeString, (int)v7, a1, (int)&Source, v17);
      else
        SubSystem = SmscpLoadSubSystem((int)&UnicodeString, (int)v7, a1, v17);
      goto LABEL_18;
    }
    if ( (v17 & 0x10) == 0 )
    {
      SubSystem = SmpExecuteImage((int)&UnicodeString, (int)v7, a1, v9, 0LL, v17, ProcessParameters);
      goto LABEL_18;
    }
    v8 = -1073741772;
    v13 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v13 + 2] = 9811;
    SmpGlobalLog[2 * v13 + 3] = -1073741772;
    *(_QWORD *)&SmpGlobalLog[2 * v13 + 4] = a1;
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&Source);
  if ( v7 )
    RtlFreeUnicodeString(&v16);
  if ( v8 >= 0 )
    return (unsigned int)v8;
  v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
  SmpGlobalLog[2 * v11 + 2] = 9844;
LABEL_23:
  *(_QWORD *)&SmpGlobalLog[2 * v11 + 4] = a1;
  SmpGlobalLog[2 * v11 + 3] = v8;
  return (unsigned int)v8;
}
