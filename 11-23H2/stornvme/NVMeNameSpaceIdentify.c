/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C0021890
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D910 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     IsIntelChatham @ 0x1C0007D58 (IsIntelChatham.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x1C001D790 (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeLogNameSpaceIdentificationStatus @ 0x1C00204C4 (NVMeLogNameSpaceIdentificationStatus.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C0021CA0 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeVersionCheck @ 0x1C0024DE4 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  char v4; // al
  __int64 v5; // rcx
  unsigned int v6; // edi
  _QWORD *v7; // r14
  int v8; // ecx
  char v9; // r13
  int v10; // r15d
  unsigned int v11; // eax
  int i; // edx
  __int64 v13; // rcx
  char v14; // cl
  char *v15; // r8
  __int64 result; // rax
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  char *v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  int v20[2]; // [rsp+50h] [rbp-18h]
  int v21[4]; // [rsp+58h] [rbp-10h]
  char v22; // [rsp+B0h] [rbp+48h]
  int v23; // [rsp+B0h] [rbp+48h]
  int v24; // [rsp+B8h] [rbp+50h]

  v1 = *(_QWORD *)(a1 + 4272);
  v3 = *(_QWORD *)(a1 + 1840);
  *(_QWORD *)v21 = v3;
  *(_QWORD *)v20 = v1;
  v4 = NVMeVersionCheck();
  v22 = v4;
  v17 = 0LL;
  v19 = 0LL;
  if ( !*(_BYTE *)(v5 + 20) && v4 && (*(_DWORD *)(v5 + 64) & 0x40000) == 0 )
    NVMeAllocateDmaBuffer(v5, 0x1000u);
  v6 = *(_DWORD *)(v3 + 516);
  v7 = *(_QWORD **)(a1 + 1936);
  v8 = 0;
  if ( v6 > 0xFF )
    v6 = 255;
  v24 = 0;
  if ( !v6 )
    goto LABEL_30;
  v9 = v22;
  v10 = 1;
  while ( 1 )
  {
    v11 = v10;
    if ( !*(_BYTE *)(a1 + 20) || *(_DWORD *)(a1 + 224) == v10 )
      break;
LABEL_28:
    ++v10;
    if ( v11 >= v6 )
      goto LABEL_29;
  }
  LocalCommandReuse(a1, a1 + 944);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v13 = *(_QWORD *)(a1 + 1040);
  *(_QWORD *)(v13 + 4120) = *(_QWORD *)(a1 + 1944);
  *(_BYTE *)(v13 + 4136) = v10 == 0;
  *(_BYTE *)(v13 + 4096) = 6;
  *(_DWORD *)(v13 + 4100) = v10;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( IsIntelChatham(a1) )
  {
    HIBYTE(v23) = *((_BYTE *)v7 + 384);
    BYTE2(v23) = *((_BYTE *)v7 + 385);
    BYTE1(v23) = *((_BYTE *)v7 + 386);
    LOBYTE(v23) = *((_BYTE *)v7 + 387);
    if ( v23 != -559038737 && v10 == 1 )
    {
      memset(v7, 0, 0x1000uLL);
      *v7 = 67108336LL;
      *((_BYTE *)v7 + 130) = 9;
      v7[1] = 67108336LL;
      v7[2] = 67108336LL;
    }
  }
  if ( *(_BYTE *)(a1 + 955) != 1
    || (v14 = *(_BYTE *)(a1 + 20)) == 0
    && v6 > 1
    && v9
    && !*((_BYTE *)v7 + 4 * (*((_BYTE *)v7 + 26) & 0xF) + 130)
    && !*v7 )
  {
LABEL_26:
    if ( *(_BYTE *)(a1 + 20) )
      goto LABEL_29;
    v11 = v10;
    goto LABEL_28;
  }
  v18 = 0LL;
  if ( v14 )
  {
    v15 = *(char **)(a1 + 1856);
    v18 = v15;
    *(_QWORD *)(a1 + 1856) = v15 + 424;
    NVMeParseNameSpaceIdentifyData(a1, (int)v7, v21[0], v20[0], v10, v15);
    ++v24;
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v10 - 1) + 1952) = v18;
    *(_DWORD *)(a1 + 232) = (unsigned __int16)v10;
    goto LABEL_26;
  }
  StorPortExtendedFunction(0LL, a1, 424LL);
LABEL_29:
  v8 = v24;
LABEL_30:
  *(_DWORD *)(a1 + 220) = v8;
  result = *(unsigned int *)(a1 + 4344);
  if ( (result & 0x20) != 0 )
    result = NVMeLogNameSpaceIdentificationStatus(a1, 0, 0, 0xC1000002);
  if ( v17 )
    return NVMeFreeDmaBuffer(a1, 4096LL, &v17, v19);
  return result;
}
