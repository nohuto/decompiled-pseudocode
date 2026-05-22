/*
 * XREFs of ?CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBU_GUID@@@Z @ 0x1801B93B8
 * Callers:
 *     ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801B9318 (-BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801B98CC (-UIAHitTestResponse@BamoUIAHitTestStubImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestPrincipalImpl::CallUIAHitTestResponseOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        const struct _GUID *a2)
{
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
  {
    v2 = BamoImpl::BamoUIAHitTestStubImpl::UIAHitTestResponse(a1, a2);
    if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE952,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v2,
        v4);
  }
  return 0LL;
}
