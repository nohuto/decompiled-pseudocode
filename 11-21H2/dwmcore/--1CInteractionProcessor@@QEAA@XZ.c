/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E0BC8
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E01C4 (--1CInteraction@@MEAA@XZ.c)
 *     ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x180181DB0 (--_ECInteractionRoot@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800E0C4C (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((CInteractionProcessor *)((char *)this + 648));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 71);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 60);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 51);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 20);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this);
}
