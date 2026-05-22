/*
 * XREFs of ?UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x180119C68
 * Callers:
 *     ?Thunk_UpdateControlPoints_161@?$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801186D0 (-Thunk_UpdateControlPoints_161@-$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@B.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011E970 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z @ 0x1801020E8 (--$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z.c)
 *     ??0?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDragSourceClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180103080 (--0-$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_180103080.c)
 *     ??1?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105184 (--1-$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        char a2,
        struct tagPOINT *a3,
        const char *a4)
{
  unsigned int v4; // esi
  int v8; // eax
  int v9; // eax
  void *v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  wil::details *v13; // rcx
  int v14; // eax
  int v16[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

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
        (void *)0x4942,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
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
      (void *)0x49B1,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
  }
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4945,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
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
        (void *)0x494E,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v14,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>((__int64)v16);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v10, v11);
  return 0LL;
}
