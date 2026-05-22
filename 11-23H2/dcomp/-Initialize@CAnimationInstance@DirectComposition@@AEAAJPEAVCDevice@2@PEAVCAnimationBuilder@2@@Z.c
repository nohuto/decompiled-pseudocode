/*
 * XREFs of ?Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z @ 0x180063650
 * Callers:
 *     ?Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12@@Z @ 0x180063584 (-Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12.c)
 * Callees:
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 *     ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0 (--$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectCompos.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ @ 0x1800E8AAC (-EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::Initialize(
        DirectComposition::CAnimationInstance *this,
        struct DirectComposition::CDevice *a2,
        struct DirectComposition::CAnimationBuilder *a3)
{
  int AnimationResourceHandle; // edi
  struct DirectComposition::CAnimationProxy *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  struct DirectComposition::CAnimationProxy *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *((_QWORD *)this + 3) = a2;
  AnimationResourceHandle = DirectComposition::CAnimationBuilder::GetAnimationResourceHandle(a3, a2, 1, &v10);
  if ( AnimationResourceHandle >= 0 )
  {
    v6 = v10;
    AnimationResourceHandle = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                                (struct DirectComposition::CAnimationProxy *)((char *)v10 + 8),
                                0xAu,
                                1LL);
    if ( AnimationResourceHandle >= 0 )
    {
      *((_QWORD *)this + 4) = v6;
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      *((_QWORD *)this + 14) = *((_QWORD *)a3 + 6);
      *((_QWORD *)this + 17) = *((_QWORD *)a3 + 9);
      *((_QWORD *)this + 18) = *((_QWORD *)a3 + 10);
      *((_DWORD *)this + 38) = *((_DWORD *)a3 + 22);
      *((_QWORD *)this + 20) = *((_QWORD *)a3 + 12);
      v7 = *((_QWORD *)a3 + 7);
      *((_QWORD *)this + 15) = v7;
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v8 = *((_QWORD *)a3 + 8);
      *((_QWORD *)this + 16) = v8;
      if ( v8 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
      if ( *((_DWORD *)this + 38) && *(_QWORD *)(*((_QWORD *)this + 3) + 656LL) )
        AnimationResourceHandle = DirectComposition::CAnimationInstance::EnsureCallbackId(this);
    }
  }
  ReleaseInterface<DirectComposition::CAnimationProxy>(&v10);
  return (unsigned int)AnimationResourceHandle;
}
