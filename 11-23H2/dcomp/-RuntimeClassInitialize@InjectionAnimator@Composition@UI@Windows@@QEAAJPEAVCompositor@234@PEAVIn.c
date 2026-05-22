/*
 * XREFs of ?RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVInjectionAnimation@234@@Z @ 0x18019B838
 * Callers:
 *     ??$MakeAndInitialize2@VInjectionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVInjectionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInjectionAnimator@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVInjectionAnimation@456@@Z @ 0x180162424 (--$MakeAndInitialize2@VInjectionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVIn.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z @ 0x180040620 (-SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllo.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     ??$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180064104 (--$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectCo.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationValueSynchronizationBehavior@234@@Z @ 0x180191080 (-RuntimeClassInitialize@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 */

__int64 __fastcall Windows::UI::Composition::InjectionAnimator::RuntimeClassInitialize(
        Windows::UI::Composition::InjectionAnimator *this,
        DirectComposition::CDevice **a2,
        struct Windows::UI::Composition::InjectionAnimation *a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  int v8; // ebp
  int SharedMemory; // ebx
  __int64 v10; // rcx
  int v11; // edx
  DirectComposition::CDelayedDestructionObject **v12; // rdi
  __int64 *v13; // r14
  _OWORD *v14; // rbx
  __int64 v15; // rdx
  DirectComposition::CDelayedDestructionObject *v16; // rbx
  unsigned int v17; // edx

  v4 = (_QWORD *)*((_QWORD *)a3 + 45);
  v8 = 0;
  while ( v4 )
  {
    v4 = (_QWORD *)*v4;
    ++v8;
  }
  SharedMemory = Windows::UI::Composition::CompositionPropertyAnimator::RuntimeClassInitialize(
                   (__int64)this,
                   (struct Windows::UI::Composition::Compositor *)a2,
                   87,
                   a4,
                   *((_DWORD *)a3 + 74));
  if ( SharedMemory < 0 )
  {
    v17 = 61;
    v12 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 296);
    goto LABEL_13;
  }
  v10 = *((_QWORD *)this + 3);
  v11 = *((_DWORD *)this + 32);
  *((_DWORD *)this + 42) = 17;
  DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v10 + 456), v11, 0, 17LL);
  v12 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 296);
  SharedMemory = DirectComposition::CDevice::AllocateSharedMemory(
                   a2[57],
                   (unsigned int)(132 * v8),
                   (struct DirectComposition::CSharedAllocation **)this + 37);
  if ( SharedMemory < 0 )
  {
    v17 = 82;
LABEL_13:
    DoStackCaptureDirect(SharedMemory, v17);
    ReleaseInterface<DirectComposition::CSharedAllocation>(v12);
    return (unsigned int)SharedMemory;
  }
  v13 = (__int64 *)*((_QWORD *)a3 + 45);
  v14 = (_OWORD *)((char *)*v12 + 56);
  memset_0(v14, 0, (unsigned int)(132 * v8));
  v15 = v8;
  if ( v8 > 0 )
  {
    do
    {
      *v14 = *((_OWORD *)v13 + 1);
      v14[1] = *((_OWORD *)v13 + 2);
      v14[2] = *((_OWORD *)v13 + 3);
      v14[3] = *((_OWORD *)v13 + 4);
      v14[4] = *((_OWORD *)v13 + 5);
      v14[5] = *((_OWORD *)v13 + 6);
      v14[6] = *((_OWORD *)v13 + 7);
      v14[7] = *((_OWORD *)v13 + 8);
      *((_DWORD *)v14 + 32) = *((_DWORD *)v13 + 36);
      v14 = (_OWORD *)((char *)v14 + 132);
      v13 = (__int64 *)*v13;
      --v15;
    }
    while ( v15 );
  }
  Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(
    this,
    11,
    12,
    13,
    *v12,
    (unsigned int)(132 * v8));
  v16 = *v12;
  if ( *((_DWORD *)*v12 + 6) != 3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v16 + 2) + 40LL))((__int64)v16 + 16, 3LL);
    *((_DWORD *)v16 + 6) = 3;
  }
  return 0;
}
