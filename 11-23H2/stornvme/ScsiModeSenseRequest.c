/*
 * XREFs of ScsiModeSenseRequest @ 0x1C001A174
 * Callers:
 *     ScsiToNVMe @ 0x1C00015C0 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     GetSrbDataBuffer @ 0x1C0007C8C (GetSrbDataBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010FA4 (BuildGetLogPageCommand.c)
 *     NVMeSetSenseData @ 0x1C0024B48 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  _BYTE *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v9; // ebx
  _DWORD *v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v10);
  v6 = 4LL;
  LOBYTE(v7) = v5[2];
  if ( *v5 != 26 )
    v6 = 8LL;
  if ( (unsigned __int8)v7 >= 0x40u )
  {
    LOBYTE(v7) = 6;
LABEL_5:
    LOBYTE(v6) = 5;
    LOBYTE(v5) = 36;
    NVMeSetSenseData(a2, v7, v6, v5);
    return 3238002694LL;
  }
  if ( !SrbDataBuffer )
    goto LABEL_11;
  if ( *v10 < (unsigned int)v6 )
  {
    v9 = -1056964604;
LABEL_12:
    LOBYTE(v5) = 36;
    LOBYTE(v6) = 5;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, v6, v5);
    return v9;
  }
  if ( (_BYTE)v7 != 63 && (_BYTE)v7 != 8 )
  {
LABEL_11:
    v9 = -1056964602;
    goto LABEL_12;
  }
  if ( (unsigned int)(*v10 - v6) < 0xC )
  {
    LOBYTE(v7) = 18;
    goto LABEL_5;
  }
  NVMeAllocateDmaBuffer(a1, 0x200u);
  *(_BYTE *)(a2 + 3) = 4;
  return 3238002691LL;
}
