/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18000B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001EED0 (-CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x18004C8E4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteInsert(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *this,
        unsigned int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  __int64 v6; // rsi
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v7; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rbp
  __int64 i; // rdi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // r9
  const char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v21; // [rsp+40h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 3);
  v7 = 0LL;
  v21 = 0LL;
  v8 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32);
  if ( *((_DWORD *)v8 + 46) != GetCurrentThreadId() )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(&v21, v6);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v8);
    v7 = v21;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 5); ; i = *(_QWORD *)(i + 48) )
    {
      if ( !i )
      {
        v11 = 0;
        goto LABEL_10;
      }
      if ( *(_BYTE *)(i + 32) )
      {
        v10 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteInsertOnStub(
                (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                a2,
                a3);
        v11 = v10;
        if ( v10 < 0 )
          break;
      }
    }
    v13 = (unsigned int)v10;
    v14 = "d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl";
    v15 = 549LL;
  }
  else
  {
    v11 = -2018375660;
    v13 = 2276591636LL;
    v14 = "onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h";
    v15 = 62068LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v15, (unsigned int)v14, (const char *)v13, v19);
LABEL_10:
  if ( v7 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v7[4]);
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v7, v16, v17, v18);
  }
  return v11;
}
