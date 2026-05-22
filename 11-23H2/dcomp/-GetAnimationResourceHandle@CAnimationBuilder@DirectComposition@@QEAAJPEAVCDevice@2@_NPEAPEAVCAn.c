/*
 * XREFs of ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974
 * Callers:
 *     ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z @ 0x18000EE84 (-SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z.c)
 *     ?Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z @ 0x180063650 (-Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z.c)
 * Callees:
 *     ?SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAllocationBase@2@_K@Z @ 0x180021CF0 (-SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAlloca.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ?CreateAnimationProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCAnimationProxy@2@@Z @ 0x180063B94 (-CreateAnimationProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCAnimationProxy@2@@Z.c)
 *     ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z @ 0x180063C1C (-SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestru.c)
 *     ?OptimizeTrailingPrimitives@CAnimationBuilder@DirectComposition@@QEAAXXZ @ 0x180063C9C (-OptimizeTrailingPrimitives@CAnimationBuilder@DirectComposition@@QEAAXXZ.c)
 *     ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z @ 0x180063D90 (-PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 *     ?SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z @ 0x180076370 (-SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::GetAnimationResourceHandle(
        DirectComposition::CAnimationBuilder *this,
        struct DirectComposition::CDevice *a2,
        char a3,
        struct IUnknown **a4)
{
  int v8; // eax
  int AnimationProxy; // edi
  struct IUnknown *v10; // rsi
  struct IUnknown *v11; // r8
  struct DwmAnimationPrimitive *v12; // rax
  struct DwmAnimationPrimitive *v13; // r14
  __int64 v14; // r14
  struct IUnknown *v16; // rax
  int v17; // eax
  struct IUnknown *v18; // [rsp+68h] [rbp+10h] BYREF

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL));
  v8 = *((_DWORD *)this + 22);
  AnimationProxy = 0;
  v10 = 0LL;
  v18 = 0LL;
  if ( v8 && (*((_BYTE *)this + 40) & 4) != 0 )
    a3 = 1;
  if ( a2 != *((struct DirectComposition::CDevice **)this + 3) || !*((_QWORD *)this + 8) || !*((_QWORD *)this + 10) )
    return (unsigned int)-2147024809;
  if ( *((_QWORD *)this + 2) && !a3 )
    goto LABEL_23;
  if ( !v8 )
    DirectComposition::CAnimationBuilder::OptimizeTrailingPrimitives(this);
  AnimationProxy = DirectComposition::CDevice::CreateAnimationProxy(
                     *((DirectComposition::CDevice **)this + 3),
                     (struct DirectComposition::CAnimationProxy **)&v18);
  if ( AnimationProxy < 0 )
    goto LABEL_29;
  v10 = v18;
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
  {
    v17 = DirectComposition::CResourceProxy::SetBufferProperty(
            (DirectComposition::CResourceProxy *)&v18[1],
            4,
            (char *)this + 48,
            8uLL);
    goto LABEL_26;
  }
  v11 = (struct IUnknown *)*((_QWORD *)this + 7);
  if ( v11 )
  {
    v17 = DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)&v18[1], 7, v11);
LABEL_26:
    AnimationProxy = v17;
    if ( v17 < 0 )
      goto LABEL_29;
  }
  if ( !*((_QWORD *)this + 10)
    || (v12 = DirectComposition::CAnimationData::PrimitiveAtIndex(
                (DirectComposition::CAnimationBuilder *)((char *)this + 48),
                *((_QWORD *)this + 10) - 1LL),
        v13 = v12,
        *(_DWORD *)v12 != 4)
    || (AnimationProxy = DirectComposition::CResourceProxy::SetBufferProperty(
                           (DirectComposition::CResourceProxy *)&v10[1],
                           5,
                           (char *)v12 + 8,
                           8uLL),
        AnimationProxy >= 0)
    && (AnimationProxy = DirectComposition::CResourceProxy::SetScalarFloatProperty(
                           (DirectComposition::CResourceProxy *)&v10[1],
                           6u,
                           *((float *)v13 + 4)),
        AnimationProxy >= 0) )
  {
    DirectComposition::CResourceProxy::SetSharedSectionReferenceProperties(
      (DirectComposition::CResourceProxy *)&v10[1],
      0,
      1,
      2,
      *((struct DirectComposition::CSharedAllocationBase **)this + 8),
      32LL * *((_QWORD *)this + 10));
    if ( !*((_DWORD *)this + 22)
      || (AnimationProxy = DirectComposition::CResourceProxy::SetBufferProperty(
                             (DirectComposition::CResourceProxy *)&v10[1],
                             9,
                             (char *)this + 96,
                             8uLL),
          AnimationProxy >= 0)
      && (AnimationProxy = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                             (DirectComposition::CResourceProxy *)&v10[1],
                             8,
                             *((int *)this + 22)),
          AnimationProxy >= 0) )
    {
      DirectComposition::CResourceProxy::SetDeletedNotificationTag(
        v10,
        *((struct DirectComposition::CDelayedDestructionObject **)this + 8));
      v14 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v14 + 24) != 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 16) + 40LL))(v14 + 16, 3LL);
        *(_DWORD *)(v14 + 24) = 3;
      }
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(*((_QWORD *)this + 8) + 8LL));
      if ( *((_DWORD *)this + 22) )
        *((_BYTE *)this + 40) |= 4u;
      goto LABEL_20;
    }
  }
LABEL_29:
  ReleaseInterface<DirectComposition::CAnimationProxy>(&v18);
  if ( AnimationProxy < 0 )
    return (unsigned int)AnimationProxy;
  v10 = v18;
LABEL_20:
  if ( a3 )
  {
    *a4 = v10;
    return (unsigned int)AnimationProxy;
  }
LABEL_23:
  v16 = (struct IUnknown *)*((_QWORD *)this + 2);
  if ( !v16 )
  {
    *((_QWORD *)this + 2) = v10;
    v16 = v10;
  }
  *a4 = v16;
  _InterlockedAdd((volatile signed __int32 *)&v16[1], 1u);
  return (unsigned int)AnimationProxy;
}
