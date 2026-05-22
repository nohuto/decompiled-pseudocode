/*
 * XREFs of ?CallRemoteInsertOnStub@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801AB3C4
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801AB078 (-BroadcastRemoteInsert@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoteInsert@BamoList_SimpleHapticsControllerFeedback_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801AC32C (-RemoteInsert@BamoList_SimpleHapticsControllerFeedback_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl::CallRemoteInsertOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        const struct SimpleHapticsControllerFeedback *a3)
{
  unsigned int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v3 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_StubImpl::RemoteInsert(
           a1,
           a2,
           a3);
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B32,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v3,
        v5);
  }
  return 0LL;
}
