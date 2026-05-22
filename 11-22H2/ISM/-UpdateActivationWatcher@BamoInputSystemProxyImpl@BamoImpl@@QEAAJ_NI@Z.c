/*
 * XREFs of ?UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180142B90
 * Callers:
 *     ?Thunk_UpdateActivationWatcher_8@?$IInputSystemProxy_Receive@VBamoInputSystemProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141BD0 (-Thunk_UpdateActivationWatcher_8@-$IInputSystemProxy_Receive@VBamoInputSystemProxyImpl@BamoImpl@.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180148280 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemProxyImpl@BamoImpl@@UEAAXPEAVBamoProx.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSystemProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18012D9DC (--0-$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P_ea_18012D9DC.c)
 *     ??1?$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F19C (--1-$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoInputSystemProxyImpl::UpdateActivationWatcher(
        BamoImpl::BamoInputSystemProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // r12
  __int64 v5; // rbp
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rsi
  void (__fastcall ***v7)(_QWORD); // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  unsigned int v10; // ebx
  char *v12; // r15
  int v13; // eax
  __int64 v14; // r14
  int v15; // eax
  int v16[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

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
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
             0x87B2080C,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD248,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v9);
      return v10;
    }
    v7 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v12 = (char *)this - 16;
    v13 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 104LL))(
            (char *)this - 16,
            v7);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD255,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>((__int64)v16);
  }
  else
  {
    v12 = (char *)this - 16;
  }
  v14 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, a2, a3);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 112LL))(v12);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD266,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>((__int64)v16);
  }
  if ( v3 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
