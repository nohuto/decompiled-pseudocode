/*
 * XREFs of ??1CGenericInk@DirectComposition@@EEAA@XZ @ 0x1800ED878
 * Callers:
 *     ??_ECGenericInk@DirectComposition@@EEAAPEAXI@Z @ 0x1800ED9AC (--_ECGenericInk@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 */

void __fastcall DirectComposition::CGenericInk::~CGenericInk(DirectComposition::CGenericInk *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    operator delete(v2);
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease((char *)this + 40);
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease((DirectComposition::CTransformGroupProxy **)this + 3);
}
