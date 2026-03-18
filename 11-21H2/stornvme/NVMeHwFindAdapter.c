/*
 * XREFs of NVMeHwFindAdapter @ 0x1C000ACD0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C000569C (GetControllerMaxTransferSize.c)
 *     NVMeLogEtwControllerInfo @ 0x1C0005BE0 (NVMeLogEtwControllerInfo.c)
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C000B2D0 (ControllerAllocateUncachedExtension.c)
 *     GetRegistrySettings @ 0x1C000B42C (GetRegistrySettings.c)
 *     GetNVMeRegisterAddress @ 0x1C000CA90 (GetNVMeRegisterAddress.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0017A04 (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0017B68 (NVMeControllerStartFailureEventLog.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // r12
  __int64 v7; // r15
  int v8; // r13d
  unsigned int v9; // esi
  int v10; // r13d
  char v11; // cl
  char v12; // al
  __int16 v13; // r14
  __int16 v14; // cx
  __int16 v15; // dx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *NVMeRegisterAddress; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int8 v22; // al
  char v23; // cl
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // r8
  char v31; // r9
  int v32; // edx
  __int64 v33; // r8
  int v34; // eax
  int v35; // eax
  int v37; // eax
  void **v38; // r14
  _BYTE v39[96]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v40[5]; // [rsp+D8h] [rbp-30h] BYREF
  int v41; // [rsp+128h] [rbp+20h] BYREF
  __int16 v42; // [rsp+12Ch] [rbp+24h]

  v6 = 0;
  v7 = *(_QWORD *)(a5 + 64);
  memset(v39, 0, 0x58uLL);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = 2;
  v41 = 16843008;
  v42 = 257;
  StorPortExtendedFunction(103LL, a1, 6LL, &v41);
  v10 = v8 & 2;
  if ( !v10 )
  {
    v11 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v11 + 1) & 0xF;
  }
  v12 = *(_BYTE *)(a5 + 197);
  v13 = 64;
  *(_BYTE *)(a1 + 20) = v12;
  if ( v12 )
  {
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 36) = 2;
      goto LABEL_65;
    }
    StorPortExtendedFunction(45LL, a1, v7, 144LL);
    *(_WORD *)(a1 + 4) = *(_WORD *)v7;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v7 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v7 + 4);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(v7 + 8);
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(v7 + 48);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(v7 + 64);
    *(_OWORD *)(a1 + 104) = *(_OWORD *)(v7 + 80);
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(a1 + 136) = *(_OWORD *)(v7 + 112);
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(v7 + 128);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(v7 + 136);
    v37 = *(_DWORD *)(v7 + 140);
    *(_DWORD *)(a1 + 64) |= 4u;
    *(_DWORD *)(a1 + 216) = v37;
  }
  else
  {
    memset(v40, 0, 0x40uLL);
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v40, 64) != 64 )
    {
      *(_DWORD *)(a1 + 36) = 3;
      goto LABEL_64;
    }
    v14 = v40[0];
    v15 = WORD1(v40[0]);
    *(_BYTE *)(a1 + 8) = BYTE8(v40[0]);
    *(_WORD *)(a1 + 4) = v14;
    *(_WORD *)(a1 + 6) = v15;
    if ( v14 == -32634 && v15 == 8209 )
    {
      v16 = *((_QWORD *)&v40[1] + 1);
      v17 = 4294963200LL;
      v18 = HIDWORD(v40[1]);
    }
    else
    {
      v16 = *(_QWORD *)&v40[1];
      v17 = 4294950912LL;
      v18 = DWORD1(v40[1]);
    }
    *(_QWORD *)(a1 + 168) = v17 & v16 | (v18 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 176) = NVMeRegisterAddress;
  if ( !NVMeRegisterAddress )
  {
    *(_DWORD *)(a1 + 36) = 4;
LABEL_64:
    v6 = 1;
    v9 = 3;
    goto LABEL_65;
  }
  v20 = *NVMeRegisterAddress;
  v21 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 192) = v20;
  LOBYTE(v20) = HIDWORD(*(_QWORD *)(a1 + 192)) & 0xF;
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(v21 + 8);
  *(_DWORD *)(a1 + 200) = 4 << v20;
  if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
  {
    v22 = 1;
    *(_BYTE *)(a1 + 195) = 1;
  }
  else
  {
    v22 = *(_BYTE *)(a1 + 195);
  }
  *(_DWORD *)(a1 + 204) = 500 * v22;
  v23 = *(_BYTE *)(a1 + 20);
  if ( !v23 && !v10 )
  {
    GetRegistrySettings(a1);
    v23 = *(_BYTE *)(a1 + 20);
  }
  v24 = 3;
  if ( *(_DWORD *)(a5 + 20) != 1 )
    v24 = 1;
  *(_DWORD *)(a1 + 16) = v24;
  v25 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 296) = 1048640;
  if ( v23 )
  {
    *(_WORD *)(a1 + 300) = 64;
    if ( !v25 || v25 > 0x40 )
      goto LABEL_24;
  }
  else
  {
    *(_WORD *)(a1 + 300) = 256;
    v26 = 1024;
    if ( v25 )
      v26 = v25;
    if ( v26 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 192) + 1 )
      v26 = (unsigned __int16)*(_DWORD *)(a1 + 192) + 1;
    LOWORD(v25) = -1;
    if ( v26 < 0xFFFF )
      LOWORD(v25) = v26;
  }
  v13 = v25;
LABEL_24:
  *(_WORD *)(a1 + 302) = v13;
  *(_BYTE *)(a5 + 81) = 1;
  *(_DWORD *)(a5 + 148) = 1;
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 145) = 0;
  if ( *(_DWORD *)(a5 + 20) == 1 )
  {
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
    v27 = 2;
  }
  else
  {
    v27 = 1;
  }
  *(_DWORD *)(a5 + 160) = v27;
  *(_DWORD *)(a5 + 216) = 0;
  if ( *(_BYTE *)(a5 + 144) == 0x80 )
    *(_BYTE *)(a5 + 144) = 2;
  v28 = *(_DWORD *)(a5 + 220) | 2;
  *(_BYTE *)(a5 + 147) = 0;
  v29 = v28 | 0x29;
  *(_DWORD *)(a5 + 220) = v29;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v29 | 4;
  if ( !v10 )
  {
    if ( !(unsigned __int8)ControllerAllocateUncachedExtension(a1, a5) )
    {
      v6 = 1;
      goto LABEL_65;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      v30 = *(unsigned int *)(a1 + 120);
      if ( (_DWORD)v30 )
      {
        v38 = (void **)(a1 + 3888);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v30, 1701672526LL) )
        {
          if ( *v38 )
            NVMeZeroMemory(*v38, *(_DWORD *)(a1 + 120));
        }
      }
    }
  }
  if ( !(unsigned int)ControllerReset(a1, 1) && !(unsigned int)NVMeControllerInitPart1(a1, 1) )
  {
    v31 = *(_BYTE *)(*(_QWORD *)(a1 + 1640) + 77LL);
    if ( v31 )
      v32 = (1 << v31) * (1 << ((*(_BYTE *)(a1 + 198) & 0xF) + 12));
    else
      v32 = -1;
    *(_DWORD *)(a1 + 208) = v32;
    *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
    *(_DWORD *)(a5 + 212) = 32;
    *(_DWORD *)(a5 + 204) = 32;
    *(_DWORD *)(a5 + 208) = 32;
    *(_DWORD *)(a5 + 28) = 513;
    *(_BYTE *)(a5 + 72) = 1;
    *(_BYTE *)(a5 + 97) = 1;
    *(_BYTE *)(a5 + 146) = -1;
    if ( !*(_BYTE *)(a1 + 20) )
    {
      v34 = *(_DWORD *)(v33 + 96);
      v40[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
      v40[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
      v40[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
      v40[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
      v35 = v34 & 2;
      if ( v35 )
        v40[4] = GUID_NVME_POWER_NOPPME;
      StorPortExtendedFunction(26LL, a1, (unsigned int)(v35 != 0) + 4, v40);
    }
    *(_DWORD *)(a1 + 32) &= ~2u;
    return 1;
  }
LABEL_65:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeControllerStartFailureEventLog(a1);
    NVMeLogEtwControllerInfo(a1);
    if ( v6 )
    {
      FillControllerRuntimeLog(a1, v39);
      StorPortNotification(4109LL, a1, 0LL, 0LL);
    }
  }
  return v9;
}
