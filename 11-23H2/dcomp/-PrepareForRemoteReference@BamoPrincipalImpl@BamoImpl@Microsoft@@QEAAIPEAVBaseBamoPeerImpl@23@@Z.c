/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x18016DBF0
 * Callers:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18016D4C0 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x18016B42C (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18016C5E8 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rbx
  void (__fastcall *v4)(Microsoft::BamoImpl::BamoPrincipalImpl *, char *, struct Microsoft::BamoImpl::BamoStubImpl *); // rsi
  __int64 v5; // rcx
  bool v6; // zf
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rcx
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v8; // rax
  char *v9; // rdx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)a2 + 3) != *((_QWORD *)this + 2) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      413LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)0x87B20819LL,
      v12);
  Stub = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
  if ( !Stub )
    goto LABEL_7;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)Stub + 4) + 36LL) == *((_DWORD *)a2 + 9) )
      break;
    Stub = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)Stub + 5);
  }
  while ( Stub );
  if ( !Stub )
LABEL_7:
    Stub = Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(this, a2);
  if ( !*((_BYTE *)Stub + 56) )
  {
    *((_BYTE *)Stub + 56) = 1;
    *((_BYTE *)Stub + 59) = 1;
    v4 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, char *, struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 64LL);
    v5 = *((_QWORD *)Stub + 4);
    v6 = *(_BYTE *)(v5 + 48) == 0;
    v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL);
    if ( v6 )
    {
      v9 = (char *)*((_QWORD *)v7 + 9);
    }
    else
    {
      v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v7);
      if ( v8 )
        v9 = (char *)v8 + 16;
      else
        v9 = 0LL;
    }
    v4(this, v9, Stub);
    v10 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 48LL))(Stub);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        444LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v10,
        v12);
  }
  ++*((_DWORD *)Stub + 4);
  *((_BYTE *)Stub + 60) = 1;
  return *((unsigned int *)this + 6);
}
