/*
 * XREFs of ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0014AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z @ 0x1C0014468 (-CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceProperty(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // esi
  DirectComposition::CApplicationChannel *v8; // r12
  __int64 v10; // rdx
  int v11; // ebp
  __int64 v12; // rax
  struct DirectComposition::CResourceMarshaler **v13; // r14
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // rdx
  DirectComposition::CResourceMarshaler *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  PVOID v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // r12
  __int64 Pool2; // rbp
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = 0;
  v8 = a2;
  *a5 = 0;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            180LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            20LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            8LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            13LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            111LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            71LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            203LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            55LL) )
    {
      return (unsigned int)-1073741811;
    }
    if ( *((_QWORD *)this + 12) )
      goto LABEL_16;
    v19 = *((_QWORD *)this + 10);
    if ( v19 )
    {
      v20 = 8LL * *(unsigned int *)(v19 + 88);
      if ( is_mul_ok(*(unsigned int *)(v19 + 88), 8uLL) )
      {
        v21 = gpLeakTrackingAllocator;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69664344) == 0x69664344 )
        {
          v23 = 0LL;
          if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1768309572 )
            {
              if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_29;
            }
            v24 = 0;
            if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
            {
              v24 = 1;
              v20 += 16LL;
            }
            Pool2 = ExAllocatePool2(261LL, v20);
            if ( Pool2 )
            {
              memset(BackTrace, 0, sizeof(BackTrace));
              RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
              if ( v24 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v21,
                                        Pool2,
                                        BackTrace) )
                {
                  v22 = Pool2 + 16;
LABEL_30:
                  *((_QWORD *)this + 12) = v22;
                  if ( v22 )
                  {
LABEL_31:
                    *((_DWORD *)this + 26) = *(_DWORD *)(*((_QWORD *)this + 10) + 88LL);
LABEL_32:
                    v8 = a2;
                    goto LABEL_16;
                  }
LABEL_56:
                  v5 = -1073741801;
                  goto LABEL_32;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v21,
                                           Pool2,
                                           BackTrace) )
              {
                *((_QWORD *)this + 12) = Pool2;
                goto LABEL_31;
              }
              ExFreePoolWithTag((PVOID)Pool2, 0);
            }
            *((_QWORD *)this + 12) = 0LL;
            goto LABEL_56;
          }
        }
LABEL_29:
        v22 = ExAllocatePool2(261LL, v20);
        goto LABEL_30;
      }
      v5 = -1073741675;
    }
    else
    {
      v5 = -1073741811;
    }
LABEL_16:
    v15 = a3 & 0x3FFFFFFF;
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( v15 < *((unsigned int *)this + 26) && !DirectComposition::CBrushMarshaler::CheckForCycle(this, a4) )
    {
      v16 = *((_QWORD *)this + 12);
      v17 = *(struct DirectComposition::CResourceMarshaler **)(v16 + 8 * v15);
      if ( v17 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(v8, v17);
        v16 = *((_QWORD *)this + 12);
      }
      *(_QWORD *)(v16 + 8 * v15) = a4;
      v18 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 12) + 8 * v15);
      if ( v18 )
        DirectComposition::CResourceMarshaler::AddRef(v18);
      *((_DWORD *)this + 27) = 0;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v10 = 133LL;
      v11 = 64;
      v12 = 88LL;
      goto LABEL_4;
    }
    return (unsigned int)-1073741811;
  }
  v10 = 26LL;
  v11 = 32;
  v12 = 80LL;
LABEL_4:
  v13 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v12);
  if ( !(DirectComposition::CEffectBrushMarshaler *)((char *)this + v12)
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          v10) )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v13 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(v8, *v13);
    *v13 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= v11;
LABEL_11:
    *a5 = 1;
  }
  return (unsigned int)v5;
}
