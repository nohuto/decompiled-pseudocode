/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180015640
 * Callers:
 *     <none>
 * Callees:
 *     ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180006240 (-CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800221F0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800591B4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteInsert(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *this,
        unsigned int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *v5; // rdi
  __int64 v6; // rsi
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v7; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbp
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // r9
  const char *v14; // r8
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v18; // [rsp+40h] [rbp+8h] BYREF

  v5 = this;
  v6 = *((_QWORD *)this + 3);
  v7 = 0LL;
  v18 = 0LL;
  v8 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32);
  if ( *((_DWORD *)v8 + 46) != GetCurrentThreadId() )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(&v18, v6);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v8);
    v7 = v18;
  }
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v5 + 3) + 32LL);
  if ( *((_QWORD *)v9 + 8) )
  {
    while ( 1 )
    {
      v5 = (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *)*((_QWORD *)v5 + 5);
      if ( !v5 )
        break;
      if ( *((_BYTE *)v5 + 56) )
      {
        v10 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteInsertOnStub(
                v5,
                a2,
                a3);
        v11 = v10;
        if ( v10 < 0 )
        {
          v13 = (unsigned int)v10;
          v14 = "d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl";
          v15 = 620LL;
          goto LABEL_13;
        }
      }
    }
    v11 = 0;
  }
  else
  {
    v11 = -2018375660;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, -2018375660, 0);
    v13 = 2276591636LL;
    v14 = "onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h";
    v15 = 12041LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v15, (unsigned int)v14, (const char *)v13, v16);
  }
  if ( v7 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v7[4]);
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v7);
  }
  return v11;
}
