/*
 * XREFs of ?UpdateId@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18011C2F8
 * Callers:
 *     ?Thunk_UpdateId_0@?$IEdgyDragSourceClientProxy_Receive@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118A30 (-Thunk_UpdateId_0@-$IEdgyDragSourceClientProxy_Receive@VBamoEdgyDragSourceClientProxyImpl@BamoIm.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011EA10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyDragSourceClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180103374 (--0-$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsof_ea_180103374.c)
 *     ??1?$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801052F8 (--1-$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateId(
        BamoImpl::BamoEdgyDragSourceClientProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // si
  char v6; // al
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = *((_BYTE *)this + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x577F,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>((__int64)v10);
    v6 = *((_BYTE *)this + 28);
  }
  *((_QWORD *)this + 6) = a3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 128LL))((char *)this - 16);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x578B,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
