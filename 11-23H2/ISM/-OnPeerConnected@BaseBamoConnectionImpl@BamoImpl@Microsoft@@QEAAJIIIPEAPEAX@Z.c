/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18000EAA0
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x18000E960 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014870 (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800A1C60 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  void **v9; // r12
  int v10; // eax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  Microsoft::BamoImpl::BamoImplObject *v13; // rcx
  __int64 (__fastcall *v14)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, _QWORD *, void ***, __int64 *); // rbx
  __int64 v15; // rcx
  int v16; // eax
  void (__fastcall *v17)(_QWORD *, __int64); // rbx
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // r15
  void (__fastcall *v24)(_QWORD *, __int64, __int64); // rbp
  __int64 v25; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  int v30; // eax
  unsigned int v31; // ebx
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v32; // rax
  int v33; // [rsp+20h] [rbp-58h]
  _QWORD *v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h] BYREF
  __int64 v36; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v38; // [rsp+80h] [rbp+8h] BYREF

  v9 = a5;
  *a5 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 40LL))(
          this,
          &v35);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x77D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v33);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  v34 = v11;
  v12 = *((_QWORD *)this + 12);
  v13 = (Microsoft::BamoImpl::BamoImplObject *)v11[3];
  v11[3] = v12;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( v13 )
    Microsoft::BamoImpl::BamoImplObject::Release(v13);
  *((_DWORD *)v11 + 8) = a2;
  *((_DWORD *)v11 + 9) = a3;
  *((_DWORD *)v11 + 10) = a4;
  v14 = *(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, _QWORD *, void ***, __int64 *))(*(_QWORD *)this + 48LL);
  v15 = v38;
  v38 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = v14(this, v11, &a5, &v38);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x787,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v16,
      v33);
  if ( (_BYTE)a5 )
  {
    v17 = *(void (__fastcall **)(_QWORD *, __int64))(*v11 + 96LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    v17(v11, v18);
    if ( v38 )
    {
      v19 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
      v20 = v19;
      if ( v11[3] != v19[2] )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19D,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)0x87B20819LL,
          v33);
      v21 = v19[4];
      if ( !v21 )
        goto LABEL_16;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v21 + 32) + 36LL) == *((_DWORD *)v11 + 9) )
          break;
        v21 = *(_QWORD *)(v21 + 40);
      }
      while ( v21 );
      if ( !v21 )
      {
LABEL_16:
        v22 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64 *))(*v19 + 72LL))(v19, v11, &v36);
        if ( v22 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x29F,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v22,
            v33);
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
        *(_QWORD *)(v21 + 24) = v20;
        v23 = *(_QWORD *)(v21 + 32);
        *(_QWORD *)(v21 + 32) = v11;
        if ( v11 )
          (*(void (__fastcall **)(_QWORD *))*v11)(v11);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        *(_QWORD *)(v21 + 40) = v20[4];
        v20[4] = v21;
        *(_QWORD *)(v21 + 48) = v11[7];
        v11[7] = v21;
      }
      if ( !*(_BYTE *)(v21 + 56) )
      {
        *(_BYTE *)(v21 + 56) = 1;
        *(_BYTE *)(v21 + 59) = 1;
        v24 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v20 + 64LL);
        v25 = *(_QWORD *)(v21 + 32);
        v26 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v25 + 24) + 32LL);
        if ( *(_BYTE *)(v25 + 48) )
        {
          v32 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v26);
          v27 = v32 ? (__int64)v32 + 16 : 0LL;
        }
        else
        {
          v27 = *((_QWORD *)v26 + 9);
        }
        v24(v20, v27, v21);
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
        if ( v28 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1BC,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v28,
            v33);
      }
      ++*(_DWORD *)(v21 + 16);
      *(_BYTE *)(v21 + 60) = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 56LL))(v11, *((unsigned int *)v20 + 6));
    }
    v11[8] = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = v11;
    v34 = 0LL;
    *v9 = v11;
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
    return 0LL;
  }
  else
  {
    v30 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, -2018375668, 0);
    v31 = v30;
    if ( v30 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x790,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v30,
        v33);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v38);
    wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>(&v34);
    return v31;
  }
}
