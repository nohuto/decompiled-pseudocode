/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x1801B2E68
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x1801B2E00 (-BroadcastRemoteInsert@BamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microso.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?CallRemoteInsertOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoPenDevicePrincipal@@@Z @ 0x1801B31B4 (-CallRemoteInsertOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Li.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl::BroadcastRemoteInsert(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl *this,
        unsigned int a2,
        struct BamoPenDevicePrincipal *a3)
{
  __int64 v3; // rax
  __int64 i; // rbx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 56) )
      {
        v8 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl::CallRemoteInsertOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2,
               a3);
        v9 = v8;
        if ( v8 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v3 + 32),
      0x87B20814,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AB1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
