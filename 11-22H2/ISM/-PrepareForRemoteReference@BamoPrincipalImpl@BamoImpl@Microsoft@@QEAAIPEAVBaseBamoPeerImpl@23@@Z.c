/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800082C0
 * Callers:
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800050D0 (-RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UE.c)
 *     ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180007100 (-CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180032464 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800B4E04 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x1800B7578 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800B4298 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r14
  void (__fastcall *v7)(Microsoft::BamoImpl::BamoPrincipalImpl *, char *, __int64); // rsi
  __int64 v8; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  char *v10; // rdx
  int v11; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v13; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a2 + 3) != *((_QWORD *)this + 2) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)0x87B20819LL,
      v14);
  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
    goto LABEL_6;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 32) + 36LL) == *((_DWORD *)a2 + 9) )
      break;
    v4 = *(_QWORD *)(v4 + 40);
  }
  while ( v4 );
  if ( !v4 )
  {
LABEL_6:
    v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64 *))(*(_QWORD *)this + 72LL))(
           this,
           a2,
           &v16);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v5,
        v14);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    *(_QWORD *)(v4 + 24) = this;
    v6 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = a2;
    (**(void (__fastcall ***)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *))a2)(a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *(_QWORD *)(v4 + 40) = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v4;
    *(_QWORD *)(v4 + 48) = *((_QWORD *)a2 + 7);
    *((_QWORD *)a2 + 7) = v4;
  }
  if ( !*(_BYTE *)(v4 + 56) )
  {
    *(_BYTE *)(v4 + 56) = 1;
    *(_BYTE *)(v4 + 59) = 1;
    v7 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, char *, __int64))(*(_QWORD *)this + 64LL);
    v8 = *(_QWORD *)(v4 + 32);
    v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL);
    if ( *(_BYTE *)(v8 + 48) )
    {
      v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v9);
      if ( v13 )
        v10 = (char *)v13 + 16;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = (char *)*((_QWORD *)v9 + 9);
    }
    v7(this, v10, v4);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1BC,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v11,
        v14);
  }
  ++*(_DWORD *)(v4 + 16);
  *(_BYTE *)(v4 + 60) = 1;
  return *((unsigned int *)this + 6);
}
