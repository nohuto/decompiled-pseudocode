/*
 * XREFs of ?UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x1801432D0
 * Callers:
 *     ?Thunk_UpdateControlPoints_150@?$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141C70 (-Thunk_UpdateControlPoints_150@-$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@B.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180147FF0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800558A8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z @ 0x18012BE40 (--$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z.c)
 *     ??0?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragSourceClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18012CBE8 (--0-$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_18012CBE8.c)
 *     ??1?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EAD4 (--1-$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        char a2,
        struct tagPOINT *a3,
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v8 = (*(__int64 (__fastcall **)(char *, struct tagPOINT *, _QWORD))(*((_QWORD *)this - 2) + 152LL))(
           (char *)this - 16,
           a3,
           v4);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x720B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>((__int64)v16);
  }
  v9 = Microsoft::BamoImpl::Util::CopyArray<tagPOINT>(a3, v4, &v18, a4);
  v12 = v9;
  if ( v9 >= 0 )
  {
    v13 = (wil::details *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v18;
    if ( v13 )
      wil::details::FreeProcessHeap(v13, v10);
    *((_DWORD *)this + 18) = v4;
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x727A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
  }
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x720E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12,
      v16[0]);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 160LL))((char *)this - 16);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7217,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v14,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>((__int64)v16);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v10, v11);
  return 0LL;
}
