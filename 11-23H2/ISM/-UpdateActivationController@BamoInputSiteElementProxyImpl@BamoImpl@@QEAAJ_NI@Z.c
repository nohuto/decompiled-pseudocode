/*
 * XREFs of ?UpdateActivationController@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1800264B0
 * Callers:
 *     ?Thunk_UpdateActivationController_8@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180019D50 (-Thunk_UpdateActivationController_8@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180140200 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180025250 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteElementProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180027190 (--0-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18002915C (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateActivationController(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rsi
  __int64 v8; // r14
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_2;
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL),
           *(unsigned int *)(v5 + 36),
           a3);
  if ( Item )
  {
    v11 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 48LL))(Item);
    v6 = v11;
    if ( v11 )
    {
      v7 = (void (__fastcall ***)(_QWORD))(v11 - 16);
LABEL_2:
      if ( *((_BYTE *)this + 28) )
      {
        Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
          v16,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
          this,
          1LL);
        v14 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 152LL))(
                (char *)this - 16,
                v7);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xB89C,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)(unsigned int)v14,
            v16[0]);
        Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v16);
      }
      v8 = *((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v7;
      if ( v7 )
        (**v7)(v7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v6 && !*(_BYTE *)(v6 + 29) )
      {
        if ( *(int *)(v6 + 8) <= 0 )
          a3 = 0LL;
        else
          LOBYTE(a3) = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v6 + 16) + 64LL))(
          *(_QWORD *)(v6 + 16),
          *(unsigned int *)(v6 + 24),
          a3);
      }
      if ( *((_BYTE *)this + 28) )
      {
        Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
          v16,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
          this,
          2LL);
        v15 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 160LL))((char *)this - 16);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xB8AD,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)(unsigned int)v15,
            v16[0]);
        Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v16);
      }
      if ( a2 && !*((_BYTE *)this + 29) )
      {
        if ( *((int *)this + 2) > 0 )
          LOBYTE(a3) = 1;
        else
          a3 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 64LL))(
          *((_QWORD *)this + 2),
          *((unsigned int *)this + 6),
          a3);
      }
      return 0LL;
    }
  }
  v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL),
          -2018375668,
          0);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB88F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12,
      v16[0]);
  return v13;
}
