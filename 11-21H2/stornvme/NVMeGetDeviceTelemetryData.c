/*
 * XREFs of NVMeGetDeviceTelemetryData @ 0x1C001CFA8
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C001A0C4 (BuildGetLogPageCommandForTelemetryLog.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryData(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  unsigned int v4; // edi
  void *v7; // r12
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // ecx
  __int64 SrbExtension; // rbx
  __int64 result; // rax
  int v15; // [rsp+28h] [rbp-48h]
  unsigned int v16; // [rsp+50h] [rbp-20h] BYREF
  void *v17; // [rsp+58h] [rbp-18h]
  __int64 PhysicalAddress; // [rsp+60h] [rbp-10h]
  unsigned __int8 v19; // [rsp+B0h] [rbp+40h]
  int v20; // [rsp+B8h] [rbp+48h]
  unsigned __int64 v21; // [rsp+B8h] [rbp+48h]

  v4 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(void **)(a2 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(void **)(a2 + 24);
    v8 = 16LL;
  }
  v17 = 0LL;
  v19 = 1;
  PhysicalAddress = 0LL;
  v16 = 0;
  if ( a4 )
    v9 = *(_DWORD *)(a1 + 4116);
  else
    v9 = *(_DWORD *)(a1 + 4120);
  if ( !v7 || *(_DWORD *)(a2 + v8) < 0x200u )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 261LL) & 8) == 0 || !v9 )
  {
    result = 3238002690LL;
    goto LABEL_32;
  }
  HIBYTE(v20) = a3[10];
  BYTE2(v20) = a3[11];
  BYTE1(v20) = a3[12];
  LOBYTE(v20) = a3[13];
  v10 = v20;
  HIBYTE(v21) = a3[2];
  BYTE6(v21) = a3[3];
  BYTE5(v21) = a3[4];
  BYTE4(v21) = a3[5];
  BYTE3(v21) = a3[6];
  BYTE2(v21) = a3[7];
  BYTE1(v21) = a3[8];
  LOBYTE(v21) = a3[9];
  v11 = v10 << 9;
  if ( (unsigned int)v21 >= v9 || (v21 & 0x1FF) != 0 )
  {
    result = 3238002695LL;
LABEL_32:
    *(_BYTE *)(a2 + 3) = 6;
    return result;
  }
  v12 = v11;
  if ( v11 + (unsigned int)v21 > v9 )
  {
    v11 = v9 - v21;
    v12 = v9 - v21;
  }
  if ( !a4 && v12 + (_DWORD)v21 == *(_DWORD *)(a1 + 4120) )
    v19 = (*(_BYTE *)(a1 + 156) & 2) != 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v7, &v16);
    if ( !PhysicalAddress || !v16 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    v17 = v7;
    if ( v11 >= v16 )
      v11 = v16;
    v11 &= 0xFFFFFE00;
  }
  else
  {
    NVMeAllocateDmaBuffer(a1, v11);
    v7 = v17;
  }
  if ( v7 )
  {
    SrbExtension = GetSrbExtension(a2);
    NVMeZeroMemory(v7, v11);
    *(_BYTE *)(SrbExtension + 4253) |= 3u;
    SrbAssignQueueId(a1, a2);
    BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, 8 - (a4 != 0), v11, PhysicalAddress, v15, v21, 0, v19);
    *(_BYTE *)(SrbExtension + 4253) |= 4u;
    *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageTelemetryDataCompletion;
    *(_QWORD *)(SrbExtension + 4200) = v17;
    *(_QWORD *)(SrbExtension + 4208) = PhysicalAddress;
    *(_DWORD *)(SrbExtension + 4240) = v11;
    *(_QWORD *)(SrbExtension + 4232) = (unsigned int)v21;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  return v4;
}
