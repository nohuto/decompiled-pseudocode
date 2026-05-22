/*
 * XREFs of ??1CFilterEffect@DirectComposition@@MEAA@XZ @ 0x1800F7ECC
 * Callers:
 *     ??_ECFloodEffect@DirectComposition@@UEAAPEAXI@Z @ 0x1800ED96C (--_ECFloodEffect@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCFilterEffect@DirectComposition@@MEAAPEAXI@Z @ 0x1800F7F70 (--_GCFilterEffect@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CFilterEffect::~CFilterEffect(DirectComposition::CFilterEffect *this)
{
  struct DirectComposition::CRebuildableObject *v2; // rdi
  DirectComposition::CTransformGroupProxy *v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &DirectComposition::CFilterEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  v2 = (DirectComposition::CFilterEffect *)((char *)this + 32);
  *((_QWORD *)this + 2) = &DirectComposition::CFilterEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 3) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  v3 = (DirectComposition::CTransformGroupProxy *)*((_QWORD *)this + 8);
  *(_QWORD *)v2 = &DirectComposition::CFilterEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  if ( v3 )
    DirectComposition::CTransformGroupProxy::Release(v3);
  if ( (*((_BYTE *)this + 48) & 1) != 0 )
  {
    v4 = *((_QWORD *)this + 7);
    if ( v4 )
    {
      v5 = (_QWORD *)(v4 + 96);
      DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(v4 + 96));
      DirectComposition::CDevice::RemoveDirtyRebuildableObject(*((DirectComposition::CDevice **)this + 7), v2);
      CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v5);
    }
  }
  operator delete(*((void **)this + 9));
  *(_QWORD *)v2 = &DirectComposition::CRebuildableObject::`vftable';
}
