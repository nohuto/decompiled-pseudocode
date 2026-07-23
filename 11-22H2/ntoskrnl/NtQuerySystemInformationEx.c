/*
 * XREFs of NtQuerySystemInformationEx @ 0x1407C28C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int32 v8; // ecx
  int v9; // edx
  char *v10; // rcx
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int32 v23; // ecx
  __int32 v24; // ecx
  __int32 v25; // ecx
  int v26; // ecx
  __int32 v27; // ecx
  __int32 v28; // ecx
  int v29; // ecx
  __int32 v30; // ecx
  int v31; // ecx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass > SystemCpuSetInformation )
  {
    if ( SystemInformationClass <= SystemFeatureConfigurationSectionInformation )
    {
      if ( SystemInformationClass != SystemFeatureConfigurationSectionInformation )
      {
        v15 = SystemInformationClass - 178;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( !v16 )
            goto LABEL_7;
          v27 = v16 - 1;
          if ( v27 )
          {
            v28 = v27 - 13;
            if ( !v28 )
              goto LABEL_7;
            v29 = v28 - 15;
            if ( v29 )
            {
              if ( v29 == 1 )
                goto LABEL_7;
              return -1073741821;
            }
          }
        }
      }
    }
    else
    {
      v12 = SystemInformationClass - 222;
      if ( !v12 )
        goto LABEL_7;
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 7;
        if ( v14 )
        {
          v30 = v14 - 1;
          if ( !v30 )
            goto LABEL_7;
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 != 6 )
              return -1073741821;
          }
        }
      }
    }
LABEL_19:
    v9 = 8;
    goto LABEL_8;
  }
  if ( SystemInformationClass == SystemCpuSetInformation )
    goto LABEL_19;
  if ( SystemInformationClass <= SystemProcessorPerformanceDistribution )
  {
    if ( SystemInformationClass != SystemProcessorPerformanceDistribution )
    {
      v17 = SystemInformationClass - 8;
      if ( v17 )
      {
        v18 = v17 - 15;
        if ( v18 )
        {
          v19 = v18 - 19;
          if ( v19 )
          {
            v20 = v19 - 19;
            if ( v20 )
            {
              v21 = v20 - 11;
              if ( !v21 )
                goto LABEL_7;
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 10 )
                  return -1073741821;
              }
            }
          }
        }
      }
    }
    goto LABEL_31;
  }
  v8 = SystemInformationClass - 107;
  if ( v8 )
  {
    v23 = v8 - 1;
    if ( v23 )
    {
      v24 = v23 - 13;
      if ( v24 )
      {
        v25 = v24 - 20;
        if ( v25 )
        {
          v26 = v25 - 19;
          if ( v26 )
          {
            if ( v26 == 5 )
              goto LABEL_19;
            return -1073741821;
          }
        }
      }
    }
LABEL_31:
    v9 = 2;
    goto LABEL_8;
  }
LABEL_7:
  v9 = 4;
LABEL_8:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v9 - 1) & (unsigned int)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (char *)InputBuffer + InputBufferLength;
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < InputBuffer )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(
           SystemInformationClass,
           InputBuffer,
           InputBufferLength,
           (__int64)SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
