/*
 * XREFs of NVMeControllerSetHostIdentifier @ 0x1C000E9B4
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeControllerSetHostIdentifier(__int64 a1)
{
  char v1; // dl
  char v3; // di
  int i; // edx
  char v5; // si
  __int64 v6; // rdx
  int v7; // eax
  void *v9; // [rsp+90h] [rbp+8h] BYREF
  __int64 v10; // [rsp+98h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 4304);
  v9 = 0LL;
  v10 = 0LL;
  v3 = 0;
  if ( (v1 & 1) == 0 )
    goto LABEL_18;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1840) + 96LL) & 1) != 0 && (v1 & 2) != 0 )
    *(_BYTE *)(a1 + 4304) = v1 | 8;
  LocalCommandReuse(a1, a1 + 944);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= ++i )
    ;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v5 = *(_BYTE *)(a1 + 4304) & 8;
  NVMeAllocateDmaBuffer(a1, 0x10u);
  if ( !v9 )
    goto LABEL_18;
  NVMeZeroMemory(v9, 0x10u);
  memmove(v9, (const void *)(a1 + 4305), v5 != 0 ? 16LL : 8LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4200LL) = v9;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4208LL) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4240LL) = 16;
  v6 = *(_QWORD *)(a1 + 1040);
  v7 = *(_DWORD *)(v6 + 4140) ^ (*(_BYTE *)(a1 + 4304) >> 3);
  *(_QWORD *)(v6 + 4120) = *(_QWORD *)(v6 + 4208);
  *(_DWORD *)(v6 + 4140) ^= v7 & 1;
  *(_BYTE *)(v6 + 4096) = 9;
  *(_BYTE *)(v6 + 4136) = -127;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    *(_BYTE *)(a1 + 4304) |= 4u;
    v3 = 1;
  }
  if ( v9 )
    NVMeFreeDmaBuffer(a1, 16LL, &v9, v10);
  if ( !v3 )
  {
LABEL_18:
    if ( *(_BYTE *)(a1 + 24) )
      StorPortExtendedFunction(85LL, a1, 0LL);
  }
  return v3;
}
