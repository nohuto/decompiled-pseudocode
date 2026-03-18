/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C0075D00
 * Callers:
 *     ApplyPathsModality @ 0x1C00787AC (ApplyPathsModality.c)
 * Callees:
 *     DrvUpdateDisplayDriverParameters @ 0x1C00756BC (DrvUpdateDisplayDriverParameters.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  wchar_t *v4; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // edx
  struct _devicemodeW *v7; // r14
  __int64 v8; // rcx
  wchar_t *i; // rcx
  int updated; // ebp
  __int64 v12; // rax
  PVOID BackTrace[20]; // [rsp+30h] [rbp-B8h] BYREF

  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 220LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_30:
      WdLogSingleEntry2(6LL, 220LL, a1);
      return 3221225626LL;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1936876615 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 236LL);
  if ( !Pool2 )
    goto LABEL_30;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_29;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v1,
                           Pool2,
                           BackTrace) )
  {
LABEL_29:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_30;
  }
LABEL_4:
  v4 = gpGraphicsDeviceList;
  v5 = 0;
  while ( v4 )
  {
    if ( (*((_DWORD *)v4 + 40) & 0x800000) != 0 )
    {
      v6 = 0;
      v7 = (struct _devicemodeW *)Pool2;
      if ( *(_WORD *)(a1 + 20) )
      {
        while ( 1 )
        {
          v8 = 296LL * v6;
          if ( *(_QWORD *)(v8 + a1 + 304) )
          {
            if ( !_bittest64((const signed __int64 *)(v8 + a1 + 56), 0x24u)
              && *((_DWORD *)v4 + 62) == *(_DWORD *)(v8 + a1 + 72)
              && *((_DWORD *)v4 + 63) == *(_DWORD *)(v8 + a1 + 76)
              && *((_DWORD *)v4 + 64) == *(_DWORD *)(v8 + a1 + 80) )
            {
              break;
            }
          }
          if ( ++v6 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_14;
        }
        v7 = *(struct _devicemodeW **)(v8 + a1 + 304);
      }
LABEL_14:
      for ( i = gpGraphicsDeviceList; ; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( !i )
        {
          updated = -1073741811;
          goto LABEL_34;
        }
        if ( i == v4 )
          break;
      }
      updated = DrvUpdateDisplayDriverParameters(
                  (struct tagGRAPHICS_DEVICE *)i,
                  v7,
                  v7 == (struct _devicemodeW *)Pool2,
                  0);
      if ( updated >= 0 )
        goto LABEL_18;
LABEL_34:
      WdLogSingleEntry4(2LL, v4, a1);
      v5 = updated;
    }
LABEL_18:
    v4 = (wchar_t *)*((_QWORD *)v4 + 16);
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
  return v5;
}
