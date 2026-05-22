/*
 * XREFs of ?SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z @ 0x1800F7DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F8B8C (-UpdateUniqueIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoDataSourcePrincipal::SetUniqueId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _LUID *a2)
{
  struct _LUID *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _LUID i; // rbx
  int updated; // eax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _LUID *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  v3[5] = *a2;
  for ( i = v3[4]; ; i = *(struct _LUID *)(*(_QWORD *)&i + 48LL) )
  {
    if ( !*(_QWORD *)&i )
    {
      v8 = 0;
      goto LABEL_7;
    }
    if ( *(_BYTE *)(*(_QWORD *)&i + 32LL) )
    {
      updated = BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
                  *(struct Microsoft::BamoImpl::BamoStubImpl **)&i,
                  (struct BamoImpl::BamoDataSourcePrincipalImpl *)v3);
      v8 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_7:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x27E8,
      (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, v4, v5);
}
