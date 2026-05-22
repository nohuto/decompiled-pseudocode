/*
 * XREFs of ?UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z @ 0x180139648
 * Callers:
 *     ?Thunk_UpdateRegions_269@?$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18005E5E0 (-Thunk_UpdateRegions_269@-$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18013A200 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180054B38 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3@@Z @ 0x18011DD94 (--$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3.c)
 *     ??0?$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSpacePayloadProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18011F7F4 (--0-$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@_ea_18011F7F4.c)
 *     ??1?$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801210B4 (--1-$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        char a2,
        const struct INPUT_SPACE_REGION *a3,
        const char *a4)
{
  unsigned int v4; // ebp
  int v8; // eax
  int v9; // eax
  void *v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  wil::details *v13; // rcx
  int v14; // eax
  int v16[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int)a4;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v8 = (*(__int64 (__fastcall **)(char *, const struct INPUT_SPACE_REGION *, _QWORD))(*((_QWORD *)this - 2) + 120LL))(
           (char *)this - 16,
           a3,
           v4);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5D9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>((__int64)v16);
  }
  v9 = Microsoft::BamoImpl::Util::CopyArray<INPUT_SPACE_REGION>(a3, v4, &v18, a4);
  v12 = v9;
  if ( v9 >= 0 )
  {
    v13 = (wil::details *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v18;
    if ( v13 )
      wil::details::FreeProcessHeap(v13, v10);
    *((_DWORD *)this + 14) = v4;
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC628,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
  }
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC5DC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12,
      v16[0]);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 128LL))((char *)this - 16);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5E5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v14,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>((__int64)v16);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v10, v11);
  return 0LL;
}
