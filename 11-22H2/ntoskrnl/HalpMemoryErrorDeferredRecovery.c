/*
 * XREFs of HalpMemoryErrorDeferredRecovery @ 0x1405199D4
 * Callers:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x14050B3A0 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceRecoveryNotRequiredAmd @ 0x140519384 (HalpMceRecoveryNotRequiredAmd.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x1405193F0 (HalpMceRecoveryNotRequiredIntel.c)
 *     HalpGhesMemoryErrorHandler @ 0x14051988C (HalpGhesMemoryErrorHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x14050BD50 (HalpHvSetMachineCheckRecoveryState.c)
 *     HalpAcquireDrsPool @ 0x14051964C (HalpAcquireDrsPool.c)
 *     HalpFreeDrsPool @ 0x140519730 (HalpFreeDrsPool.c)
 *     WheaRequestDeferredRecovery @ 0x140612D30 (WheaRequestDeferredRecovery.c)
 */

__int64 __fastcall HalpMemoryErrorDeferredRecovery(
        __int64 a1,
        char a2,
        __int64 a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v12; // rdi
  int v13; // ebx
  int v14; // eax

  v12 = HalpAcquireDrsPool();
  if ( v12 )
  {
    if ( !HalpHvWheaEnlightenedCpuManager )
    {
LABEL_12:
      *(_WORD *)(v12 + 58) = a5;
      *(_BYTE *)(v12 + 60) = a6;
      *(_BYTE *)(v12 + 61) = a7;
      *(_QWORD *)(v12 + 48) = a1;
      *(_BYTE *)(v12 + 62) = a8 & 1;
      *(_BYTE *)(v12 + 56) = a2;
      *(_QWORD *)(v12 + 64) = a3;
      *(_DWORD *)(v12 + 72) = a4;
      *(_DWORD *)(v12 + 76) = 1;
      if ( (unsigned __int8)WheaRequestDeferredRecovery(v12 + 8, v12 + 48) )
        return 0;
      HalpFreeDrsPool((_DWORD *)v12);
      return (unsigned int)-1073741757;
    }
    if ( a3 )
    {
      if ( !qword_140C62600 )
      {
        v13 = -1073741823;
        goto LABEL_10;
      }
      v14 = qword_140C62600(a3);
    }
    else
    {
      v14 = HalpHvSetMachineCheckRecoveryState(1);
    }
    v13 = v14;
LABEL_10:
    if ( v13 < 0 )
    {
      HalpFreeDrsPool((_DWORD *)v12);
      return (unsigned int)v13;
    }
    goto LABEL_12;
  }
  return (unsigned int)-1073741757;
}
