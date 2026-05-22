/*
 * XREFs of ?UpdateWindowsMessageDelivery@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18000F7A0
 * Callers:
 *     ?Thunk_UpdateWindowsMessageDelivery_8@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001A1A0 (-Thunk_UpdateWindowsMessageDelivery_8@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProx.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18014E2B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ??0?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteElementProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800283F0 (--0-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18002A36C (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateWindowsMessageDelivery(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rsi
  __int64 v8; // r14
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-48h]
  _BYTE v20[56]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_2;
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 32LL);
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(v10 + 64) + 56LL))(
          *(_QWORD *)(v10 + 64),
          *(unsigned int *)(v5 + 36),
          a3,
          &v22);
  if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2018375675 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x48A,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)v11,
      v19);
  if ( v22 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v22 + 48LL))(v22, v12, v13, v11);
    v6 = v14;
    if ( v14 )
    {
      v7 = (void (__fastcall ***)(_QWORD))(v14 - 16);
LABEL_2:
      if ( *((_BYTE *)this + 28) )
      {
        Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
          v20,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
          this,
          1LL);
        v17 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 648LL))(
                (char *)this - 16,
                v7);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xC50D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)(unsigned int)v17,
            v19);
        Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v20);
      }
      v8 = *((_QWORD *)this + 38);
      *((_QWORD *)this + 38) = v7;
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
          v20,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
          this,
          2LL);
        v18 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 656LL))((char *)this - 16);
        if ( v18 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xC51E,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)(unsigned int)v18,
            v19);
        Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v20);
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
  v15 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL),
          -2018375668,
          0);
  v16 = v15;
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC500,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v15,
      v19);
  return v16;
}
