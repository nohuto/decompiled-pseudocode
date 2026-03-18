/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C001D2B0
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014334 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1C001B63C (SetPrpFromBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned __int16 *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned __int16 *v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  if ( !a4 )
    return 3238002694LL;
  if ( !a3 )
    return 3238002694LL;
  v9 = a5;
  if ( !a5 )
    return 3238002694LL;
  *a4 = 0;
  LocalCommandReuse(a1, a1 + 944);
  v10 = *(_QWORD *)(a1 + 1040);
  v11 = 2 * a3 + 2;
  NVMeAllocateDmaBuffer(a1, v11);
  if ( !v18 )
    return 3238002691LL;
  NVMeZeroMemory(v18, v11);
  if ( !(unsigned int)SetPrpFromBuffer(a1, (_QWORD *)v10, 0LL, v11) )
    goto LABEL_13;
  *(_BYTE *)(v10 + 4253) |= 7u;
  *(_DWORD *)(v10 + 4100) = a2;
  *(_DWORD *)(v10 + 4136) = (v11 >> 2) - 1;
  *(_QWORD *)(v10 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v10 + 4096) = 26;
  *(_WORD *)(v10 + 4140) = 258;
  SrbAssignQueueId(a1, a1 + 952);
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    v13 = v18;
    v14 = *v18;
    *a4 = v14;
    if ( a3 < v14 )
    {
      v17 = -1056964604;
    }
    else
    {
      v15 = 0;
      if ( v14 )
      {
        do
        {
          v16 = v15++;
          *(_DWORD *)(v9 + 4 * v16) = v13[v16 + 1];
        }
        while ( v15 < *v13 );
      }
      v17 = 0;
    }
  }
  else
  {
LABEL_13:
    v13 = v18;
    v17 = -1056964607;
  }
  if ( v13 )
    NVMeFreeDmaBuffer(a1, v11, (__int64 *)&v18, 0LL);
  return v17;
}
