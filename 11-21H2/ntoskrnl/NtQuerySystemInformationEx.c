/*
 * XREFs of NtQuerySystemInformationEx @ 0x1406B62F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
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
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int64 v11; // rdx
  __int32 v12; // ecx
  char *v13; // rcx
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int32 v21; // ecx
  __int32 v22; // ecx
  int v23; // ecx
  bool v24; // zf
  __int32 v25; // ecx
  __int32 v26; // ecx
  __int32 v27; // ecx
  int v28; // ecx
  __int32 v29; // ecx
  int v30; // ecx
  int v31; // ecx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass <= SystemIsolatedUserModeInformation )
  {
    if ( SystemInformationClass == SystemIsolatedUserModeInformation )
      goto LABEL_23;
    if ( SystemInformationClass <= SystemProcessorIdleCycleTimeInformation )
    {
      if ( SystemInformationClass != SystemProcessorIdleCycleTimeInformation )
      {
        v19 = SystemInformationClass - 8;
        if ( v19 )
        {
          v20 = v19 - 15;
          if ( v20 )
          {
            v21 = v20 - 19;
            if ( v21 )
            {
              v22 = v21 - 19;
              if ( v22 )
              {
                v23 = v22 - 11;
                if ( !v23 )
                  goto LABEL_20;
                v24 = v23 == 1;
                goto LABEL_33;
              }
            }
          }
        }
      }
    }
    else
    {
      v15 = SystemInformationClass - 100;
      if ( v15 )
      {
        v16 = v15 - 7;
        if ( !v16 )
          goto LABEL_20;
        v18 = v16 - 1;
        if ( v18 )
        {
          v25 = v18 - 13;
          if ( v25 )
          {
            v28 = v25 - 20;
            if ( v28 )
            {
              v24 = v28 == 19;
LABEL_33:
              if ( !v24 )
                return -1073741821;
            }
          }
        }
      }
    }
    v11 = 1LL;
    goto LABEL_9;
  }
  if ( SystemInformationClass <= SystemFeatureConfigurationInformation )
  {
    if ( SystemInformationClass != SystemFeatureConfigurationInformation )
    {
      v17 = SystemInformationClass - 175;
      if ( v17 )
      {
        v11 = 3LL;
        v26 = v17 - 3;
        if ( v26 )
        {
          v27 = v26 - 2;
          if ( !v27 )
            goto LABEL_9;
          v29 = v27 - 1;
          if ( v29 )
          {
            v30 = v29 - 13;
            if ( !v30 )
              goto LABEL_9;
            if ( v30 != 15 )
              return -1073741821;
          }
        }
      }
      goto LABEL_23;
    }
LABEL_20:
    v11 = 3LL;
    goto LABEL_9;
  }
  v8 = SystemInformationClass - 211;
  if ( !v8 )
  {
LABEL_23:
    v11 = 7LL;
    goto LABEL_9;
  }
  v9 = v8 - 11;
  if ( !v9 )
    goto LABEL_20;
  v10 = v9 - 1;
  v11 = 7LL;
  if ( !v10 )
    goto LABEL_9;
  v12 = v10 - 7;
  if ( !v12 )
    goto LABEL_9;
  v31 = v12 - 1;
  if ( !v31 )
    goto LABEL_20;
  if ( v31 != 1 )
    return -1073741821;
LABEL_9:
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    if ( (v11 & (unsigned __int64)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (char *)InputBuffer + InputBufferLength;
    if ( (unsigned __int64)v13 > 0x7FFFFFFF0000LL || v13 < InputBuffer )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return sub_14073B5A0(
           (unsigned int)SystemInformationClass,
           InputBuffer,
           InputBufferLength,
           SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
