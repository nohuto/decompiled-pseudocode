/*
 * XREFs of ?SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1801A8684
 * Callers:
 *     ?SetHaptics@BamoPenDevicePrincipal@@UEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1801A8630 (-SetHaptics@BamoPenDevicePrincipal@@UEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateHapticsRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801A8A58 (-UpdateHapticsRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micros.c)
 */

void __fastcall BamoImpl::BamoPenDevicePrincipalImpl::SetHaptics(
        BamoImpl::BamoPenDevicePrincipalImpl *this,
        struct BamoSimpleHapticsControllerPrincipal *a2)
{
  __int64 v3; // rbx
  __int64 i; // rbx
  int updated; // eax
  unsigned int v6; // esi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoSimpleHapticsControllerPrincipal *))a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoPenDevicePrincipalImpl::UpdateHapticsRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v6 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26C,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE97E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v6,
          v7);
      }
    }
  }
}
