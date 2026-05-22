/*
 * XREFs of ?SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x1801ACFD0
 * Callers:
 *     ??0HapticsDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1801AA7A4 (--0HapticsDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateIsPlayCountSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801AD8EC (-UpdateIsPlayCountSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@.c)
 */

void __fastcall BamoSimpleHapticsControllerPrincipal::SetIsPlayCountSupported(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        char a2)
{
  char *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 i; // rbx
  int IsPlayCountSupportedRemoteCacheStatic; // eax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  v3[49] = a2;
  for ( i = *((_QWORD *)v3 + 4); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
    {
      v8 = 0;
      goto LABEL_7;
    }
    if ( *(_BYTE *)(i + 56) )
    {
      IsPlayCountSupportedRemoteCacheStatic = BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayCountSupportedRemoteCacheStatic(
                                                (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                                                (struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *)v3);
      v8 = IsPlayCountSupportedRemoteCacheStatic;
      if ( IsPlayCountSupportedRemoteCacheStatic < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26C,
    (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)IsPlayCountSupportedRemoteCacheStatic);
LABEL_7:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCB0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v4, v5);
}
