/*
 * XREFs of HvlpSetRegister64 @ 0x1405494F0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140382A70 (HvlEnlightenProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053FC0C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x140540010 (HvlLogGuestCrashInformation.c)
 *     HvlSetGuestSchedulerEventRegister @ 0x140540C70 (HvlSetGuestSchedulerEventRegister.c)
 *     HvlpPhase0Enlightenments @ 0x140549ADC (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x140549C98 (HvlpTryToLockCpuManagementVersion.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405A05A4 (PpmHvSetVirtualProcessorQos.c)
 *     HvlDeleteProcessor @ 0x1409413FC (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D820 (RtlRaiseException.c)
 */

void __fastcall HvlpSetRegister64(int a1, unsigned __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx

  if ( a1 > 655362 )
  {
    if ( a1 > 655370 )
    {
      v21 = a1 - 655371;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 == 4 )
                {
                  v9 = 1073741955;
                  goto LABEL_36;
                }
                goto LABEL_43;
              }
            }
          }
        }
      }
LABEL_35:
      v9 = a1 + 1073086608;
      goto LABEL_36;
    }
    if ( a1 == 655370 )
      goto LABEL_35;
    v16 = a1 - 655363;
    if ( !v16 )
      goto LABEL_35;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_35;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_35;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_35;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_35;
    v15 = v20 - 1;
    v14 = v15 == 0;
LABEL_33:
    if ( !v14 && v15 != 1 )
      goto LABEL_43;
    goto LABEL_35;
  }
  if ( a1 == 655362 )
    goto LABEL_35;
  if ( a1 > 589826 )
  {
    v10 = a1 - 589831;
    if ( !v10 )
    {
      v9 = 1073741828;
      goto LABEL_36;
    }
    v11 = v10 - 12;
    if ( !v11 )
    {
      v9 = 1073741939;
      goto LABEL_36;
    }
    v12 = v11 - 4;
    if ( !v12 )
    {
      v9 = 1073741857;
      goto LABEL_36;
    }
    v13 = v12 - 4;
    if ( !v13 )
    {
      v9 = 1073742018;
      goto LABEL_36;
    }
    v15 = v13 - 65509;
    v14 = v15 == 0;
    goto LABEL_33;
  }
  if ( a1 == 589826 )
  {
    v9 = 0x40000000;
    goto LABEL_36;
  }
  v3 = a1 - 528;
  if ( !v3 || (v4 = v3 - 1) == 0 || (v5 = v4 - 1) == 0 || (v6 = v5 - 1) == 0 || (v7 = v6 - 1) == 0 )
  {
    v9 = a1 + 1073741552;
    goto LABEL_36;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 1073742085;
    goto LABEL_36;
  }
  if ( v8 == 91 )
  {
    v9 = 1073742102;
LABEL_36:
    __writemsr(v9, a2);
    return;
  }
LABEL_43:
  RtlRaiseException(&ExceptionRecord);
}
