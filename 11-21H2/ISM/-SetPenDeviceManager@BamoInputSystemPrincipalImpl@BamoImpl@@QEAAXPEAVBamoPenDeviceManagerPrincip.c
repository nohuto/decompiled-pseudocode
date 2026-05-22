/*
 * XREFs of ?SetPenDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180121C34
 * Callers:
 *     ?SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180121BE0 (-SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdatePenDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012235C (-UpdatePenDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetPenDeviceManager(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoPenDeviceManagerPrincipal *a2)
{
  __int64 v3; // rbx
  __int64 i; // rbx
  int updated; // eax
  unsigned int v6; // esi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoPenDeviceManagerPrincipal *))a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenDeviceManagerRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v6 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x225,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x964D,
          (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v6,
          v7);
      }
    }
  }
}
