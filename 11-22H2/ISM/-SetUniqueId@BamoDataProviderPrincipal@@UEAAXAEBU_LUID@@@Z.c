/*
 * XREFs of ?SetUniqueId@BamoDataProviderPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x1800548A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180122870 (-UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Mi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoDataProviderPrincipal::SetUniqueId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _LUID *a2)
{
  struct _LUID *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _LUID i; // rbx
  int v7; // edi
  int updated; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _LUID *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  v3[5] = *a2;
  for ( i = v3[4]; ; i = *(struct _LUID *)(*(_QWORD *)&i + 40LL) )
  {
    if ( !*(_QWORD *)&i )
    {
      v7 = 0;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(*(_QWORD *)&i + 56LL) )
    {
      updated = BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
                  *(struct Microsoft::BamoImpl::BamoStubImpl **)&i,
                  (struct BamoImpl::BamoDataProviderPrincipalImpl *)v3);
      v7 = updated;
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
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x276F,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v4, v5);
}
