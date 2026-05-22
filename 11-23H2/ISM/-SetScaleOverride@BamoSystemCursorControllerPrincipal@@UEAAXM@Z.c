/*
 * XREFs of ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x1800537E0
 * Callers:
 *     ??0SystemCursorController2@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003A34C (--0SystemCursorController2@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180102F94 (-UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoSystemCursorControllerPrincipal::SetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        float a2)
{
  float *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 i; // rbx
  int v6; // edi
  int updated; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (float *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v10, this[3]);
  v2[10] = a2;
  for ( i = *((_QWORD *)v2 + 4); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
    {
      v6 = 0;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoSystemCursorControllerPrincipalImpl *)v2);
      v6 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26C,
    (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_4:
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A49,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10, v3, v4);
}
