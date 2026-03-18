/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x1C00240F0
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000E0D8 (NVMeControllerPowerDown.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000F020 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F57C (NVMeInitHostMemoryBuffer.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned int a4,
        void *Src,
        size_t Size)
{
  int v6; // ebx
  int v8; // edi
  __int64 v10; // rax

  v6 = a2;
  v8 = a3;
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 952);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^ v6) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4140LL) ^ (2 * v8)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4144LL) = a4
                                               / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1936), Src, (unsigned int)Size);
  v10 = HIDWORD(*(_QWORD *)(a1 + 1944));
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4148LL) = *(_QWORD *)(a1 + 1944) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4152LL) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 955) != 1 ? 0xC1000001 : 0;
}
