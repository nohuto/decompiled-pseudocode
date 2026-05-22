/*
 * XREFs of ??0TestCommands@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180034D0C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037EEC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TestCommands::TestCommands(_QWORD *a1, struct Microsoft::Bamo::BaseBamoConnection *a2, _QWORD *a3)
{
  *a1 = &BamoTestCommandsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &BamoImpl::BamoTestCommandsPrincipalImpl::`vftable';
  *a1 = &TestCommands::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  a1[7] = *a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a1 + 7);
  return a1;
}
