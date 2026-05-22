/*
 * XREFs of ?UpdateInputProcessManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011C7FC
 * Callers:
 *     ?Thunk_UpdateInputProcessManager_8@?$IInputSystemInternalProxy_Receive@VBamoInputSystemInternalProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118A90 (-Thunk_UpdateInputProcessManager_8@-$IInputSystemInternalProxy_Receive@VBamoInputSystemInternalP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemInternalProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011EBB0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemInternalProxyImpl@BamoImpl@@UEAAXPEAV.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSystemInternalProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180103D4C (--0-$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180103D4C.c)
 *     ??1?$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801057D0 (--1-$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoInputSystemInternalProxyImpl::UpdateInputProcessManager(
        BamoImpl::BamoInputSystemInternalProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bp
  __int64 v5; // rcx
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rsi
  void (__fastcall ***v7)(_QWORD); // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v10; // eax
  __int64 v11; // r14
  int v12; // eax
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2;
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
        (void *)0xA410,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v7 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>(
      (__int64)v13,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v10 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 104LL))(
            (char *)this - 16,
            v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA41D,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v13[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>((__int64)v13);
  }
  v11 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, a2, a3);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>(
      (__int64)v13,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA42E,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        v13[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>((__int64)v13);
  }
  if ( v3 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
