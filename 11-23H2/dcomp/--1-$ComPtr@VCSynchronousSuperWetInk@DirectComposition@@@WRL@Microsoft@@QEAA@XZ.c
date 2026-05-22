/*
 * XREFs of ??1?$ComPtr@VCSynchronousSuperWetInk@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E6558
 * Callers:
 *     ?Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@@Z @ 0x1800E6AB0 (-Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurface.c)
 *     ?Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enum@SynchronousSuperWetLookupMode@@PEAPEAV12@@Z @ 0x1800FC3CC (-Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enu.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 */

DirectComposition::CDelayedDestructionObject *__fastcall Microsoft::WRL::ComPtr<DirectComposition::CSynchronousSuperWetInk>::~ComPtr<DirectComposition::CSynchronousSuperWetInk>(
        DirectComposition::CDelayedDestructionObject **a1)
{
  DirectComposition::CDelayedDestructionObject *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (DirectComposition::CDelayedDestructionObject *)DirectComposition::CDelayedDestructionObject::Release(result);
  }
  return result;
}
