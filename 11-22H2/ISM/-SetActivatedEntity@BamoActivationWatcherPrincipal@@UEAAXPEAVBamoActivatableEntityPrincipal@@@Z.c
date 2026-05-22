/*
 * XREFs of ?SetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800B7980
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800B6D10 (--4-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?UpdateActivatedEntityRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B7DF4 (-UpdateActivatedEntityRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoActivationWatcherPrincipal::SetActivatedEntity(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoActivatableEntityPrincipal *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 i; // rbx
  int updated; // eax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>::operator=(
    v3 + 6,
    (void (__fastcall ***)(_QWORD))a2);
  for ( i = v3[4]; ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
    {
      v8 = 0;
      goto LABEL_7;
    }
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatedEntityRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoActivationWatcherPrincipalImpl *)v3);
      v8 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26C,
    (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_7:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C0A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v4, v5);
}
