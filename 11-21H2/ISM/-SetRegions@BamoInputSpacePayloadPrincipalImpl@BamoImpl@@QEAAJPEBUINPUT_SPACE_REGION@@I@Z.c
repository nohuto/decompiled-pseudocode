/*
 * XREFs of ?SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x180136D08
 * Callers:
 *     ?SetRegions@BamoInputSpacePayloadPrincipal@@UEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x180136CA0 (-SetRegions@BamoInputSpacePayloadPrincipal@@UEAAJPEBUINPUT_SPACE_REGION@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3@@Z @ 0x18010202C (--$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3.c)
 *     ?UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180136FD0 (-UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl.c)
 */

__int64 __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::SetRegions(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        const struct INPUT_SPACE_REGION *Src,
        unsigned int a3,
        const char *a4)
{
  int v6; // eax
  void *v7; // rdx
  unsigned int v8; // ebx
  wil::details *v10; // rcx
  __int64 v11; // rbx
  int updated; // eax
  unsigned int v13; // esi
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  v6 = Microsoft::BamoImpl::Util::CopyArray<INPUT_SPACE_REGION>(Src, a3, &v16, a4);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = (wil::details *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v16;
    if ( v10 )
      wil::details::FreeProcessHeap(v10, v7);
    v11 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 16) = a3;
    while ( v11 )
    {
      if ( *(_BYTE *)(v11 + 32) )
      {
        updated = BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCacheStatic(
                    (struct Microsoft::BamoImpl::BamoStubImpl *)v11,
                    this);
        v13 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x225,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)updated);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x92CA,
            (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)v13,
            v14);
        }
      }
      v11 = *(_QWORD *)(v11 + 48);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9410,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92C8,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v8);
    return v8;
  }
}
