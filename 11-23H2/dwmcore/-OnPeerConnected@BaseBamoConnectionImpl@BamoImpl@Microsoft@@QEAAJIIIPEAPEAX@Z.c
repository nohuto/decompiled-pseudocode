/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800D42E0
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800D60E0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800D63BC (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800D66D4 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800FB870 (--1-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B7200 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801BB710 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r14
  int v10; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v11; // rbx
  __int64 (__fastcall *v12)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *); // rdi
  int v13; // eax
  void (__fastcall *v14)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64); // rdi
  __int64 v15; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v16; // rax
  unsigned int v17; // eax
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+20h] [rbp-38h]
  _QWORD v23[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v25 = 0LL;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, _QWORD *))(*(_QWORD *)this + 40LL))(
          this,
          v23);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x77D,
      (unsigned int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v21);
  v11 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 8LL))(v23[0]);
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v11, this, a2, a3, a4);
  v12 = *(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *))(*(_QWORD *)this + 48LL);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  v13 = v12(this, v11, &a5, &v25);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x787,
      (unsigned int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v13,
      v22);
  if ( (_BYTE)a5 )
  {
    v14 = *(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))(*(_QWORD *)v11 + 96LL);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    v14(v11, v15);
    if ( v25 )
    {
      v16 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
      v17 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v16, v11);
      (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, v17);
    }
    *((_QWORD *)v11 + 8) = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = v11;
    *v5 = v11;
    wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v25);
    return 0LL;
  }
  else
  {
    v19 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, -2018375668, 0);
    v20 = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x790,
        (unsigned int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v19,
        v22);
    wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v25);
    if ( v11 )
      (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(*(_QWORD *)v11 + 8LL))(v11);
    return v20;
  }
}
