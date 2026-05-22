/*
 * XREFs of ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001C750
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x18001F860 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18001F8D0 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x18001FAC0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x18004C8E4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // rax
  __int64 v12; // rdx
  struct IMessageCallSendHost *SendHost; // rsi
  __int64 v14; // rbx
  unsigned int ItemId; // eax
  unsigned int v16; // edi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r9
  int v22; // [rsp+20h] [rbp-58h]
  _QWORD v23[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v25; // [rsp+80h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
  v6 = 0LL;
  v25 = 0LL;
  v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v5 + 32);
  if ( *((_DWORD *)v7 + 46) != GetCurrentThreadId() )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(&v25, v5);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v7);
    v6 = (Microsoft::BamoImpl::BaseBamoConnectionImpl **)v25;
  }
  v10 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)(v10 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF41E,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)retaddr);
  if ( *((_BYTE *)this + 40) )
  {
    if ( a3 )
    {
      v11 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoActivatableEntityPrincipal *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)a3 + 32LL))(
                                                        a3,
                                                        v8,
                                                        v9,
                                                        retaddr);
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v11,
        *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 6));
      v10 = *((_QWORD *)this + 6);
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 32LL);
      if ( !*((_BYTE *)this + 40) )
      {
LABEL_15:
        v16 = -2018375675;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x144,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
          (const char *)0x87B20805LL,
          v22);
        v18 = 62506LL;
        goto LABEL_16;
      }
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 32LL);
    }
    if ( *(_QWORD *)(v12 + 64) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v10);
      v14 = *(unsigned int *)(*((_QWORD *)this + 6) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)this + 4));
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      v23[0] = v14;
      v23[1] = ItemId;
      v16 = CoreUICallSend(SendHost, v23, 2LL, 95LL);
      v6 = (Microsoft::BamoImpl::BaseBamoConnectionImpl **)v25;
      goto LABEL_9;
    }
    goto LABEL_15;
  }
  v16 = -2018375660;
  v18 = 62498LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
    (const char *)v16,
    v22);
LABEL_9:
  if ( v6 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v6[4]);
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v6, v19, v20, v21);
  }
  return v16;
}
