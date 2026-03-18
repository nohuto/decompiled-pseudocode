/*
 * XREFs of NVMeSetIoQueueCount @ 0x1C00243B4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v4; // si
  unsigned __int16 v5; // di
  int v6; // eax
  unsigned __int16 v7; // di
  __int64 v8; // rax
  char v9; // cl
  __int64 result; // rax

  v2 = a2;
  if ( a2 )
  {
    v4 = *(_WORD *)(a1 + 336);
    v5 = *(_WORD *)(a1 + 338);
  }
  else
  {
    *(_DWORD *)(a1 + 336) = 0;
    if ( *(_BYTE *)(a1 + 20) )
    {
      v4 = 1;
      v5 = 1;
    }
    else
    {
      v4 = *(_WORD *)(a1 + 48);
      if ( !v4 )
      {
        v4 = *(_WORD *)(a1 + 242);
        if ( (unsigned int)(*(_DWORD *)(a1 + 164) - 3) > 1 )
          v4 *= 2;
      }
      v6 = *(_DWORD *)(a1 + 132);
      if ( v6 )
        v4 += v6;
      v5 = *(_WORD *)(a1 + 50);
      if ( !v5 )
      {
        v7 = *(_WORD *)(a1 + 280);
        if ( v7 <= 1u )
          v5 = 1;
        else
          v5 = v7 - 1;
      }
      if ( v6 )
        v5 += v6;
      if ( v4 <= v5 )
        v4 = v5;
    }
  }
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v8 = *(_QWORD *)(a1 + 1040);
  *(_WORD *)(v8 + 4142) = v5 - 1;
  *(_BYTE *)(v8 + 4096) = 9;
  *(_BYTE *)(v8 + 4136) = 7;
  *(_WORD *)(v8 + 4140) = v4 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4232LL) = v2;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  v9 = *(_BYTE *)(a1 + 955);
  if ( v9 == 1 )
    return 0LL;
  result = 3238002689LL;
  if ( v9 == 5 )
    return 3238002700LL;
  return result;
}
