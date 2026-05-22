/*
 * XREFs of ??1CAnimationInstance@DirectComposition@@EEAA@XZ @ 0x180061D94
 * Callers:
 *     ??_ECAnimationInstance@DirectComposition@@EEAAPEAXI@Z @ 0x180063E20 (--_ECAnimationInstance@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Reset@CAnimationData@DirectComposition@@QEAAXXZ @ 0x18006409C (-Reset@CAnimationData@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ @ 0x1800E901C (-ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CAnimationInstance::~CAnimationInstance(DirectComposition::CAnimationInstance *this)
{
  DirectComposition::CTransformGroupProxy *v2; // rcx
  DirectComposition::CDeviceLock *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &DirectComposition::CAnimationInstance::`vftable'{for `CMILCOMBaseT<IDCompositionAnimationInstancePartner>'};
  *((_QWORD *)this + 2) = &DirectComposition::CAnimationInstance::`vftable'{for `IAnimationInterpolatorData'};
  DirectComposition::CAnimationData::Reset((DirectComposition::CAnimationInstance *)((char *)this + 112));
  if ( *((_DWORD *)this + 52) )
  {
    v3 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
    DirectComposition::CDeviceLock::Enter(v3);
    DirectComposition::CAnimationInstance::ReleaseProxiedCallbackId(this);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v3);
  }
  v2 = (DirectComposition::CTransformGroupProxy *)*((_QWORD *)this + 4);
  if ( v2 )
    DirectComposition::CTransformGroupProxy::Release(v2);
  DirectComposition::CAnimationData::Reset((DirectComposition::CAnimationInstance *)((char *)this + 112));
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 5);
}
