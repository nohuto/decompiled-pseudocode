/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180006B80
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180006A30 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  unsigned int v9; // ebp
  void **v10; // r13
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // r8
  const char *v15; // r9
  _QWORD *v16; // rbx
  __int64 v17; // rax
  Microsoft::BamoImpl::BamoImplObject *v18; // rcx
  __int64 (__fastcall *v19)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, _QWORD *, void ***, __int64 *); // rsi
  __int64 v20; // rcx
  int v21; // eax
  void (__fastcall *v22)(_QWORD *, __int64); // rbx
  __int64 v23; // rax
  unsigned int *v24; // rsi
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // r15
  void (__fastcall *v28)(unsigned int *, __int64, __int64); // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v34; // rax
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+38h] [rbp-40h] BYREF
  __int64 v37; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v39; // [rsp+80h] [rbp+8h] BYREF

  v9 = 0;
  v10 = a5;
  *a5 = 0LL;
  v39 = 0LL;
  v11 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 40LL))(
          this,
          &v36);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x71E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      v35);
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
  v16 = v13;
  v17 = *((_QWORD *)this + 12);
  v18 = (Microsoft::BamoImpl::BamoImplObject *)v13[3];
  v13[3] = v17;
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v16 = v13;
  }
  if ( v18 )
    Microsoft::BamoImpl::BamoImplObject::Release(v18, v12, v14, v15);
  *((_DWORD *)v13 + 8) = a2;
  *((_DWORD *)v13 + 9) = a3;
  *((_DWORD *)v13 + 10) = a4;
  v19 = *(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, _QWORD *, void ***, __int64 *))(*(_QWORD *)this + 48LL);
  v20 = v39;
  v39 = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = v19(this, v13, &a5, &v39);
  if ( v21 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x728,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v21,
      v35);
  if ( (_BYTE)a5 )
  {
    v22 = *(void (__fastcall **)(_QWORD *, __int64))(*v13 + 88LL);
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
    v22(v13, v23);
    if ( v39 )
    {
      v24 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
      if ( v13[3] != *((_QWORD *)v24 + 2) )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x164,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)0x87B20819LL,
          v35);
      v25 = *((_QWORD *)v24 + 4);
      if ( !v25 )
        goto LABEL_16;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v25 + 40) + 36LL) == *((_DWORD *)v13 + 9) )
          break;
        v25 = *(_QWORD *)(v25 + 48);
      }
      while ( v25 );
      if ( !v25 )
      {
LABEL_16:
        v26 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD *, __int64 *))(*(_QWORD *)v24 + 72LL))(v24, v13, &v37);
        if ( v26 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x259,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v26,
            v35);
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        *(_QWORD *)(v25 + 24) = v24;
        v27 = *(_QWORD *)(v25 + 40);
        *(_QWORD *)(v25 + 40) = v13;
        (*(void (__fastcall **)(_QWORD *))*v13)(v13);
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
        *(_QWORD *)(v25 + 48) = *((_QWORD *)v24 + 4);
        *((_QWORD *)v24 + 4) = v25;
        *(_QWORD *)(v25 + 56) = v13[7];
        v13[7] = v25;
      }
      if ( !*(_BYTE *)(v25 + 32) )
      {
        *(_BYTE *)(v25 + 32) = 1;
        v28 = *(void (__fastcall **)(unsigned int *, __int64, __int64))(*(_QWORD *)v24 + 64LL);
        v29 = *(_QWORD *)(v25 + 40);
        v30 = *(_QWORD *)(v29 + 24);
        if ( *(_BYTE *)(v29 + 48) )
        {
          v34 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v30 + 32));
          v31 = v34 ? (__int64)v34 + 16 : 0LL;
        }
        else
        {
          v31 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 72LL);
        }
        v28(v24, v31, v25);
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25);
        if ( v32 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x183,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v32,
            v35);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 16));
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 56LL))(v13, v24[6]);
    }
    v13[8] = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = v13;
    v16 = 0LL;
    *v10 = v13;
  }
  else
  {
    v9 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x731,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x87B2080CLL,
      v35);
  }
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  return v9;
}
