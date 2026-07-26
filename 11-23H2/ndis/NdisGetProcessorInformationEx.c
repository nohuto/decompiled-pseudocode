/*
 * XREFs of NdisGetProcessorInformationEx @ 0x1C0074440
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 */

NDIS_STATUS __stdcall NdisGetProcessorInformationEx(
        NDIS_HANDLE NdisHandle,
        PNDIS_SYSTEM_PROCESSOR_INFO_EX SystemProcessorInfo,
        PSIZE_T Size)
{
  NDIS_STATUS v3; // ebx
  _QWORD *v6; // rdi
  size_t v7; // rbp
  char v8; // dl
  ULONG v9; // ecx
  __int16 *v10; // rdx
  __int64 v11; // r8
  __int16 v12; // r9
  NDIS_STATUS result; // eax

  v3 = 0;
  v6 = 0LL;
  v7 = 20 * (ndisMaxNumberOfProcessors + 2LL);
  if ( *Size >= v7 )
  {
    if ( NdisHandle )
    {
      v8 = *(_BYTE *)NdisHandle;
      if ( *(_BYTE *)NdisHandle == 17 )
      {
        v6 = NdisHandle;
      }
      else if ( (unsigned __int8)(v8 - 2) > 3u )
      {
        if ( v8 != 18 )
        {
          v3 = -1073741811;
          goto LABEL_17;
        }
        v6 = (_QWORD *)*((_QWORD *)NdisHandle + 2);
      }
    }
    memmove(SystemProcessorInfo, ndisSystemProcessorInfo, v7);
    v9 = 0;
    if ( SystemProcessorInfo->NumberOfProcessors )
    {
      v10 = (__int16 *)&SystemProcessorInfo[1].NumCores + 1;
      do
      {
        if ( v6 && (v11 = v6[550]) != 0 )
          v12 = *(_WORD *)(v11 + 2LL * v9);
        else
          v12 = -1;
        *v10 = v12;
        ++v9;
        v10 += 10;
      }
      while ( v9 < SystemProcessorInfo->NumberOfProcessors );
    }
  }
  else
  {
    v3 = -1073676266;
  }
LABEL_17:
  result = v3;
  *Size = v7;
  return result;
}
