/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02294A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002C184 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C003175C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C02292A8 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02293EC (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // rax
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  _QWORD *v16; // rsi
  unsigned int v17; // ebp
  int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned int v20; // ebp
  char *v21; // rdx
  void *QuotaZInit; // rax
  __int64 v23; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 Quota; // rax
  __int64 i; // rbp
  struct DirectComposition::CResourceMarshaler *v28; // rax
  __int64 v29; // r9
  int v30; // edx
  struct DirectComposition::CResourceMarshaler *v31; // rax
  __int64 v32; // r9
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v35; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v8 = a2;
  *a6 = 0;
  v10 = a3 - 21;
  if ( !v10 )
  {
    if ( a4 || !*((_DWORD *)this + 90) )
    {
      if ( Size > 0x1000 || (Size & 7) != 0 )
        goto LABEL_8;
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
      v25 = Size >> 3;
      if ( (unsigned int)(Size >> 3) )
      {
        Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                  v24,
                  260LL,
                  16LL * (unsigned int)v25,
                  0x72694344u);
        *((_QWORD *)this + 44) = Quota;
        if ( Quota )
        {
          for ( i = 0LL; (unsigned int)i < (unsigned int)v25; i = (unsigned int)(i + 1) )
          {
            v28 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, a4[2 * i]);
            if ( !v28 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v28 + 9), 105) )
            {
              v6 = -1073741811;
              goto LABEL_50;
            }
            *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i) = v29;
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i));
            ++*((_DWORD *)this + 90);
            v30 = a4[2 * i + 1];
            if ( v30 )
            {
              v31 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v30);
              if ( !v31 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v31 + 9), 89) )
              {
                v6 = -1073741811;
                *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8) = 0LL;
                break;
              }
              *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8) = v32;
              DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8));
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8) = 0LL;
            }
          }
          if ( v6 >= 0 )
            goto LABEL_35;
          goto LABEL_50;
        }
        goto LABEL_29;
      }
    }
    else
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
    }
LABEL_35:
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    return (unsigned int)v6;
  }
  v11 = v10 - 20;
  if ( !v11 )
  {
    v19 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_8;
    v20 = 0;
LABEL_26:
    v21 = (char *)*((_QWORD *)this + v20 + 33);
    if ( v21 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v21);
      *((_QWORD *)this + v20 + 33) = 0LL;
    }
    QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           this,
                           (unsigned __int64)v21,
                           v19,
                           0x72694344u);
    *((_QWORD *)this + v20 + 33) = QuotaZInit;
    if ( QuotaZInit )
    {
      memmove(QuotaZInit, a4, v19);
      *((_QWORD *)this + v20 + 37) = v19;
      *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                                v23,
                                                v20);
      goto LABEL_31;
    }
LABEL_29:
    v6 = -1073741801;
    goto LABEL_50;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v19 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_8;
    v20 = 1;
    goto LABEL_26;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v19 = Size;
    if ( Size > 0x1000 )
      goto LABEL_8;
    v20 = 3;
    if ( (Size & 3) != 0 )
      goto LABEL_8;
    goto LABEL_26;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v19 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_8;
    v20 = 2;
    goto LABEL_26;
  }
  v15 = v14 - 21;
  if ( v15 )
  {
    if ( v15 == 1 && Size == 36 )
    {
      *(_OWORD *)((char *)this + 412) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 428) = *((_OWORD *)a4 + 1);
      *((_DWORD *)this + 111) = a4[8];
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x1000000u;
      return (unsigned int)v6;
    }
    goto LABEL_8;
  }
  if ( Size != 12 )
  {
LABEL_8:
    v6 = -1073741811;
    goto LABEL_51;
  }
  v16 = (_QWORD *)((char *)this + 368);
  v17 = *((_DWORD *)this + 98);
  v18 = a4[2];
  Src = *(_QWORD *)a4;
  v35 = v18;
  v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
         (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368),
         1LL,
         0x72694344u);
  if ( v6 >= 0 )
  {
    memmove((void *)(*v16 + v16[4] * v17), &Src, v16[4]);
LABEL_31:
    *a6 = 1;
    return (unsigned int)v6;
  }
LABEL_50:
  v8 = a2;
LABEL_51:
  if ( *((_QWORD *)this + 44) )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, v8);
  return (unsigned int)v6;
}
