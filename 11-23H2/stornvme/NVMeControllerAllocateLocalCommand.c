/*
 * XREFs of NVMeControllerAllocateLocalCommand @ 0x1C000431C
 * Callers:
 *     NVMeControllerCreateLocalCommandPool @ 0x1C0004434 (NVMeControllerCreateLocalCommandPool.c)
 *     NVMeControllerGetLocalCommand @ 0x1C0004558 (NVMeControllerGetLocalCommand.c)
 * Callees:
 *     memset @ 0x1C0004D40 (memset.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeControllerAllocateLocalCommand(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v5; // [rsp+48h] [rbp+18h] BYREF
  void *v6; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v2 = StorPortExtendedFunction(0LL, a1, 128LL);
  v3 = v5;
  if ( !v2 && v5 )
  {
    NVMeAllocateDmaBuffer(a1, 4256LL, &v6, &v7, &v5);
    if ( v6 )
    {
      memset(v6, 0, 0x10A0uLL);
      *(_QWORD *)(v5 + 96) = v6;
      *(_QWORD *)(v5 + 104) = v7;
      *(_QWORD *)(v5 + 64) = *(_QWORD *)(v5 + 96);
      *(_QWORD *)(*(_QWORD *)(v5 + 96) + 4232LL) = v5;
      *(_DWORD *)(v5 + 20) = 251658240;
      *(_BYTE *)(v5 + 1) |= 1u;
      return v5;
    }
    goto LABEL_7;
  }
  if ( v6 )
  {
    NVMeFreeDmaBuffer(a1, 4256LL, &v6, v7);
LABEL_7:
    v3 = v5;
  }
  if ( v3 )
    StorPortExtendedFunction(1LL, a1, v3);
  return 0LL;
}
