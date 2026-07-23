/*
 * XREFs of HvlpGetRegister64 @ 0x1405493A0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140382A70 (HvlEnlightenProcessor.c)
 *     HvlGetReferenceTime @ 0x1403C87C4 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x1403C8800 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlLogGuestCrashInformation @ 0x140540010 (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x140549ADC (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x140549C98 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x1409413FC (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D820 (RtlRaiseException.c)
 */

void __fastcall HvlpGetRegister64(int a1, _QWORD *a2)
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
  int v14; // ecx
  bool v15; // zf
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
  int v26; // ecx

  if ( a1 > 655362 )
  {
    if ( a1 > 655370 )
    {
      v22 = a1 - 655371;
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
              v26 = v25 - 1;
              if ( v26 )
              {
                if ( v26 == 4 )
                {
                  v9 = 1073741955;
                  goto LABEL_38;
                }
                goto LABEL_45;
              }
            }
          }
        }
      }
LABEL_37:
      v9 = a1 + 1073086608;
      goto LABEL_38;
    }
    if ( a1 == 655370 )
      goto LABEL_37;
    v17 = a1 - 655363;
    if ( !v17 )
      goto LABEL_37;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_37;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_37;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_37;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_37;
    v16 = v21 - 1;
    v15 = v16 == 0;
LABEL_35:
    if ( !v15 && v16 != 1 )
      goto LABEL_45;
    goto LABEL_37;
  }
  if ( a1 == 655362 )
    goto LABEL_37;
  if ( a1 > 589826 )
  {
    v10 = a1 - 589827;
    if ( !v10 )
    {
      v9 = 1073741826;
      goto LABEL_38;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v9 = 1073741856;
      goto LABEL_38;
    }
    v12 = v11 - 3;
    if ( !v12 )
    {
      v9 = 1073741828;
      goto LABEL_38;
    }
    v13 = v12 - 12;
    if ( !v13 )
    {
      v9 = 1073741939;
      goto LABEL_38;
    }
    v14 = v13 - 4;
    if ( !v14 )
    {
      v9 = 1073741857;
      goto LABEL_38;
    }
    v16 = v14 - 65513;
    v15 = v16 == 0;
    goto LABEL_35;
  }
  if ( a1 == 589826 )
  {
    v9 = 0x40000000;
    goto LABEL_38;
  }
  v3 = a1 - 528;
  if ( !v3 || (v4 = v3 - 1) == 0 || (v5 = v4 - 1) == 0 || (v6 = v5 - 1) == 0 || (v7 = v6 - 1) == 0 )
  {
    v9 = a1 + 1073741552;
    goto LABEL_38;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 1073742085;
    goto LABEL_38;
  }
  if ( v8 == 91 )
  {
    v9 = 1073742102;
LABEL_38:
    *a2 = __readmsr(v9);
    return;
  }
LABEL_45:
  RtlRaiseException(&ExceptionRecord);
}
