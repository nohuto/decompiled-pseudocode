/*
 * XREFs of NVMeHwBuildIo @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ScsiToNVMe @ 0x1C00015C0 (ScsiToNVMe.c)
 *     Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage @ 0x1C00037E8 (Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage.c)
 *     GetNamespaceId @ 0x1C0007BE0 (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007C0C (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     IoctlToNVMe @ 0x1C0014870 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C0018864 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C00241F8 (NVMeSetSenseData.c)
 *     ProcessCommandNvmePacket @ 0x1C0024490 (ProcessCommandNvmePacket.c)
 */

char __fastcall NVMeHwBuildIo(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  char v15; // si
  __int64 SrbDataBuffer; // rsi
  unsigned __int8 v17; // cl
  int NamespaceId; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int *v26; // r14
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // eax
  char v32; // cl
  __int64 v34; // [rsp+50h] [rbp+20h] BYREF
  unsigned int *v35; // [rsp+58h] [rbp+28h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = (_OWORD *)(v4 + 4096);
  *v5 = 0LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[5] = 0LL;
  v5[6] = 0LL;
  v5[7] = 0LL;
  v5[8] = 0LL;
  v5[9] = 0LL;
  Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage();
  v7 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v7 == 40 )
    v8 = *(_DWORD *)(a2 + 20);
  else
    v8 = *(unsigned __int8 *)(a2 + 2);
  v9 = 0x1C0000000uLL;
  switch ( v8 )
  {
    case 0:
      v11 = *(_DWORD *)(a1 + 32);
      if ( (v11 & 1) == 0 )
        goto LABEL_21;
      if ( (v11 & 0x10) != 0 )
        goto LABEL_23;
      ScsiToNVMe(a1, a2, 0x1C0000000uLL);
      break;
    case 2:
      v12 = *(_DWORD *)(a1 + 32);
      if ( (v12 & 1) == 0 )
        goto LABEL_21;
      if ( (v12 & 0x10) != 0 )
        goto LABEL_23;
      IoctlToNVMe(a1);
      break;
    case 8:
      goto LABEL_40;
    case 9:
      v13 = *(_DWORD *)(a1 + 32);
      if ( (v13 & 1) == 0 )
        goto LABEL_21;
      if ( (v13 & 0x10) != 0 )
        goto LABEL_23;
      ProtocolCommandToNVMe(a1, a2, 0x1C0000000uLL);
      break;
    case 10:
      v10 = *(_DWORD *)(a1 + 32);
      if ( (v10 & 1) != 0 )
      {
        if ( (v10 & 0x10) != 0 )
        {
LABEL_23:
          LOBYTE(v7) = 14;
          NVMeSetSenseData(a2, v7, 0LL, 0LL);
        }
        else
        {
          ProcessCommandNvmePacket(a1, a2, 0x1C0000000uLL);
        }
      }
      else
      {
LABEL_21:
        LOBYTE(v6) = 37;
        LOBYTE(v9) = 5;
        LOBYTE(v7) = 8;
        NVMeSetSenseData(a2, v7, v9, v6);
      }
      break;
    case 36:
      if ( (_BYTE)v7 == 40 )
        v14 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
      else
        v14 = *(_BYTE *)(a2 + 4) == 1;
      v15 = 1;
      if ( !v14 )
        v15 = 6;
      *(_BYTE *)(a2 + 3) = v15;
      break;
    case 38:
      v35 = 0LL;
      v34 = 0LL;
      SrbDataBuffer = GetSrbDataBuffer(a2, &v35, 0x1C0000000uLL);
      if ( !SrbDataBuffer || *v35 < 0x48 || (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
        goto LABEL_68;
      if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL) || !v34 )
        goto LABEL_41;
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v17 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v17);
      v19 = v34;
      *(_OWORD *)v34 = 0LL;
      *(_OWORD *)(v19 + 16) = 0LL;
      *(_OWORD *)(v19 + 32) = 0LL;
      *(_OWORD *)(v19 + 48) = 0LL;
      *(_OWORD *)(v19 + 64) = 0LL;
      *(_OWORD *)(v19 + 80) = 0LL;
      *(_OWORD *)(v19 + 96) = 0LL;
      *(_OWORD *)(v19 + 112) = 0LL;
      *(_OWORD *)(v19 + 128) = 0LL;
      *(_QWORD *)(v19 + 144) = 0LL;
      *(_DWORD *)SrbDataBuffer = 7340288;
      *(_QWORD *)(SrbDataBuffer + 64) = v34;
      *(_WORD *)v34 = *(_WORD *)(a1 + 4);
      *(_WORD *)(v34 + 2) = *(_WORD *)(a1 + 6);
      *(_BYTE *)(v34 + 4) = *(_BYTE *)(a1 + 8);
      v20 = v34;
      *(_OWORD *)(v34 + 16) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v20 + 32) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v20 + 48) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v20 + 64) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v20 + 80) = *(_OWORD *)(a1 + 104);
      *(_OWORD *)(v20 + 96) = *(_OWORD *)(a1 + 120);
      *(_OWORD *)(v20 + 112) = *(_OWORD *)(a1 + 136);
      *(_OWORD *)(v20 + 128) = *(_OWORD *)(a1 + 152);
      *(_DWORD *)(v20 + 144) = *(_DWORD *)(a1 + 168);
      *(_DWORD *)(v34 + 40) &= ~8u;
      *(_QWORD *)(v34 + 8) = *(_QWORD *)(a1 + 176);
      *(_DWORD *)(v34 + 148) = NamespaceId;
LABEL_40:
      *(_BYTE *)(a2 + 3) = 1;
      break;
    case 39:
      v34 = 0LL;
      v21 = GetSrbDataBuffer(a2, &v34, 0x1C0000000uLL);
      if ( v21 && *(_DWORD *)v34 >= 0x48u )
      {
        v22 = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v21 + 64));
        v23 = 4;
        if ( !v22 )
          v23 = 1;
        *(_BYTE *)(a2 + 3) = v23;
      }
      else
      {
        *(_BYTE *)(a2 + 3) = 6;
      }
      break;
    case 42:
      v35 = 0LL;
      v34 = 0LL;
      v24 = GetSrbDataBuffer(a2, &v35, 0x1C0000000uLL);
      v25 = v24;
      if ( !v24 )
        goto LABEL_68;
      v26 = v35;
      if ( *v35 < 0x20 || *(_DWORD *)(v24 + 8) != 1196246089 )
        goto LABEL_68;
      if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL) || !v34 )
      {
LABEL_41:
        *(_BYTE *)(a2 + 3) = 4;
      }
      else
      {
        NVMeZeroMemory(v34, 152LL);
        *(_WORD *)v34 = *(_WORD *)(a1 + 4);
        *(_WORD *)(v34 + 2) = *(_WORD *)(a1 + 6);
        *(_BYTE *)(v34 + 4) = *(_BYTE *)(a1 + 8);
        v27 = v34;
        *(_OWORD *)(v34 + 16) = *(_OWORD *)(a1 + 40);
        *(_OWORD *)(v27 + 32) = *(_OWORD *)(a1 + 56);
        *(_OWORD *)(v27 + 48) = *(_OWORD *)(a1 + 72);
        *(_OWORD *)(v27 + 64) = *(_OWORD *)(a1 + 88);
        *(_OWORD *)(v27 + 80) = *(_OWORD *)(a1 + 104);
        *(_OWORD *)(v27 + 96) = *(_OWORD *)(a1 + 120);
        *(_OWORD *)(v27 + 112) = *(_OWORD *)(a1 + 136);
        *(_OWORD *)(v27 + 128) = *(_OWORD *)(a1 + 152);
        *(_DWORD *)(v27 + 144) = *(_DWORD *)(a1 + 168);
        *(_DWORD *)(v34 + 40) &= ~8u;
        *(_QWORD *)(v34 + 8) = *(_QWORD *)(a1 + 176);
        *(_BYTE *)(a2 + 3) = 1;
        if ( *(_WORD *)(v25 + 16) == 1 && *(_DWORD *)(v25 + 20) >= 4u )
        {
          v28 = GetNamespaceId(a1, *(unsigned __int8 *)(v25 + 26));
          *(_DWORD *)(v34 + 148) = v28;
        }
        else
        {
          *(_BYTE *)(a2 + 3) = 6;
        }
        if ( *(_BYTE *)(a2 + 3) == 1 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
            v29 = *(_QWORD *)(a2 + 64);
          else
            v29 = *(_QWORD *)(a2 + 24);
          NVMeZeroMemory(v29, *v26);
          *(_DWORD *)v29 = 24;
          *(_DWORD *)(v29 + 4) = 24;
          *(_DWORD *)(v29 + 8) = 1297105993;
          *(_QWORD *)(v29 + 16) = v34;
        }
      }
      break;
    case 43:
      v34 = 0LL;
      v30 = GetSrbDataBuffer(a2, &v34, 0x1C0000000uLL);
      if ( v30 && *(_DWORD *)v34 >= 0x18u && *(_DWORD *)(v30 + 8) == 1179468873 )
      {
        v31 = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v30 + 16));
        v32 = 4;
        if ( !v31 )
          v32 = 1;
        *(_BYTE *)(a2 + 3) = v32;
      }
      else
      {
LABEL_68:
        *(_BYTE *)(a2 + 3) = 6;
      }
      break;
    default:
      break;
  }
  if ( !*(_BYTE *)(a2 + 3) )
    return 1;
  StorPortNotification(0LL, a1, a2);
  return 0;
}
