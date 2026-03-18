/*
 * XREFs of NVMeGetControllerInitiatedTelemetryLog @ 0x1C001E1C8
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001DEA4 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     GetControllerMaxTransferSize @ 0x1C0007C30 (GetControllerMaxTransferSize.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C00110C8 (BuildGetLogPageCommandForTelemetryLog.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryLog(__int64 a1, unsigned int a2)
{
  unsigned int ControllerMaxTransferSize; // eax
  void **v5; // rbx
  unsigned int v6; // r12d
  unsigned int DmaBuffer; // esi
  unsigned int v8; // edx
  unsigned int v9; // r13d
  unsigned int v10; // r13d
  __int64 v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rbx
  unsigned int v14; // r8d
  _OWORD *v15; // rax
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  int v20; // [rsp+28h] [rbp-28h]
  unsigned int v21; // [rsp+90h] [rbp+40h]
  void *Src; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h]

  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  v5 = (void **)(a1 + 4256);
  Src = 0LL;
  v23 = 0LL;
  v21 = 512;
  v6 = ControllerMaxTransferSize;
  DmaBuffer = StorPortExtendedFunction(0LL, a1, a2);
  if ( !DmaBuffer && *v5 )
  {
    NVMeZeroMemory(*v5, a2);
    v8 = v6;
    *(_DWORD *)(a1 + 4264) = a2;
    if ( a2 < v6 )
      v8 = a2;
    DmaBuffer = NVMeAllocateDmaBuffer(a1, v8);
    if ( !DmaBuffer )
    {
      if ( !Src )
        return DmaBuffer;
      if ( a2 <= 0x200 )
      {
LABEL_13:
        LocalCommandReuse(a1, a1 + 944);
        v13 = *(_QWORD *)(a1 + 1008);
        LOBYTE(v14) = 8;
        *(_BYTE *)(v13 + 4253) |= 3u;
        *(_WORD *)(v13 + 4244) = 0;
        BuildGetLogPageCommandForTelemetryLog(a1, v13, v14, 0x200u, v23, v20, 0LL, 1, *(_BYTE *)(a1 + 156) & 1);
        *(_BYTE *)(v13 + 4253) |= 4u;
        *(_QWORD *)(v13 + 4200) = Src;
        *(_QWORD *)(v13 + 4208) = v23;
        *(_DWORD *)(v13 + 4240) = 512;
        ProcessCommand(a1, a1 + 952);
        Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
        WaitForCommandCompleteWithCustomTimeout(a1);
        v5 = (void **)(a1 + 4256);
        if ( *(_BYTE *)(a1 + 955) == 1 )
        {
          v15 = *v5;
          v16 = 4LL;
          v17 = Src;
          do
          {
            *v15 = *v17;
            v15[1] = v17[1];
            v15[2] = v17[2];
            v15[3] = v17[3];
            v15[4] = v17[4];
            v15[5] = v17[5];
            v15[6] = v17[6];
            v15 += 8;
            v18 = v17[7];
            v17 += 8;
            *(v15 - 1) = v18;
            --v16;
          }
          while ( v16 );
        }
        else
        {
LABEL_25:
          DmaBuffer = -1056964607;
        }
      }
      else
      {
        while ( 1 )
        {
          v9 = v6;
          if ( a2 - v21 < v6 )
            v9 = a2 - v21;
          v10 = v9 & 0xFFFFFE00;
          if ( !v10 )
            break;
          LocalCommandReuse(a1, a1 + 944);
          v11 = *(_QWORD *)(a1 + 1008);
          LOBYTE(v12) = 8;
          *(_BYTE *)(v11 + 4253) |= 3u;
          *(_WORD *)(v11 + 4244) = 0;
          BuildGetLogPageCommandForTelemetryLog(a1, v11, v12, v10, v23, v20, v21, 0, 1u);
          *(_BYTE *)(v11 + 4253) |= 4u;
          *(_QWORD *)(v11 + 4200) = Src;
          *(_QWORD *)(v11 + 4208) = v23;
          *(_DWORD *)(v11 + 4240) = v10;
          ProcessCommand(a1, a1 + 952);
          Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
          WaitForCommandCompleteWithCustomTimeout(a1);
          v5 = (void **)(a1 + 4256);
          if ( *(_BYTE *)(a1 + 955) != 1 )
            goto LABEL_25;
          memmove((char *)*v5 + v21, Src, v10);
          v21 += v10;
          if ( v21 >= a2 )
            goto LABEL_13;
        }
        DmaBuffer = -1056964598;
      }
    }
  }
  if ( Src )
  {
    if ( a2 < v6 )
      v6 = a2;
    NVMeFreeDmaBuffer(a1, v6, (__int64 *)&Src, v23);
  }
  if ( DmaBuffer )
  {
    if ( *v5 )
      StorPortExtendedFunction(1LL, a1, *v5);
    *(_OWORD *)v5 = 0LL;
  }
  return DmaBuffer;
}
