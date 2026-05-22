/*
 * XREFs of ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036BC4
 * Callers:
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18002C6E4 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateInputProcessManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180123210 (-UpdateInputProcessManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPE.c)
 *     ?UpdateSystemContextManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180123318 (-UpdateSystemContextManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJP.c)
 */

// Hidden C++ exception states: #wind=10
InputSystemInternal *__fastcall InputSystemInternal::InputSystemInternal(
        InputSystemInternal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  char *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 i; // rbx
  int v10; // edi
  Microsoft::BamoImpl::BamoImplObject *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  __int64 j; // rbx
  int v18; // edi
  Microsoft::BamoImpl::BamoImplObject *v19; // rcx
  int updated; // eax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v25; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = &BamoInputSystemInternalPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoInputSystemInternalPrincipal::`vftable'{for `IInputSystemInternalPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputSystemInternal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputSystemInternalPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &BamoInputSystemInternalPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoInputSystemInternalPrincipal::`vftable'{for `IInputSystemInternalPrincipal'};
  v4 = (char *)operator new(0x50uLL);
  v25 = (Microsoft::BamoImpl::BamoImplObject *)v4;
  *(_QWORD *)v4 = &BamoInputProcessManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)v4 + 1) = &InputProcessManager::`vftable'{for `IInputProcessManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v4 + 16), a2);
  *((_QWORD *)v4 + 2) = &BamoImpl::BamoInputProcessManagerPrincipalImpl::`vftable';
  *(_QWORD *)v4 = &InputProcessManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)v4 + 1) = &InputProcessManager::`vftable'{for `IInputProcessManagerPrincipal'};
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_DWORD *)v4 + 18) = 0;
  v4[76] = 0;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v25,
    *((struct Microsoft::BamoImpl::ConnectionIndirector **)this + 4));
  v5 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v4;
  (**(void (__fastcall ***)(void *))v4)(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  for ( i = *((_QWORD *)this + 6); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v10 = 0;
      goto LABEL_6;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateInputProcessManagerRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (InputSystemInternal *)((char *)this + 16));
      v10 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated,
    v23);
LABEL_6:
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA1B7,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10,
      v23);
  v11 = v25;
  if ( v25 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v25 + 4));
    v11 = v25;
  }
  if ( v11 )
    Microsoft::BamoImpl::BamoImplObject::Release(v11, v6, v7, v8);
  v12 = operator new(0x50uLL);
  v25 = (Microsoft::BamoImpl::BamoImplObject *)v12;
  *v12 = &BamoSystemContextManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v12[1] = &BamoSystemContextManagerPrincipal::`vftable'{for `ISystemContextManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v12 + 2), a2);
  v12[2] = &BamoImpl::BamoSystemContextManagerPrincipalImpl::`vftable';
  *v12 = &SystemContextManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v12[1] = &BamoSystemContextManagerPrincipal::`vftable'{for `ISystemContextManagerPrincipal'};
  v12[7] = 0LL;
  v12[8] = 0LL;
  v12[9] = 0LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v25,
    *((struct Microsoft::BamoImpl::ConnectionIndirector **)this + 4));
  v13 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = v12;
  (*(void (__fastcall **)(_QWORD *))*v12)(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  for ( j = *((_QWORD *)this + 6); ; j = *(_QWORD *)(j + 48) )
  {
    if ( !j )
    {
      v18 = 0;
      goto LABEL_16;
    }
    if ( *(_BYTE *)(j + 32) )
    {
      v22 = BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateSystemContextManagerRemoteCacheStatic(
              (struct Microsoft::BamoImpl::BamoStubImpl *)j,
              (InputSystemInternal *)((char *)this + 16));
      v18 = v22;
      if ( v22 < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)v22,
    v23);
LABEL_16:
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA1C8,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v18,
      v23);
  v19 = v25;
  if ( v25 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v25 + 4));
    v19 = v25;
  }
  if ( v19 )
    Microsoft::BamoImpl::BamoImplObject::Release(v19, v14, v15, v16);
  return this;
}
