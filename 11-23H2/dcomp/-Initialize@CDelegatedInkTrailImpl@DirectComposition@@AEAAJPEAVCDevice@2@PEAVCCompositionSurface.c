/*
 * XREFs of ?Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@@Z @ 0x1800E6AB0
 * Callers:
 *     ?Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E6968 (-Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E5AB4 (-GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProx.c)
 *     ??1?$ComPtr@VCSynchronousSuperWetInk@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E6558 (--1-$ComPtr@VCSynchronousSuperWetInk@DirectComposition@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMode@@IIPEAPEAVCSynchronousSuperWetInk@2@@Z @ 0x1800F0D7C (-CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMo.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::Initialize(
        struct DirectComposition::CDelegatedInkTrailCookieTracker **this,
        struct DirectComposition::CDevice *a2,
        struct IUnknown *a3)
{
  int SynchronousSuperWetInk; // eax
  unsigned int v6; // ebx
  DirectComposition::CDelayedDestructionObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // edi
  DirectComposition::CDelayedDestructionObject *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DirectComposition::CDelayedDestructionObject *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  SynchronousSuperWetInk = DirectComposition::CDevice::CreateSynchronousSuperWetInk(a2, 2 - (unsigned int)(a3 != 0LL));
  v6 = SynchronousSuperWetInk;
  if ( SynchronousSuperWetInk < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
      (const char *)(unsigned int)SynchronousSuperWetInk);
LABEL_8:
    Microsoft::WRL::ComPtr<DirectComposition::CSynchronousSuperWetInk>::~ComPtr<DirectComposition::CSynchronousSuperWetInk>(&v15);
    return v6;
  }
  v7 = v15;
  if ( a3 )
  {
    v8 = DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)v15 + 2) + 8LL),
           0,
           a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
        (const char *)(unsigned int)v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
        (const char *)v9);
      v6 = v9;
      goto LABEL_8;
    }
    v10 = DirectComposition::CDelegatedInkTrailCookieTracker::GetForSurface(
            (struct DirectComposition::CCompositionSurfaceProxy *)a3,
            this + 4);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
        (const char *)(unsigned int)v10);
      v6 = v11;
      goto LABEL_8;
    }
  }
  v13 = this[3];
  if ( v13 )
    DirectComposition::CDelayedDestructionObject::Release(v13);
  this[3] = v7;
  return 0LL;
}
