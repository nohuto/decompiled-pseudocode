/*
 * XREFs of ?UpdateInputObserverManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800078A0
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008800 (-SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAV.c)
 *     ?PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18002D4CC (-PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z.c)
 *     ?UpdateInputObserverManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CD98 (-UpdateInputObserverManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800A1C60 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputObserverManagerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r15
  char *v11; // r14
  void (__fastcall *v12)(_QWORD *, __int64, __int64); // r15
  __int64 v13; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned int *v21; // rbx
  __int64 v22; // rdx
  unsigned int v23; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v24; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // [rsp+20h] [rbp-48h]
  _QWORD v30[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = *((_QWORD *)this + 12);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL);
      v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v7 = v6;
      if ( *(_QWORD *)(v6 + 24) != v5[2] )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19D,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)0x87B20819LL,
          v29);
      v8 = v5[4];
      if ( !v8 )
        goto LABEL_8;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v8 + 32) + 36LL) == *(_DWORD *)(v6 + 36) )
          break;
        v8 = *(_QWORD *)(v8 + 40);
      }
      while ( v8 );
      if ( !v8 )
      {
LABEL_8:
        v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v5 + 72LL))(v5, v6, &v32);
        if ( v9 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x29F,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v9,
            v29);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
        *(_QWORD *)(v8 + 24) = v5;
        v10 = *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v8 + 32) = v7;
        (**(void (__fastcall ***)(__int64))v7)(v7);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        *(_QWORD *)(v8 + 40) = v5[4];
        v5[4] = v8;
        *(_QWORD *)(v8 + 48) = *(_QWORD *)(v7 + 56);
        *(_QWORD *)(v7 + 56) = v8;
      }
      v11 = 0LL;
      if ( !*(_BYTE *)(v8 + 56) )
      {
        *(_BYTE *)(v8 + 56) = 1;
        *(_BYTE *)(v8 + 59) = 1;
        v12 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v5 + 64LL);
        v13 = *(_QWORD *)(v8 + 32);
        v14 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v13 + 24) + 32LL);
        if ( *(_BYTE *)(v13 + 48) )
        {
          v24 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v14);
          v15 = v24 ? (__int64)v24 + 16 : 0LL;
        }
        else
        {
          v15 = *((_QWORD *)v14 + 9);
        }
        v12(v5, v15, v8);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1BC,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v16,
            v29);
      }
      ++*(_DWORD *)(v8 + 16);
      *(_BYTE *)(v8 + 60) = 1;
    }
    else
    {
      v11 = 0LL;
    }
    v17 = *((_QWORD *)a2 + 4);
    v18 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v17 + 24) + 32LL);
    if ( *((_BYTE *)a2 + 56) && *((_QWORD *)v18 + 8) )
    {
      if ( *(_BYTE *)(v17 + 48) )
      {
        v25 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v18);
        if ( v25 )
          v11 = (char *)v25 + 16;
      }
      else
      {
        v11 = (char *)*((_QWORD *)v18 + 9);
      }
      v19 = *(unsigned int *)(*((_QWORD *)a2 + 4) + 36LL);
      v20 = *((_QWORD *)a2 + 3);
      v21 = (unsigned int *)(v20 + 24);
      if ( !*(_DWORD *)(v20 + 24) && *(int *)(v20 + 8) > 0 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 32LL);
        v27 = *(_QWORD *)(v26 + 64);
        if ( v27 )
        {
          v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v27 + 24LL))(
                  v27,
                  *(unsigned int *)(v26 + 28),
                  v20,
                  v20 + 24);
          if ( v28 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v28,
              v29);
        }
      }
      v22 = *v21;
      ++*((_DWORD *)a2 + 4);
      *((_BYTE *)a2 + 60) = 1;
      v30[0] = v19;
      v30[1] = v22;
      LOWORD(v29) = 7;
      v23 = CoreUICallSend(v11, v30, 2LL, 59LL);
      if ( (int)(v23 + 0x80000000) >= 0 && v23 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xC9F7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v23,
          v29);
    }
    else
    {
      if ( v18 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v18, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v29);
    }
  }
}
