/*
 * XREFs of ScsiSecurityProtocolInRequest @ 0x1C000DC80
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSecurityProtocolInRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rax
  unsigned int *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int v10; // edi
  unsigned int *v11; // rcx
  unsigned int v12; // ecx
  __int64 result; // rax
  unsigned int v14; // [rsp+40h] [rbp+8h]
  unsigned __int16 v15; // [rsp+40h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v8 = *(_QWORD *)(v6 + 1640);
  v9 = SrbExtension;
  if ( (*(_BYTE *)(v8 + 256) & 1) == 0 )
    goto LABEL_8;
  HIBYTE(v14) = a3[6];
  BYTE2(v14) = a3[7];
  BYTE1(v14) = a3[8];
  LOBYTE(v14) = a3[9];
  v10 = v14;
  if ( (char)a3[4] < 0 )
    v10 = v14 << 9;
  v11 = v5 + 4;
  v5 += 15;
  HIBYTE(v15) = a3[2];
  if ( *(_BYTE *)(v7 + 2) != 40 )
    v5 = v11;
  LOBYTE(v15) = a3[3];
  if ( *v5 >= v10 )
  {
    *(_BYTE *)(SrbExtension + 4253) = (v10 != 0 ? 2 : 0) | *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(v6, v7);
    *(_BYTE *)(v9 + 4139) = a3[1];
    v12 = *(_DWORD *)(v9 + 4136) & 0xFF0000FF | (v15 << 8);
    *(_BYTE *)(v9 + 4096) = -126;
    *(_DWORD *)(v9 + 4136) = v12;
    result = 0LL;
    *(_DWORD *)(v9 + 4140) = v10;
  }
  else
  {
LABEL_8:
    LOBYTE(v8) = 36;
    LOBYTE(v6) = 5;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(v7, v5, v6, v8);
    return 3238002694LL;
  }
  return result;
}
