/*
 * XREFs of ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801D76B8
 * Callers:
 *     ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipal@@UEAAJAEBU_GUID@@@Z @ 0x1801D7660 (-BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipal@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBU_GUID@@@Z @ 0x1801D7764 (-CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestPrincipalImpl::BroadcastUIAHitTestResponse(
        BamoImpl::BamoUIAHitTestPrincipalImpl *this,
        const struct _GUID *a2)
{
  __int64 v2; // rax
  __int64 i; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 56) )
      {
        v6 = BamoImpl::BamoUIAHitTestPrincipalImpl::CallUIAHitTestResponseOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2);
        v7 = v6;
        if ( v6 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v2 + 32),
      0x87B20814,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2469,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
