/*
 * XREFs of ?Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12@@Z @ 0x180063584
 * Callers:
 *     ?CreateAnimationInstance@CDevice@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z @ 0x1800634B0 (-CreateAnimationInstance@CDevice@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCo.c)
 * Callees:
 *     ?Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z @ 0x180063650 (-Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z.c)
 *     ??_ECAnimationInstance@DirectComposition@@EEAAPEAXI@Z @ 0x180063E20 (--_ECAnimationInstance@DirectComposition@@EEAAPEAXI@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::Create(
        struct DirectComposition::CDevice *a1,
        struct DirectComposition::CAnimationBuilder *a2,
        struct DirectComposition::CAnimationInstance **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  int v8; // edi

  v6 = DefaultHeap::AllocClear(0xD8uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &DirectComposition::CAnimationInstance::`vftable'{for `CMILCOMBaseT<IDCompositionAnimationInstancePartner>'};
    *((_QWORD *)v6 + 2) = &DirectComposition::CAnimationInstance::`vftable'{for `IAnimationInterpolatorData'};
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    v6[14] = 0;
    v6[15] = 0;
    v6[16] = 0;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
    v6[22] = 0;
    v6[23] = 0;
    v6[24] = 0;
    v6[44] = -1;
    *((_QWORD *)v6 + 21) = v6 + 4;
    v8 = DirectComposition::CAnimationInstance::Initialize((DirectComposition::CAnimationInstance *)v6, a1, a2);
    if ( v8 < 0 )
    {
      DirectComposition::CAnimationInstance::`vector deleting destructor'(
        (DirectComposition::CAnimationInstance *)v7,
        1u);
    }
    else
    {
      *a3 = (struct DirectComposition::CAnimationInstance *)v7;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
