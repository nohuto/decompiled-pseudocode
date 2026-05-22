/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18016D4C0
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x18016D6E0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A998 (--1-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A9E8 (--1-$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x18016C718 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x18016DBF0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        volatile signed __int32 **this,
        int a2,
        int a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r14
  int v10; // eax
  Microsoft::BamoImpl::BamoImplObject **v11; // rbx
  __int64 (__fastcall *v12)(volatile signed __int32 **, Microsoft::BamoImpl::BamoImplObject **, void ***, __int64 *); // rdi
  int v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int v17; // ebx
  void (__fastcall *v19)(Microsoft::BamoImpl::BamoImplObject **, __int64); // rdi
  __int64 v20; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v21; // rax
  unsigned int v22; // eax
  Microsoft::BamoImpl::BamoImplObject *v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-20h]
  unsigned int v25; // [rsp+20h] [rbp-20h]
  Microsoft::BamoImpl::BamoImplObject **v26; // [rsp+30h] [rbp-10h] BYREF
  __int64 v27; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v29; // [rsp+70h] [rbp+30h] BYREF

  v5 = a5;
  v29 = 0LL;
  *a5 = 0LL;
  v10 = (*((__int64 (__fastcall **)(volatile signed __int32 **, __int64 *))*this + 5))(this, &v27);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1917LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v24);
  v26 = (Microsoft::BamoImpl::BamoImplObject **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v11 = v26;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v26, this, a2, a3, a4);
  v12 = (__int64 (__fastcall *)(volatile signed __int32 **, Microsoft::BamoImpl::BamoImplObject **, void ***, __int64 *))*((_QWORD *)*this + 6);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  v13 = v12(this, v26, &a5, &v29);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1927LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v13,
      v25);
  if ( (_BYTE)a5 )
  {
    v19 = (void (__fastcall *)(Microsoft::BamoImpl::BamoImplObject **, __int64))*((_QWORD *)*v26 + 12);
    v20 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)this[2] + 48LL))(this[2]);
    v19(v26, v20);
    if ( v29 )
    {
      v21 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
      v22 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
              v21,
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)v26);
      (*((void (__fastcall **)(Microsoft::BamoImpl::BamoImplObject **, _QWORD))*v26 + 7))(v26, v22);
    }
    v23 = (Microsoft::BamoImpl::BamoImplObject *)this[14];
    v26 = 0LL;
    v11[8] = v23;
    this[14] = (volatile signed __int32 *)v11;
    *v5 = v11;
    wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v29);
    wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>((__int64 *)&v26);
    return 0LL;
  }
  else
  {
    v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
            v14,
            v15);
    v17 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x790,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v16);
    wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v29);
    wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>((__int64 *)&v26);
    return v17;
  }
}
