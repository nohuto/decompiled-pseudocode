/*
 * XREFs of NVMeWriteBufferFirmwareActivate @ 0x1C001F3CC
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C001F4D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C001C698 (IsFirmwareActivateWithoutResetEnabled.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rbx
  bool v10; // si
  int v11; // eax
  unsigned int v12; // eax

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v8 = *(unsigned __int8 *)(v7 + 2);
  v9 = SrbExtension;
  v10 = 0;
  if ( (unsigned __int8)v8 <= (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 260LL) >> 1) & 7) )
  {
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v5);
    if ( IsFirmwareActivateWithoutResetEnabled(a1) )
      v10 = (*(_DWORD *)(a1 + 32) & 0x400) == 0;
    *(_BYTE *)(v9 + 4096) = 16;
    v11 = *(_DWORD *)(v9 + 4136) ^ (*(_DWORD *)(v9 + 4136) ^ v8) & 7;
    if ( v10 )
      v12 = v11 | 0x18;
    else
      v12 = v11 & 0xFFFFFFE7 | 8;
    *(_DWORD *)(v9 + 4136) = v12;
    *(_QWORD *)(v9 + 4224) = NVMeWriteBufferFirmwareActivateCompletion;
  }
  else
  {
    NVMeSetSenseData(v6, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  return v3;
}
