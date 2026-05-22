/*
 * XREFs of ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180004210
 * Callers:
 *     <none>
 * Callees:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180007400 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180007574 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800221F0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800591B4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub::RemoteInsert(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub *this,
        __int64 a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  __int64 v5; // rbp
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v6; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // r14
  const char *v8; // r9
  Microsoft::BamoImpl::BamoPrincipalImpl *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-68h]
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL);
  v6 = 0LL;
  v15[0] = 0LL;
  v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v5 + 32);
  if ( *((_DWORD *)v7 + 46) != GetCurrentThreadId() )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(v15, v5);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v7);
    v6 = (Microsoft::BamoImpl::BaseBamoConnectionImpl **)v15[0];
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x30B7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v8);
  if ( *((_BYTE *)this + 64) )
  {
    if ( a3 )
    {
      v9 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoActivatableEntityPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v9,
        *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 5));
    }
    v10 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(
            (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub *)((char *)this + 8),
            &v16,
            &v18,
            &v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30C8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v14);
    }
    else
    {
      v15[0] = v18;
      v15[1] = v19;
      v11 = CoreUICallSend(v16, v15, 2LL, 99LL);
    }
  }
  else
  {
    v13 = *((_QWORD *)this + 4);
    v11 = -2018375660;
    if ( v13 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v13 + 16) + 32LL),
        -2018375660,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30C0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v14);
  }
  if ( v6 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v6[4]);
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v6);
  }
  return v11;
}
