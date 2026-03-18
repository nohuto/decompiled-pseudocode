/*
 * XREFs of FindOrCreateMaterialProperty @ 0x1C0057BB8
 * Callers:
 *     NtDCompositionSetMaterialProperty @ 0x1C0057A50 (NtDCompositionSetMaterialProperty.c)
 * Callees:
 *     ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C0057A18 (--_GMaterialProperty@@QEAAPEAXI@Z.c)
 *     FindMaterialProperty @ 0x1C00592EC (FindMaterialProperty.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall FindOrCreateMaterialProperty(__int64 a1, __int64 a2, __int64 *a3)
{
  int MaterialProperty; // eax
  unsigned int v7; // edi
  PVOID v8; // rdi
  __int64 Pool2; // rbx
  struct _RTL_GENERIC_TABLE *v10; // rcx
  __int128 v11; // xmm0
  __int64 v13; // rax
  __int128 Buffer; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-C8h]
  PVOID BackTrace[20]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+118h] [rbp+20h] BYREF

  v17 = 0LL;
  MaterialProperty = FindMaterialProperty(a1, a2, &v17);
  v7 = MaterialProperty;
  if ( MaterialProperty == -1073741275 )
  {
    v8 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64777355) == 0x64777355
      && (v13 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1685549909 )
      {
        if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_3;
      }
      Pool2 = ExAllocatePool2(260LL, 40LL);
      if ( !Pool2 )
        goto LABEL_9;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v8,
                                 Pool2,
                                 BackTrace) )
        {
LABEL_18:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_9;
        }
        goto LABEL_5;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v8,
                               Pool2,
                               BackTrace) )
        goto LABEL_18;
      Pool2 += 16LL;
    }
    else
    {
LABEL_3:
      Pool2 = ExAllocatePool2(260LL, 24LL);
    }
    if ( !Pool2 )
    {
LABEL_9:
      Pool2 = 0LL;
      goto LABEL_10;
    }
LABEL_5:
    *(_QWORD *)(Pool2 + 16) = 0LL;
    v10 = Table;
    *(_QWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 8) = a2;
    v11 = *(_OWORD *)Pool2;
    v15 = Pool2;
    Buffer = v11;
    if ( !RtlInsertElementGenericTable(v10, &Buffer, 0x18u, 0LL) )
    {
LABEL_10:
      v7 = -1073741801;
      goto LABEL_22;
    }
    v7 = 0;
LABEL_7:
    *a3 = Pool2;
    return v7;
  }
  Pool2 = v17;
  if ( MaterialProperty >= 0 )
    goto LABEL_7;
LABEL_22:
  if ( Pool2 )
    MaterialProperty::`scalar deleting destructor'((MaterialProperty *)Pool2);
  return v7;
}
