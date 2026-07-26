/*
 * XREFs of ndisGetProcessorInfo @ 0x1C0154EC0
 * Callers:
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x1C0154E4C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 * Callees:
 *     ndisGetLogicalProcessorInformation @ 0x1C0155088 (ndisGetLogicalProcessorInformation.c)
 */

__int64 ndisGetProcessorInfo()
{
  _DWORD *Pool2; // rax
  _DWORD *v1; // r8
  char *v7; // rcx
  NTSTATUS LogicalProcessorInformation; // ebx
  ULONG v9; // esi
  __int64 v10; // rdi
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v12; // rbp
  _PROCESSOR_NUMBER *v13; // rdx
  ULONG v15; // edi
  __int64 i; // rbx

  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus), 538985550);
  ndisSystemProcessorInfo = Pool2;
  v1 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = 2621824;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    {
      v1[2] = 1;
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    v1[2] = 2;
    goto LABEL_6;
  }
  v1[2] = 0;
LABEL_6:
  ndisRssProcessors = (void *)ExAllocatePool2(64LL, 4LL * ndisMaxNumRssCpus, 538985550);
  if ( !ndisRssProcessors )
    return (unsigned int)-1073741670;
  v7 = (char *)ndisSystemProcessorInfo;
  *((_DWORD *)ndisSystemProcessorInfo + 8) = ndisNumberOfActiveProcessorsAtBoot;
  ndisCpuInfo = (struct _NDIS_PROCESSOR_INFO_EX *)(v7 + 40);
  *((_DWORD *)v7 + 3) = 1;
  *((_DWORD *)v7 + 4) = 1;
  *((_DWORD *)v7 + 6) = 1;
  *((_DWORD *)v7 + 5) = 1;
  *((_DWORD *)v7 + 7) = 40;
  *((_DWORD *)v7 + 9) = 20;
  LogicalProcessorInformation = ndisGetLogicalProcessorInformation();
  if ( LogicalProcessorInformation < 0 )
  {
    v15 = ndisRssBaseCpu;
    for ( i = 0LL;
          v15 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)i < ndisMaxNumRssCpus;
          i = (unsigned int)(i + 1) )
    {
      KeGetProcessorNumberFromIndex(v15++, (PPROCESSOR_NUMBER)ndisRssProcessors + i);
    }
    LODWORD(ndisRssCpuCount) = i;
    return 0;
  }
  else
  {
    v9 = ndisRssBaseCpu;
    v10 = 0LL;
    while ( v9 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)v10 < ndisMaxNumRssCpus )
    {
      v12 = 0LL;
      if ( (_DWORD)v10 )
      {
        while ( 1 )
        {
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ndisRssProcessors + v12);
          if ( ndisCpuInfo[ProcessorIndexFromNumber].SocketId == ndisCpuInfo[v9].SocketId
            && ndisCpuInfo[ProcessorIndexFromNumber].CoreId == ndisCpuInfo[v9].CoreId )
          {
            break;
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= (unsigned int)v10 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        if ( (_DWORD)v12 == (_DWORD)v10 )
        {
          v13 = (_PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * v10);
          v10 = (unsigned int)(v10 + 1);
          LogicalProcessorInformation = KeGetProcessorNumberFromIndex(v9, v13);
        }
      }
      ++v9;
    }
    LODWORD(ndisRssCpuCount) = v10;
  }
  return (unsigned int)LogicalProcessorInformation;
}
