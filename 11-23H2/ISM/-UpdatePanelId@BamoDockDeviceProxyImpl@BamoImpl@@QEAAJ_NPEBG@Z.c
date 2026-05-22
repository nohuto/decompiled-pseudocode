/*
 * XREFs of ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x180138B5C
 * Callers:
 *     ?Thunk_UpdatePanelId_72@?$IDockDeviceProxy_Receive@VBamoDockDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801340E0 (-Thunk_UpdatePanelId_72@-$IDockDeviceProxy_Receive@VBamoDockDeviceProxyImpl@BamoImpl@@@@SAJPEAXP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180139F20 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDockDeviceProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18011E904 (--0-$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PE_ea_18011E904.c)
 *     ??1?$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120970 (--1-$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x18012308C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18013BC0C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@wil@@YAX0@ZU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        char a2,
        Microsoft::BamoImpl::Util *a3,
        const char *a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  int v14[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>(
      (__int64)v14,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(char *, Microsoft::BamoImpl::Util *))(*((_QWORD *)this - 2) + 104LL))(
           (char *)this - 16,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5F1D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v14[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>((__int64)v14);
  }
  v8 = Microsoft::BamoImpl::Util::CopyString(a3, (unsigned __int16 *)&v16, (unsigned __int16 **)a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 32,
      v16);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FBC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
  }
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5F20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v14[0]);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>(
      (__int64)v14,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5F29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        v14[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>((__int64)v14);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v10, v11);
  return 0LL;
}
