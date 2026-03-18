/*
 * XREFs of NVMeControllerSetHostIdentifier @ 0x1C0019314
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

char __fastcall NVMeControllerSetHostIdentifier(__int64 a1)
{
  unsigned __int8 v1; // dl
  char v3; // si
  void *v4; // rcx
  int v5; // edx
  char v6; // bl
  __int64 v7; // rdx
  int v8; // eax
  void *v10; // [rsp+90h] [rbp+8h] BYREF
  __int64 v11; // [rsp+98h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 4096);
  v10 = 0LL;
  v11 = 0LL;
  v3 = 0;
  if ( (v1 & 1) == 0 )
    goto LABEL_17;
  if ( ((v1 >> 1) & ((*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 96LL) & 1) != 0)) != 0 )
    *(_BYTE *)(a1 + 4096) = v1 | 8;
  v4 = *(void **)(a1 + 952);
  *(_BYTE *)(a1 + 867) = 0;
  memset(v4, 0, 0x10A0uLL);
  v5 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
  *(_DWORD *)(a1 + 856) = 1;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v5;
  while ( v5 < 2 );
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v6 = *(_BYTE *)(a1 + 4096) & 8;
  NVMeAllocateDmaBuffer(a1, 0x10u);
  if ( !v10 )
    goto LABEL_17;
  NVMeZeroMemory(v10, 0x10u);
  memmove(v10, (const void *)(a1 + 4097), v6 != 0 ? 16LL : 8LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4200LL) = v10;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4208LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 952) + 4240LL) = 16;
  v7 = *(_QWORD *)(a1 + 952);
  v8 = *(_DWORD *)(v7 + 4140) ^ (*(_BYTE *)(a1 + 4096) >> 3);
  *(_QWORD *)(v7 + 4120) = *(_QWORD *)(v7 + 4208);
  *(_DWORD *)(v7 + 4140) ^= v8 & 1;
  *(_BYTE *)(v7 + 4096) = 9;
  *(_BYTE *)(v7 + 4136) = -127;
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  if ( *(_BYTE *)(a1 + 867) == 1 )
  {
    *(_BYTE *)(a1 + 4096) |= 4u;
    v3 = 1;
  }
  if ( v10 )
    NVMeFreeDmaBuffer(a1, 16LL, (__int64 *)&v10, v11);
  if ( !v3 )
  {
LABEL_17:
    if ( *(_BYTE *)(a1 + 24) )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return v3;
}
