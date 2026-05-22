/*
 * XREFs of ?SetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x180122F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateInputProcessManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180123210 (-UpdateInputProcessManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPE.c)
 */

void __fastcall BamoInputSystemInternalPrincipal::SetInputProcessManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoInputProcessManagerPrincipal *a2)
{
  struct BamoImpl::BamoInputSystemInternalPrincipalImpl *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 i; // rbx
  int updated; // eax
  int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct BamoImpl::BamoInputSystemInternalPrincipalImpl *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, this[3]);
  v6 = *((_QWORD *)v3 + 5);
  *((_QWORD *)v3 + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoInputProcessManagerPrincipal *))a2)(a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  for ( i = *((_QWORD *)v3 + 4); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v9 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateInputProcessManagerRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  v3);
      v9 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_11:
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA1B7,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v10);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v12, v4, v5);
}
