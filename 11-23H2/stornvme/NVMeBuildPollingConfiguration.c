/*
 * XREFs of NVMeBuildPollingConfiguration @ 0x1C001C59C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeBuildPollingConfiguration(__int64 a1)
{
  int IsEnabledDeviceUsage; // eax
  __int64 v3; // rdx
  BOOL v4; // ecx
  char v5; // al
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  __int16 v12; // ax

  if ( *(_BYTE *)(a1 + 20) )
    return;
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  IsEnabledDeviceUsage = Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  v3 = *(_QWORD *)(a1 + 1040);
  v4 = IsEnabledDeviceUsage != 0;
  v5 = *(_BYTE *)(v3 + 4253);
  if ( v4 )
    v6 = v5 | 2;
  else
    v6 = v5 & 0xFD;
  *(_BYTE *)(v3 + 4253) = v6;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v7 = *(_QWORD *)(a1 + 1040);
  v8 = *(_QWORD *)(a1 + 1944);
  *(_BYTE *)(v7 + 4096) = 10;
  *(_QWORD *)(v7 + 4120) = v8;
  *(_BYTE *)(v7 + 4136) = -48;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeBuildDevicePollingConfiguration;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 4032) )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_BYTE *)(a1 + 4032) = 1;
LABEL_8:
    v9 = *(_DWORD *)(a1 + 4056);
    if ( v9 )
    {
      if ( v9 > 0x64 )
        v9 = 100;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 72);
    }
    *(_DWORD *)(a1 + 4036) = v9;
    v10 = *(_DWORD *)(a1 + 4060);
    if ( !v10 )
      v10 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a1 + 4040) = v10;
    v11 = *(_DWORD *)(a1 + 4064);
    if ( (v11 & 1) != 0 )
      *(_DWORD *)(a1 + 4044) = v11;
    else
      *(_DWORD *)(a1 + 4044) ^= (*(_DWORD *)(a1 + 4044) ^ (*(_DWORD *)(a1 + 116) >> 1)) & 0xFE;
  }
  if ( (unsigned int)Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage()
    && *(_WORD *)(a1 + 4052) >= 0x101u )
  {
    v12 = *(_WORD *)(a1 + 4070);
    if ( v12 )
      *(_WORD *)(a1 + 4050) = v12;
  }
}
