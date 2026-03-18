/*
 * XREFs of FirmwareDownload @ 0x1C0011AB4
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C0013948 (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1C0007C30 (GetControllerMaxTransferSize.c)
 *     GetSrbDataBuffer @ 0x1C0007C8C (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     FillClippedSGL @ 0x1C0011790 (FillClippedSGL.c)
 *     GetFirmwareGranularity @ 0x1C0012BFC (GetFirmwareGranularity.c)
 *     NVMeQueueWorkItem @ 0x1C0016D68 (NVMeQueueWorkItem.c)
 */

__int64 __fastcall FirmwareDownload(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 SrbExtension; // rsi
  __int64 SrbDataBuffer; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // r9
  unsigned __int64 ControllerMaxTransferSize; // r8
  unsigned __int64 v16; // r9
  unsigned int FirmwareGranularity; // eax
  unsigned int v18; // r12d
  unsigned int *ScatterGatherList; // rax
  int v20; // r9d
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // [rsp+120h] [rbp+18h] BYREF
  void *v27; // [rsp+128h] [rbp+20h]

  v3 = 0;
  v27 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v26);
  v7 = SrbDataBuffer;
  v8 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  if ( *(_DWORD *)v8 == 2 && *(_DWORD *)(v8 + 4) >= 0x20u )
    v9 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  else
    v9 = 0LL;
  v10 = *(unsigned int *)(SrbDataBuffer + 48);
  if ( v9 )
  {
    if ( (unsigned int)v10 < 0x20 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = v11 + 32;
  }
  else
  {
    if ( (unsigned int)v10 < 0x18 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v8 + 16);
    v12 = v11 + 24;
  }
  if ( v10 < v12 || !v11 || (*(_BYTE *)(v8 + 8) & 3) != 0 || (*(_QWORD *)(v8 + 16) & 3) != 0 )
    goto LABEL_10;
  ControllerMaxTransferSize = (unsigned int)GetControllerMaxTransferSize((_DWORD *)a1);
  if ( v16 > ControllerMaxTransferSize )
  {
    *(_DWORD *)(v7 + 20) = 4;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
  {
    NVMeQueueWorkItem(a1, NVMeControllerValidateFirmwareActivateCapability);
    *(_DWORD *)(a1 + 32) |= 0x800u;
  }
  FirmwareGranularity = GetFirmwareGranularity(a1);
  if ( FirmwareGranularity )
  {
    if ( *(_QWORD *)(v8 + 16) % (unsigned __int64)FirmwareGranularity )
    {
LABEL_10:
      *(_DWORD *)(v7 + 20) = 3;
LABEL_11:
      v3 = -1056964602;
LABEL_12:
      v13 = 21;
      goto LABEL_13;
    }
  }
  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
  {
    v22 = *(_DWORD *)(v7 + 44);
    if ( v9 )
      v23 = v22 + 32;
    else
      v23 = v22 + 24;
    *(_DWORD *)(SrbExtension + 4216) = v23;
    goto LABEL_41;
  }
  LODWORD(v26) = (((unsigned int)GetControllerMaxTransferSize((_DWORD *)a1) - 1) >> 12) + 2;
  v18 = 24 * v26 + 16;
  StorPortExtendedFunction(0LL, a1, v18);
  if ( v27 )
  {
    NVMeZeroMemory(v27, v18);
    ScatterGatherList = (unsigned int *)StorPortGetScatterGatherList(a1, a2);
    v20 = *(_DWORD *)(v7 + 44);
    if ( v9 )
      v21 = v20 + 32;
    else
      v21 = v20 + 24;
    if ( !FillClippedSGL(ScatterGatherList, (unsigned int *)v27, v26, v21) )
    {
      if ( v27 )
      {
        StorPortExtendedFunction(1LL, a1, v27);
        v27 = 0LL;
      }
      v3 = -1056964607;
      *(_DWORD *)(v7 + 20) = 4;
      goto LABEL_12;
    }
    *(_QWORD *)(SrbExtension + 4216) = v27;
LABEL_41:
    *(_BYTE *)(SrbExtension + 4253) |= 3u;
    SrbAssignQueueId(a1, a2);
    v24 = *(_QWORD *)(v8 + 8);
    v25 = (*(_QWORD *)(v8 + 16) >> 2) - 1;
    *(_BYTE *)(SrbExtension + 4096) = 17;
    *(_DWORD *)(SrbExtension + 4136) = v25;
    *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareDownloadCompletion;
    *(_DWORD *)(SrbExtension + 4140) = v24 >> 2;
    return v3;
  }
  v13 = 4;
  *(_DWORD *)(v7 + 20) = 1;
  v3 = -1056964605;
LABEL_13:
  *(_BYTE *)(a2 + 3) = v13;
  if ( *(_BYTE *)(a1 + 22) )
    StorPortExtendedFunction(87LL, a1, 0LL);
  return v3;
}
