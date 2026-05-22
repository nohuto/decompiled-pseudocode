/*
 * XREFs of ?UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18017490C
 * Callers:
 *     ?Thunk_UpdateEnabled_11@?$IControllerNavigationClientProxy_Receive@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801745A0 (-Thunk_UpdateEnabled_11@-$IControllerNavigationClientProxy_Receive@VBamoControllerNavigationClie.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180175060 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationClientProxyImpl@BamoImpl@@UE.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoControllerNavigationClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1801736B8 (--0-$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Mi_ea_1801736B8.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180173884 (--1-$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateEnabled(
        BamoImpl::BamoControllerNavigationClientProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // di
  char v4; // si
  char v6; // al
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = *((_BYTE *)this + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    LOBYTE(v7) = v3;
    v8 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FEF,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>((__int64)v11);
    v6 = *((_BYTE *)this + 28);
  }
  *((_BYTE *)this + 32) = v3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FFB,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>((__int64)v11);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
