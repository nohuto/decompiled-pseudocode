/*
 * XREFs of ?InternalRelease@?$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6CA0
 * Callers:
 *     ??$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEAH@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@AEBUVector3@Numerics@Foundation@7@AEAMAEAH@Z @ 0x1800B6A0A (--$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V.c)
 *     ??$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEAH@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@012@AEBUVector3@Numerics@Foundation@Windows@@AEAMAEAH@Z @ 0x1800B6B02 (--$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@_ea_1800B6B02.c)
 *     ?Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@MH@Z @ 0x1800B6CC6 (-Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QE.c)
 *     ??$MakeAndInitialize@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@V12345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@AEAH@Z @ 0x1801351D8 (--$MakeAndInitialize@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@.c)
 *     ?Message_RequestIgnored_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH@Z @ 0x180139FE0 (-Message_RequestIgnored_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A1950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInte.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>::Release(v1);
  }
  return result;
}
