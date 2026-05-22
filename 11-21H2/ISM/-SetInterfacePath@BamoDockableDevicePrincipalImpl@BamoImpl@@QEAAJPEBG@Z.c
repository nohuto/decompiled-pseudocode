/*
 * XREFs of ?SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18017F778
 * Callers:
 *     ?SetInterfacePath@BamoDockableDevicePrincipal@@UEAAJPEBG@Z @ 0x18017F720 (-SetInterfacePath@BamoDockableDevicePrincipal@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x180107388 (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180120514 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@wil@@YAX0@ZU.c)
 *     ?UpdateInterfacePathRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180180118 (-UpdateInterfacePathRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::SetInterfacePath(
        wil::details **this,
        Microsoft::BamoImpl::Util *a2,
        unsigned __int16 **a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details *i; // rbx
  int updated; // eax
  unsigned int v10; // esi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  wil::details *v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = Microsoft::BamoImpl::Util::CopyString(a2, (unsigned __int16 *)&v13, a3, a4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      this + 5,
      v13);
    for ( i = this[4]; i; i = (wil::details *)*((_QWORD *)i + 6) )
    {
      if ( *((_BYTE *)i + 32) )
      {
        updated = BamoImpl::BamoDockableDevicePrincipalImpl::UpdateInterfacePathRemoteCacheStatic(
                    i,
                    (struct BamoImpl::BamoDockableDevicePrincipalImpl *)this);
        v10 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x225,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)updated);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x372F,
            (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)v10,
            v11);
        }
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x394F,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x372D,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
    return v6;
  }
}
