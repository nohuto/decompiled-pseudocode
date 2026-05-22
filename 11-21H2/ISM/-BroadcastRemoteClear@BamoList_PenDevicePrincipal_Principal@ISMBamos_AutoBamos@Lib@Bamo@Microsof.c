/*
 * XREFs of ?BroadcastRemoteClear@BamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ @ 0x180186410
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallRemoteClearOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z @ 0x1801867F8 (-CallRemoteClearOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal::BroadcastRemoteClear(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // r9
  const char *v6; // r8
  __int64 v7; // rdx
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, this[3]);
  v3 = *((_QWORD *)this[3] + 4);
  if ( *(_QWORD *)(v3 + 64) )
  {
    for ( i = this[5]; ; i = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 6) )
    {
      if ( !i )
      {
        v4 = 0;
        goto LABEL_10;
      }
      if ( *((_BYTE *)i + 32) )
      {
        v9 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl::CallRemoteClearOnStub(i);
        v4 = v9;
        if ( v9 < 0 )
          break;
      }
    }
    v5 = (unsigned int)v9;
    v6 = "d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl";
    v7 = 549LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 2276591636LL;
    v6 = "onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h";
    v7 = 63897LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v7, (int)v6, (const char *)v5);
LABEL_10:
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v12, v3, v2);
  return v4;
}
