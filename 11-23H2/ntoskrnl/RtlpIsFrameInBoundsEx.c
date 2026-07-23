/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x1402A6840
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402A4530 (RtlpWalkFrameChain.c)
 *     PspGetSetContextInternal @ 0x140724C00 (PspGetSetContextInternal.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x140222C2C (KeGetNextKernelStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x14034EB50 (KeQueryCurrentStackInformation.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v9; // ecx
  _KTHREAD *CurrentThread; // r10
  unsigned int v11; // r9d
  char *v12; // rcx
  char *v13; // rdx
  char v14; // al
  char v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+48h] [rbp+10h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  KeQueryCurrentStackInformation(&v21, &v20, &v19);
  if ( v21 <= 9 )
  {
    v9 = 929;
    if ( _bittest(&v9, v21) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = v21;
  if ( v21 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
    {
      v12 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v13 = &v12[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v13 <= a2 && a2 < (unsigned __int64)v12 )
      {
        *a3 = (unsigned __int64)v12;
        *a1 = (unsigned __int64)v13;
        return 1;
      }
    }
    v11 = v21;
  }
  v14 = 0;
  if ( !*a4 )
  {
    KeGetNextKernelStackSegment(CurrentThread, a4, 1);
    v14 = v15;
  }
  if ( v11 > 0xA || (v16 = 1090, !_bittest(&v16, v11)) || !v14 )
  {
    if ( !KeGetNextKernelStackSegment(CurrentThread, a4, 0) )
      return 0;
  }
  v17 = a4[1];
  v18 = *a4;
  if ( a2 < v17 || a2 >= v18 )
    return 0;
  *a1 = v17;
  *a3 = v18;
  return 1;
}
