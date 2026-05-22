/*
 * XREFs of ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011B650
 * Callers:
 *     ?Thunk_UpdateGestureRecognitionConfiguration_8@?$IEdgyNotificationSourceClientProxy_Receive@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118910 (-Thunk_UpdateGestureRecognitionConfiguration_8@-$IEdgyNotificationSourceClientProxy_Receive@VBam.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011EAE0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyNotificationSourceClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18010356C (--0-$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@_ea_18010356C.c)
 *     ??1?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801053F0 (--1-$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180105F98 (--4-$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateGestureRecognitionConfiguration(
        BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *this,
        char a2,
        __int64 a3)
{
  __int64 v5; // rcx
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  int v14[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL),
              *(unsigned int *)(v5 + 36),
              a3);
    v6 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F48,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v7 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>(
      (__int64)v14,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v10 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 120LL))(
            (char *)this - 16,
            v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5F55,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v14[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>((__int64)v14);
  }
  wil::com_ptr_t<BamoEdgyGestureRecognitionConfigurationProxy,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 5,
    v7);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, v11, v12);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>(
      (__int64)v14,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 128LL))((char *)this - 16);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5F66,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13,
        v14[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>((__int64)v14);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v11, v12);
  return 0LL;
}
